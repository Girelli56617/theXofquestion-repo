#include "ORIGEM2.h"

void cena51(Jogo *jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 234, 255, 0, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte, "trrrim-trrrim...", jogo->preto);
	SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Rect Rtexto = { 684, 446, 400, 100 };
	SDL_RenderCopy(jogo->renderer, texto, NULL, &Rtexto);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(texto);
	SDL_RenderClear(jogo->renderer);
}