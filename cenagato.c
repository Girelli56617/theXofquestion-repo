#include "ORIGEM2.h"

void cenagato(Jogo *jogo) {
	SDL_Rect rect = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->quadro, NULL, &rect);

	SDL_Rect rect2 = { 484, 192, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irismuitotriste, NULL, &rect2);

	SDL_Rect rect3 = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &rect3);

	SDL_Rect rect4 = { 484 + rect2.w / 4 , 42, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->pensamentogato, NULL, &rect4);

	SDL_RenderPresent(jogo->renderer);

}