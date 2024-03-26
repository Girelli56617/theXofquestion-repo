#include "ORIGEM2.h"
#include <SDL_ttf.h>


void cenasuspiro(Jogo* jogo) {
	TTF_SetFontStyle(jogo->fonte, TTF_STYLE_ITALIC);
	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte,
		"Suspira",
		jogo->preto);
	SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);


	SDL_Rect rect = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->quadro, NULL, &rect);

	SDL_Rect rect2 = { 484, 92, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rect2);

	SDL_Rect rect3 = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &rect3);

	SDL_Rect rect4 = { 20, 892, 300, 100 };
	SDL_RenderCopy(jogo->renderer, texto, NULL, &rect4);


	SDL_RenderPresent(jogo->renderer);

	SDL_DestroyTexture(texto);
	TTF_SetFontStyle(jogo->fonte, TTF_STYLE_NORMAL);
}