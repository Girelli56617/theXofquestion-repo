#include "ORIGEM2.h"

void cenaprenucleo3(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Rect rectiris = { 120 + jogo->scrollX, 292 + jogo->scrollY,
		1000, 1000 };
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
		if (i < 36) {
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
		" Rato Roedor: A heterocromatina est� na forma de blocos, com a cromatina correspondente ao X com o gene para", jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Surface* Smensagem2 = TTF_RenderText_Solid(jogo->fonte,
		" a cor laranja e para a cor preta marcados com suas respectivas cores, gra�as aos �culos m�gicos. Para", jogo->preto);
	SDL_Texture* mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
	SDL_FreeSurface(Smensagem2);
	
	SDL_Surface* Smensagem3 = TTF_RenderText_Solid(jogo->fonte,
		"obter a sua gatinha, o cromossomo X com o gene laranja deve ser inativado nessa c�lula.", jogo->preto);
	SDL_Texture* mensagem3 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem3);
	SDL_FreeSurface(Smensagem3);

	SDL_Rect CaixaTexto = { 0, 842, 1768, 150 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectinterrogacao = { 1520, 225, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rectMensagem = { 10, 842, 1750, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &rectMensagem);

	SDL_Rect rectMensagem2 = { 10, 892, 1750, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &rectMensagem2);

	SDL_Rect rectMensagem3 = { 10, 942, 1450, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem3, NULL, &rectMensagem3);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(mensagem);
	SDL_DestroyTexture(mensagem2);
	SDL_DestroyTexture(mensagem3);
}