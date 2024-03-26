#include "ORIGEM2.h"

void cena38(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte, "Use WASD para se mover até o cromossomo preto e clique nele.",
		jogo->preto);
	SDL_Texture *texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Surface* Smensagem2 = TTF_RenderText_Solid(jogo->fonte,
		"X: 1", jogo->preto);
	SDL_Texture* mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
	SDL_FreeSurface(Smensagem2);

	SDL_Rect rectiris = { jogo->personagem.x + jogo->scrollX, jogo->personagem.y + jogo->scrollY,
		jogo->personagem.w, jogo->personagem.w };
	SDL_RenderCopy(jogo->renderer, jogo->cabeca, NULL, &rectiris);
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

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect bola = { 1678, 730, 40, 40 };
	SDL_RenderCopy(jogo->renderer, jogo->das, NULL, &bola);

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	if (jogo->ajuda == 1) {
		SDL_Rect RectTexto = { 20, 0, 800, 50 };
		SDL_RenderCopy(jogo->renderer, texto, NULL, &RectTexto);
	}

	SDL_Rect bolaV = { 1688, 340, 20, 20 };
	SDL_RenderCopy(jogo->renderer, jogo->bolinha, NULL, &bolaV);

	SDL_Rect RectTexto2 = { 1678, 355, 30, 30 };
	SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &RectTexto2);

	SDL_RenderPresent(jogo->renderer);
	SDL_RenderClear(jogo->renderer);

	SDL_DestroyTexture(texto);
	SDL_DestroyTexture(mensagem2);
}
	