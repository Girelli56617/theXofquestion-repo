#include "ORIGEM2.h"

void cena30(Jogo* jogo) {

	SDL_SetRenderDrawColor(jogo->renderer, 223, 184, 180, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte,
		"Rato Roedor : Boa sorte! Que suas vias(metabólicas) sejam sempre floridas e", jogo->preto);
	SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Surface* Stexto2 = TTF_RenderText_Solid(jogo->fonte,
		"que seus cromossomos X se inativem de modo conveniente.", jogo->preto);
	SDL_Texture* texto2 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto2);
	SDL_FreeSurface(Stexto2);

	SDL_Rect rectiris = { 0, 142, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irisfeliz, NULL, &rectiris);

	SDL_Rect rectrato = { 594, -300, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->rato, NULL, &rectrato);

	SDL_Rect rectinventario = { 1648, 100, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectpocao = { 1600, 425, 200, 200 };
	SDL_RenderCopy(jogo->renderer, jogo->pocao1, NULL, &rectpocao);

	SDL_Rect rectoculos = { 1550, 300, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 25, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rect = { 0, 822, 1768, 170 };
	SDL_RenderFillRect(jogo->renderer, &rect);

	SDL_Rect rect2 = { 20, 832, 1600, 80 };
	SDL_RenderCopy(jogo->renderer, texto, NULL, &rect2);

	SDL_Rect rect3 = { 20, 902, 1300, 80 };
	SDL_RenderCopy(jogo->renderer, texto2, NULL, &rect3);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(texto);
	SDL_DestroyTexture(texto2);
}