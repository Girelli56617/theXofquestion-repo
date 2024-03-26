#include "ORIGEM2.h"

void cena46(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		"Rato Roedor: a nível molecular, a inativação pode ser explicada pela metilação e desacetilação de nucleossomos. "
		, jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Rect fundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &fundo);

	SDL_Rect iris = { -200, 72, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &iris);

	SDL_Rect rato = { 1000, 42, 800, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->rato, NULL, &rato);

	SDL_Rect NucleoS = { jogo->Nucleossomo.x, jogo->Nucleossomo.y, jogo->Nucleossomo.w, jogo->Nucleossomo.h };
	SDL_RenderCopy(jogo->renderer, jogo->nucleossomo, NULL, &NucleoS);

	SDL_Rect AcilS = { jogo->Acil.x, jogo->Acil.y, jogo->Acil.w, jogo->Acil.h };
	SDL_RenderCopy(jogo->renderer, jogo->acil, NULL, &AcilS);

	for (int i = 0; i < 3; i++) {
		SDL_Rect METIL = { jogo->Metil[i].x, jogo->Metil[i].y, jogo->Metil[i].w, jogo->Metil[i].h };
		SDL_RenderCopy(jogo->renderer, jogo->met, NULL, &METIL);
	}

	SDL_Rect caixaTexto = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &caixaTexto);

	SDL_Rect texto = { 20, 892, 1750, 100 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &texto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_RenderPresent(jogo->renderer);

	SDL_DestroyTexture(mensagem);
}