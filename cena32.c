#include "ORIGEM2.h"

void cena32(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 223, 184, 180, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte,
		" Siri: Ah, o que não mata engorda. Irei tomar a poção. ", jogo->preto);
	SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Rect rectiris = { 0, 92, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rectiris);

	SDL_Rect rectinventario = { 1648, 100, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectpocao = { 1600, 425, 200, 200 };
	SDL_RenderCopy(jogo->renderer, jogo->pocao1, NULL, &rectpocao);

	SDL_Rect rectoculos = { 1550, 300, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 25, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rect = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &rect);

	SDL_Rect rect2 = { 20, 892, 1000, 100 };
	SDL_RenderCopy(jogo->renderer, texto, NULL, &rect2);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(texto);
}