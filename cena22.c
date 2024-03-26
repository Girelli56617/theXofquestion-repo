#include "ORIGEM2.h"

void cena22(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 223, 184, 180, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte, 
		"Rato Roedor: Ah, pelo amor dos meus filhinhos. Meu nome é Akodon, mas me chamam de P-680.", jogo->preto);
	SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Rect rectiris = { 0, 92, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rectiris);

	SDL_Rect rectrato = { 594, -300, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->rato, NULL, &rectrato);

	SDL_Rect rect = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &rect);

	SDL_Rect rect2 = { 20, 892, 1748, 100 };
	SDL_RenderCopy(jogo->renderer, texto, NULL, &rect2);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(texto);
}