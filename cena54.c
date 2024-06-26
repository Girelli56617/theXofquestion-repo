#include "ORIGEM2.h"

void cena54(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte, "Siri: quem sera que est� falando comigo a essa hora?", jogo->preto);
	SDL_Texture* Texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Rect rect = { 0, 0, 1768 , 992 };
	SDL_RenderCopy(jogo->renderer, jogo->irisquarto, NULL, &rect);

	SDL_Rect rect2 = { 484, 72, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rect2);

	SDL_Rect rect3 = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &rect3);

	SDL_Rect rect4 = { 20, 892, 1200, 100 };
	SDL_RenderCopy(jogo->renderer, Texto, NULL, &rect4);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(Texto);
}