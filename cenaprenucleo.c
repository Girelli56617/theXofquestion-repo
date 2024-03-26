#include "ORIGEM2.h"

void cenaprenucleo(Jogo *jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Rect rectiris = { 120 + jogo->scrollX, 292 + jogo->scrollY,
		1000, 1000};
	SDL_RenderCopy(jogo->renderer, jogo->oculosiris, NULL, &rectiris);
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			SDL_Rect parede = { jogo->chao[i][j].x + jogo->scrollX, jogo->chao[i][j].y + jogo->scrollY,
				jogo->chao[i][j].w, jogo->chao[i][j].h };
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

	for (int i = 0; i < 38; i++) {
		if(i < 36){
			SDL_Rect bloco = { jogo->bolinhasV[i].x + jogo->scrollX, jogo->bolinhasV[i].y + jogo->scrollY,
				jogo->bolinhasV[i].w, jogo->bolinhasV[i].h };
			SDL_RenderCopy(jogo->renderer, jogo->bolinha2, NULL, &bloco);
		}
		else {
			SDL_Rect bloco = { jogo->bolinhasV[i].x + jogo->scrollX, jogo->bolinhasV[i].y + jogo->scrollY,
				jogo->bolinhasV[i].w, jogo->bolinhasV[i].h };
			SDL_RenderCopy(jogo->renderer, jogo->bolinha, NULL, &bloco);
		}
	}

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		"Siri: Então aqui é o núcleo. Nossa, quanta cromatina, qual seria o cromossomo X?", jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Color laranja = { 219, 98, 22, 255 };
	SDL_Surface* Smensagem2 = TTF_RenderText_Solid(jogo->fonte,
		"O núcleo interfásico não possui seu material genético organizado na forma de cromossomos, pois nessa forma", laranja);
	SDL_Texture* mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
	SDL_FreeSurface(Smensagem2);

	SDL_Surface* Smensagem3 = TTF_RenderText_Solid(jogo->fonte,
		"o DNA (cromatina) estaria condensado demais para ser transcrito. Isso impede a distinção morfológica de cada cromossomo,",
		laranja);
	SDL_Texture* mensagem3 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem3);
	SDL_FreeSurface(Smensagem3);

	SDL_Surface* Smensagem4 = TTF_RenderText_Solid(jogo->fonte,
		"mas nada que um pouco de mágica não resolva o problema...", laranja);
	SDL_Texture* mensagem4 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem4);
	SDL_FreeSurface(Smensagem4);

	SDL_Rect CaixaTexto = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectinterrogacao = { 1520, 225, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rectMensagem = { 20, 892, 1600, 100 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &rectMensagem);

	if (jogo->ajuda) {

		SDL_Rect rectMensagem2 = { 100, 20, 1600, 40 };
		SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &rectMensagem2);

		SDL_Rect rectMensagem3 = { 100, 60, 1600, 40 };
		SDL_RenderCopy(jogo->renderer, mensagem3, NULL, &rectMensagem3);

		SDL_Rect rectMensagem4 = { 100, 100, 900, 40 };
		SDL_RenderCopy(jogo->renderer, mensagem4, NULL, &rectMensagem4);
	}
		
	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(mensagem);
	SDL_DestroyTexture(mensagem2);
	SDL_DestroyTexture(mensagem3);
	SDL_DestroyTexture(mensagem4);
}