#include "ORIGEM2.h"

void cena33(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 0, 0, 0, 0);
	SDL_RenderClear(jogo->renderer);

	SDL_Color branco = { 255, 255, 255, 255 };
	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte, "No Mundo Molecular...", branco);
	SDL_Texture* textura = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Rect rect = { 700, 396, 420, 100 };
	SDL_RenderCopy(jogo->renderer, textura, NULL, &rect);
	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(textura);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);
}