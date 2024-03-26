#include "ORIGEM2.h"

void cena43(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		"Siri: Isso funcionou mesmo! Agora temos que usar o RNA para isolar o X! ", jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Surface* Smensagem2 = TTF_RenderText_Solid(jogo->fonte,
		"Arraste o RNA até formar um círculo ao redor da cromatina do cromossomo X",
		jogo->preto);
	SDL_Texture* mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
	SDL_FreeSurface(Smensagem2);

	SDL_Rect fundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &fundo);

	SDL_Rect iris = { -200, 72, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &iris);

	SDL_Rect cromatina = { jogo->cromatinaLaranja.x, jogo->cromatinaLaranja.y, jogo->cromatinaLaranja.w, jogo->cromatinaLaranja.h };
	SDL_RenderCopy(jogo->renderer, jogo->Cromatinagenelaranja, NULL, &cromatina);

	for (int i = 0; i < 3; i++) {
		SDL_Rect RNA = { jogo->RNA[i].x, jogo->RNA[i].y, jogo->RNA[i].w, jogo->RNA[i].h };
		SDL_RenderCopy(jogo->renderer, jogo->RNA1, NULL, &RNA);
	}

	for (int i = 0; i < 26; i++) {
		SDL_Rect RNA = { jogo->RNAS[i].x, jogo->RNAS[i].y, jogo->RNAS[i].w, jogo->RNAS[i].h };
		SDL_RenderCopy(jogo->renderer, jogo->RNA1, NULL, &RNA);
		if (jogo->RNAS[25].x > 484 && jogo->RNAS[25].x + jogo->RNAS[25].w < 604
			&& jogo->RNAS[25].y < 696 && jogo->RNAS[25].y + jogo->RNAS[25].h > 396) {
			jogo->RNAS[25].x = 480;
			jogo->statusjogo += 1;
		}
	}

	SDL_Rect caixaTexto = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &caixaTexto);

	SDL_Rect texto = { 20, 892, 1300, 100 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &texto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	if (jogo->ajuda == 1) {
		SDL_Rect RectMensagem2 = { 50, 20, 1668, 50 };
		SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &RectMensagem2);
	}

	SDL_RenderPresent(jogo->renderer);

	SDL_DestroyTexture(mensagem);
	SDL_DestroyTexture(mensagem2);
}