#include "ORIGEM2.h"

void cena10(Jogo* jogo) {
	if (jogo->acerto == 0) {
		SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte,
			"Siri: Não, nesse caso seria uma aneuploidia. ",
			jogo->preto);
		SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
		SDL_FreeSurface(Stexto);

		SDL_Surface* Stexto2 = TTF_RenderText_Solid(jogo->fonte,
			"Só seria uma euploidia se ele tivesse cópias extras ou faltantes de todos os cromossomos ",
			jogo->preto);
		SDL_Texture* texto2 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto2);
		SDL_FreeSurface(Stexto2);

		SDL_Rect rect = { 0, 0, 1768, 992 };
		SDL_RenderCopy(jogo->renderer, jogo->quadro, NULL, &rect);

		SDL_Rect rect2 = { 484, 42, 1000, 1000 };
		SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rect2);

		SDL_Rect rect3 = { 0, 822, 1768, 170 };
		SDL_RenderFillRect(jogo->renderer, &rect3);

		SDL_Rect rect4 = { 20, 832, 700, 80 };
		SDL_RenderCopy(jogo->renderer, texto, NULL, &rect4);

		SDL_Rect rect5 = { 20, 902, 1400, 80 };
		SDL_RenderCopy(jogo->renderer, texto2, NULL, &rect5);


		SDL_RenderPresent(jogo->renderer);

		SDL_DestroyTexture(texto);
		SDL_DestroyTexture(texto2);
	}
	else if (jogo->acerto == 1) {
		SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte, "Siri: Exatamente, ela tem uma aneuploidia.", jogo->preto);
		SDL_Texture* texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
		SDL_FreeSurface(Stexto);

		SDL_Rect rect = { 0, 0, 1768, 992 };
		SDL_RenderCopy(jogo->renderer, jogo->quadro, NULL, &rect);

		SDL_Rect rect2 = { 484, 92, 1000, 1000 };
		SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rect2);

		SDL_Rect rect3 = { 0, 872, 1768, 120 };
		SDL_RenderFillRect(jogo->renderer, &rect3);

		SDL_Rect rect4 = { 20, 892, 800, 100 };
		SDL_RenderCopy(jogo->renderer, texto, NULL, &rect4);


		SDL_RenderPresent(jogo->renderer);

		SDL_DestroyTexture(texto);
	}
}