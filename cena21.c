#include "ORIGEM2.h"

void cena21(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 223, 184, 180, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte, "Siri: céus, um rato falante!", jogo->preto);
	SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Rect rectiris = { 0, 192, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irissurpresa, NULL, &rectiris);

	SDL_Rect rect = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &rect);

	SDL_Rect rect2 = { 20, 892, 700, 100 };
	SDL_RenderCopy(jogo->renderer, texto, NULL, &rect2);

	SDL_Rect rectrato = { 594, -300, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->rato, NULL, &rectrato);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(texto);
}