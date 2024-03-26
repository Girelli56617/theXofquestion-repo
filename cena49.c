#include "ORIGEM2.h"

void cena49(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Rect fundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &fundo);

	SDL_Rect iris = { -200, 72, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &iris);

	SDL_Rect NucleoS = { jogo->Nucleossomo.x, jogo->Nucleossomo.y, jogo->Nucleossomo.w, jogo->Nucleossomo.h };
	SDL_RenderCopy(jogo->renderer, jogo->nucleossomo, NULL, &NucleoS);

	SDL_Rect AcilS = { jogo->Acil.x, jogo->Acil.y, jogo->Acil.w, jogo->Acil.h };
	SDL_RenderCopy(jogo->renderer, jogo->acil, NULL, &AcilS);

	for (int i = 0; i < 3; i++) {
		SDL_Rect METIL = { jogo->Metil[i].x, jogo->Metil[i].y, jogo->Metil[i].w, jogo->Metil[i].h };
		SDL_RenderCopy(jogo->renderer, jogo->met, NULL, &METIL);
	}

	if (jogo->Acil.x + jogo->Acil.w < 881 || jogo->Acil.x > 1004
		|| jogo->Acil.y + jogo->Acil.h > 499 || jogo->Acil.y < 670) {
		if (jogo->Metil[0].x + jogo->Metil[0].w > 881 && jogo->Metil[0].x < 1074
			&& jogo->Metil[0].y + jogo->Metil[0].h > 499 && jogo->Metil[0].y < 670
			&& jogo->Metil[1].x + jogo->Metil[1].w > 881 && jogo->Metil[1].x < 1074
			&& jogo->Metil[1].y + jogo->Metil[1].h > 499 && jogo->Metil[1].y < 670
			&& jogo->Metil[2].x + jogo->Metil[2].w > 881 && jogo->Metil[2].x < 1074
			&& jogo->Metil[2].y + jogo->Metil[2].h > 499 && jogo->Metil[2].y < 670) {
			jogo->Metil[2].x = 1075;
			jogo->statusjogo += 1;
		}
	}

	SDL_Rect caixaTexto = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &caixaTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_RenderPresent(jogo->renderer);
}