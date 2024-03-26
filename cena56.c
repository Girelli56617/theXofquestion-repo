#include "ORIGEM2.h"

void cena56(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 0, 0, 0, 0);
	SDL_RenderClear(jogo->renderer);

	jogo->creditos++;

	SDL_Color branco = { 255, 255, 255, 255 };

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte, "Créditos: ", branco);
	SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);

	SDL_Surface* Stexto1 = TTF_RenderText_Solid(jogo->fonte, "João Pedro Girelli", branco);
	SDL_Texture* texto1 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto1);
	SDL_FreeSurface(Stexto1);

	SDL_Surface* Stexto2 = TTF_RenderText_Solid(jogo->fonte, "Letícia", branco);
	SDL_Texture* texto2 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto2);
	SDL_FreeSurface(Stexto2);


	SDL_Surface* Stexto3 = TTF_RenderText_Solid(jogo->fonte, "Maria Eduarda Girelli", branco);
	SDL_Texture* texto3 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto3);
	SDL_FreeSurface(Stexto3);

	SDL_Rect rect = { 684, 0+jogo->creditos, 400, 100 };
	SDL_RenderCopy(jogo->renderer, texto, NULL, &rect);

	SDL_Rect rect2 = { 684, 100+jogo->creditos, 400, 100 };
	SDL_RenderCopy(jogo->renderer, texto1, NULL, &rect2);

	SDL_Rect rect3 = { 684, 200+jogo->creditos, 400, 100 };
	SDL_RenderCopy(jogo->renderer, texto2, NULL, &rect3);

	SDL_Rect rect4 = { 684, 300+jogo->creditos, 400, 100 };
	SDL_RenderCopy(jogo->renderer, texto3, NULL, &rect4);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(texto);
	SDL_DestroyTexture(texto1);
	SDL_DestroyTexture(texto2);
	SDL_DestroyTexture(texto3);
	SDL_RenderClear(jogo->renderer);

}