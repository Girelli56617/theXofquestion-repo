#include "ORIGEM2.h"

void cena14(Jogo* jogo) {
	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte,
		"Siri: O que define essa inativação é um mecanismo epigenético bem complexo, que age durante o desenvolvimento",
		jogo->preto);
	SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Surface* Stexto2 = TTF_RenderText_Solid(jogo->fonte,
		"embrionário e passa por algumas fases de inativação e reativação desses cromossomos.",
		jogo->preto);
	SDL_Texture* texto2 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto2);
	SDL_FreeSurface(Stexto2);

	SDL_Rect rect = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->quadro, NULL, &rect);

	SDL_Rect rect2 = { 484, 42, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rect2);

	SDL_Rect rect3 = { 0, 822, 1768, 170 };
	SDL_RenderFillRect(jogo->renderer, &rect3);

	SDL_Rect rect4 = { 20, 832, 1700, 80 };
	SDL_RenderCopy(jogo->renderer, texto, NULL, &rect4);

	SDL_Rect rect5 = { 20, 902, 1540, 80 };
	SDL_RenderCopy(jogo->renderer, texto2, NULL, &rect5);


	SDL_RenderPresent(jogo->renderer);

	SDL_DestroyTexture(texto);
	SDL_DestroyTexture(texto2);
}