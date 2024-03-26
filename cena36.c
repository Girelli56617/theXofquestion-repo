#include "ORIGEM2.h"

void cena36(Jogo* jogo) {
	SDL_Rect rectcelula = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->Celula, NULL, &rectcelula);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte,
		"Siri: como a célula é linda! Os cromossomos ficam no núcleo, então precisamos ir para lá!", jogo->preto);
	SDL_Texture* Texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);
	
	SDL_Surface* Stexto2 = TTF_RenderText_Solid(jogo->fonte,
		"O núcleo é uma organela grande e membranosa, contígua ao retículo endoplasmático rugoso e é responsável por conter o ",
		jogo->preto);
	SDL_Texture* Texto2 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto2);
	SDL_FreeSurface(Stexto2);

	SDL_Surface* Stexto3 = TTF_RenderText_Solid(jogo->fonte,
		"material genético em eucariotos  ",
		jogo->preto);
	SDL_Texture* Texto3 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto3);
	SDL_FreeSurface(Stexto3);

	SDL_Rect rectiris = { 0, 192, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irissurpresa, NULL, &rectiris);

	SDL_Rect CaixaTexto = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Rect rectTexto = { 20, 890, 1700, 100 };
	SDL_RenderCopy(jogo->renderer, Texto, NULL, &rectTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 625, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	if (jogo->ajuda == 1) {
		SDL_Rect rectTexto2 = { 20, 0, 1730, 50 };
		SDL_RenderCopy(jogo->renderer, Texto2, NULL, &rectTexto2);
		SDL_Rect rectTexto3 = { 20, 40, 500, 50 };
		SDL_RenderCopy(jogo->renderer, Texto3, NULL, &rectTexto3);
	}

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(Texto);
	SDL_DestroyTexture(Texto2);
	SDL_DestroyTexture(Texto3);
}