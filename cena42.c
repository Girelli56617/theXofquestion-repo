#include "ORIGEM2.h"

void cena42(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		"Siri: OK, aqui eu tenho que colocar o Jpx no centro de inativação do X para ativar os seus genes e inativar o X. ", jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Surface* Smensagem2 = TTF_RenderText_Solid(jogo->fonte,
		"Arraste o Jpx para o centro de inativação (porção em destaque). O RNA transcrito nesse caso é o Xist, que é responsável", 
		jogo->preto);
	SDL_Texture* mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
	SDL_FreeSurface(Smensagem2);

	SDL_Surface* Smensagem3 = TTF_RenderText_Solid(jogo->fonte,
		"por fisicamente isolar e inativar o cromossomo X, estando na classe dos RNAs não codificantes.",
		jogo->preto);
	SDL_Texture* mensagem3 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem3);
	SDL_FreeSurface(Smensagem3);

	SDL_Surface* Smensagem4 = TTF_RenderText_Solid(jogo->fonte,
		"X: 1", jogo->preto);
	SDL_Texture* mensagem4 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem4);
	SDL_FreeSurface(Smensagem4);

	SDL_Rect fundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &fundo);

	SDL_Rect iris = { -200, 72, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &iris);

	SDL_Rect cromatina = { jogo->cromatinaLaranja.x, jogo->cromatinaLaranja.y, jogo->cromatinaLaranja.w, jogo->cromatinaLaranja.h };
	SDL_RenderCopy(jogo->renderer, jogo->Cromatinagenelaranja, NULL, &cromatina);

	for (int i = 0; i < 3; i++) {
		SDL_Rect RNA = { jogo->RNA[i].x, jogo->RNA[i].y, jogo->RNA[i].w, jogo->RNA[i].h };
		SDL_RenderCopy(jogo->renderer, jogo->RNA1, NULL, &RNA);
	}

	SDL_Rect caixaTexto = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &caixaTexto);

	SDL_Rect texto = { 20, 892, 1740, 100 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &texto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	if (jogo->ajuda == 1) {
		SDL_Rect RectMensagem2 = { 50, 20, 1668, 50 };
		SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &RectMensagem2);
		SDL_Rect RectMensagem3 = { 50, 60, 1200, 50 };
		SDL_RenderCopy(jogo->renderer, mensagem3, NULL, &RectMensagem3);
	}

	SDL_Rect bolaV = { jogo->JPX.x, jogo->JPX.y, jogo->JPX.w, jogo->JPX.h };
	SDL_RenderCopy(jogo->renderer, jogo->bolinha, NULL, &bolaV);

	if (jogo->JPX.x == 1688 && jogo->JPX.y == 340) {
		SDL_Rect RectTexto4 = { 1678, 355, 30, 30 };
		SDL_RenderCopy(jogo->renderer, mensagem4, NULL, &RectTexto4);
	}

	SDL_RenderPresent(jogo->renderer);

	SDL_DestroyTexture(mensagem);
	SDL_DestroyTexture(mensagem2);
	SDL_DestroyTexture(mensagem3);
	SDL_DestroyTexture(mensagem4);
}