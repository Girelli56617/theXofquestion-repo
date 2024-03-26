#include "ORIGEM2.h"

void cena37(Jogo* jogo){
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Surface* Smensagem = NULL, * Smensagem2 = NULL;
	SDL_Texture* mensagem = NULL, * mensagem2 = NULL;

	SDL_Rect rectiris = {jogo->personagem.x + jogo->scrollX, jogo->personagem.y + jogo->scrollY,
		jogo->personagem.w, jogo->personagem.w };
	SDL_RenderCopy(jogo->renderer, jogo->cabeca, NULL, &rectiris);
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			SDL_Rect parede = { jogo->chao[i][j].x + jogo->scrollX, jogo->chao[i][j].y + jogo->scrollY, 
				jogo->chao[i][j].w, jogo->chao[i][j].h};
			if (j == 0 || j == 19) {
				SDL_RenderCopy(jogo->renderer, jogo->tetocelula, NULL, &parede);
			}
			else {
				SDL_RenderCopy(jogo->renderer, jogo->paredecelula, NULL, &parede);
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		SDL_Rect bloco = { jogo->bloco[i].x + jogo->scrollX , jogo->bloco[i].y + jogo->scrollY ,
	jogo->bloco[i].w, jogo->bloco[i].h };
		if (i == 0 || i == 3 || i == 4) {
			SDL_RenderCopy(jogo->renderer, jogo->blocos[0], NULL, &bloco);
		}
		if (i == 1 || i == 5 || i == 8) {
			SDL_RenderCopy(jogo->renderer, jogo->blocos[1], NULL, &bloco);
		}
		if (i == 2) {
			SDL_RenderCopy(jogo->renderer, jogo->blocos[3], NULL, &bloco);
		}
		if (i == 6) {
			SDL_RenderCopy(jogo->renderer, jogo->blocos[2], NULL, &bloco);
		}
		if (i == 7) {
			SDL_RenderCopy(jogo->renderer, jogo->blocos[4], NULL, &bloco);
		}
	}

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	for (int i = 0; i < 38; i++) {
		SDL_Rect RectBol = { jogo->bolinhasV[i].x + jogo->scrollX,
			jogo->bolinhasV[i].y + jogo->scrollY, jogo->bolinhasV[i].w, jogo->bolinhasV[i].w };
		float px = jogo->personagem.x, py = jogo->personagem.y, pw = jogo->personagem.w;
		int bx = jogo->bolinhasV[i].x, by = jogo->bolinhasV[i].y, bw = jogo->bolinhasV[i].w, bh = jogo->bolinhasV[i].h,
			ph = jogo->personagem.h;

		if (px + pw - 10 > bx && bx + bw > px + 10) {
			if (py + ph < by + bh && by < py + ph && jogo->personagem.Dy > 0) {
				if (i < 36) {
					jogo->coletado += 1;
				}
				else if (i >= 36) {
					jogo->coletado2 += 1;
				}
				jogo->bolinhasV[i].x = 0, jogo->bolinhasV[i].y = 0, jogo->bolinhasV[i].w = 0, jogo->bolinhasV[i].h = 0;
				py = by - ph;
			}
			else if (py < by + bh && py + ph > by + bh && jogo->personagem.Dy < 0) {
				if (i < 36) {
					jogo->coletado += 1;
				}
				else if (i >= 36) {
					jogo->coletado2 += 1;
				}
				jogo->bolinhasV[i].x = 0, jogo->bolinhasV[i].y = 0, jogo->bolinhasV[i].w = 0, jogo->bolinhasV[i].h = 0;
				py = by + bh;
			}
		}

		if (py < by + bh && py + ph > by) {
			if (px + pw > bx && bx > px && jogo->personagem.Dx > 0) {
				if (i < 36) {
					jogo->coletado += 1;
				}
				else if (i >= 36) {
					jogo->coletado2 += 1;
				}
				jogo->bolinhasV[i].x = 0, jogo->bolinhasV[i].y = 0, jogo->bolinhasV[i].w = 0, jogo->bolinhasV[i].h = 0;
				px = bx - pw;
			}
			else if (px + pw > bx + bw && px < bx + bw && jogo->personagem.Dx < 0) {
				if (i < 36) {
					jogo->coletado += 1;
				}
				else if (i >= 36) {
					jogo->coletado2 += 1;
				}
				jogo->bolinhasV[i].x = 0, jogo->bolinhasV[i].y = 0, jogo->bolinhasV[i].w = 0, jogo->bolinhasV[i].h = 0;
				px = bx + bw;
			}
		}
		if (i < 36) {
			SDL_RenderCopy(jogo->renderer, jogo->bolinha2, NULL, &RectBol);
		}
		else {
			SDL_Rect bolasVer = { jogo->bolinhasV[i].x + jogo->scrollX,
			jogo->bolinhasV[i].y + jogo->scrollY, jogo->bolinhasV[i].w, jogo->bolinhasV[i].h };
			SDL_RenderCopy(jogo->renderer, jogo->bolinha, NULL, &bolasVer);
		}
	}

	if (jogo->coletado > 0) {
		SDL_Rect bola = { 1688, 740, 20, 20 };
		SDL_RenderCopy(jogo->renderer, jogo->bolinha2, NULL, &bola);

		char tara[128] = "";
		sprintf(tara, "X: %d", (short)jogo->coletado);
		Smensagem = TTF_RenderText_Blended(jogo->fonte, tara, jogo->preto);
		mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
		SDL_FreeSurface(Smensagem);

		SDL_Rect RectCont = { 1678, 755, 30, 30 };
		SDL_RenderCopy(jogo->renderer, mensagem, NULL, &RectCont);
	}
	if (jogo->coletado2 > 0) {
		SDL_Rect bola = { 1688, 340, 20, 20 };
		SDL_RenderCopy(jogo->renderer, jogo->bolinha, NULL, &bola);

		char tara2[128] = "";
		sprintf(tara2, "X: %d", (short)jogo->coletado2);
		Smensagem2 = TTF_RenderText_Blended(jogo->fonte, tara2, jogo->preto);
		mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
		SDL_FreeSurface(Smensagem2);

		SDL_Rect RectCont2 = { 1678, 355, 30, 30 };
		SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &RectCont2);
	}

	if (jogo->coletado == 36 && jogo->coletado2 == 2) {
		jogo->statusjogo += 1;
	}

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao2, NULL, &rectinterrogacao);

	SDL_RenderPresent(jogo->renderer);
	SDL_RenderClear(jogo->renderer);
	if (mensagem != NULL && jogo->coletado > 0) {
		SDL_DestroyTexture(mensagem);
	}
	if (mensagem2 != NULL && jogo->coletado2 > 0) {
		SDL_DestroyTexture(mensagem2);
	}
}