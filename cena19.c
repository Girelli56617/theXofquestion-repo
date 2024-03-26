#include "ORIGEM2.h"

void cena19(Jogo *jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 223, 184, 180, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Rect rect = { 484, 192, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iristriste, NULL, &rect);

	SDL_Rect rect2 = { 484 + rect.w/4 + 100 , 42, 800, 800 };
	SDL_RenderCopy(jogo->renderer, jogo->pensamentogato, NULL, &rect2);

	SDL_Rect rect3 = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &rect3);

	SDL_RenderPresent(jogo->renderer);
}