#include "ORIGEM2.h"
#include "STATUSCENAS.h"

void cena2(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 255, 85, 87, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Rect rect = { 0, 0, 1768 , 992 };
	SDL_RenderCopy(jogo->renderer, jogo->irisquarto, NULL, &rect);

	SDL_Rect rect2 = { 484, 212, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irispensandogato, NULL, &rect2);

	SDL_RenderPresent(jogo->renderer);
}