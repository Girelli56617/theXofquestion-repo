#include "ORIGEM2.h"

void cena6(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Rect rect = { 484, 92, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iriscafe, NULL, &rect);

	SDL_Rect rect1 = { rect.x + rect.w / 2 - 150, rect.y, 700, 700 };
	SDL_RenderCopy(jogo->renderer, jogo->pensamentogato, NULL, &rect1);

	SDL_RenderPresent(jogo->renderer);
}