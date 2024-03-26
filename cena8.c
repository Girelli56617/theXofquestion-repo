#include "ORIGEM2.h"

void cena8(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte,
		"Siri: o que acontece quando uma pessoa tem um cromossomo a mais ou a menos, turma?", jogo->preto);
	SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Rect rect = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->quadro, NULL, &rect);

	SDL_Rect rect2 = { 484, 92, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rect2);

	SDL_Rect rect3 = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &rect3);

	SDL_Rect rect4 = { 20, 892, 1400, 100 };
	SDL_RenderCopy(jogo->renderer, texto, NULL, &rect4);

	SDL_RenderPresent(jogo->renderer);

	SDL_DestroyTexture(texto);
}