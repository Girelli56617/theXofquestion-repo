#include "ORIGEM2.h"

void cena23(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 223, 184, 180, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte,
		"Rato Roedor: Agora me escute, pois eu fugi de um laboratório de ", jogo->preto);
	SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Surface* Stexto2 = TTF_RenderText_Solid(jogo->fonte,
		"genética de populações e estão atrás de mim.", jogo->preto);
	SDL_Texture* texto2 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto2);
	SDL_FreeSurface(Stexto2);

	SDL_Rect rectiris = { 0, 42, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rectiris);

	SDL_Rect rectrato = { 594, -300, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->rato, NULL, &rectrato);

	SDL_Rect rect = { 0, 822, 1768, 170 };
	SDL_RenderFillRect(jogo->renderer, &rect);

	SDL_Rect rect2 = { 20, 832, 1200, 80 };
	SDL_RenderCopy(jogo->renderer, texto, NULL, &rect2);

	SDL_Rect rect3 = { 20, 902, 900, 80 };
	SDL_RenderCopy(jogo->renderer, texto2, NULL, &rect3);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(texto);
	SDL_DestroyTexture(texto2);
}