#include "ORIGEM2.h"

void cena5(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Rect rect = { 484, 92, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iriscafe, NULL, &rect);

	SDL_RenderPresent(jogo->renderer);
}