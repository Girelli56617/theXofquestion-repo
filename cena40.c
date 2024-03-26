#include "ORIGEM2.h"

void cena40(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);
	SDL_RenderClear(jogo->renderer);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		"Siri: para inativar esse cromossomo eu devo arrastar o fator de inativação até o centro de inativação do X!", jogo->preto);
	SDL_Texture *mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Surface* Smensagem2 = TTF_RenderText_Solid(jogo->fonte,
		"Arraste o fator de inativação até a região marcada no X.", jogo->preto);
	SDL_Texture* mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
	SDL_FreeSurface(Smensagem2);

	SDL_Surface* Smensagem3 = TTF_RenderText_Solid(jogo->fonte,
		"X: 1", jogo->preto);
	SDL_Texture* mensagem3 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem3);
	SDL_FreeSurface(Smensagem3);

	SDL_Rect fundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &fundo);

	SDL_Rect iris = { -200, 72, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &iris);

	SDL_Rect cromatina = { jogo->cromatinaPreta.x, jogo->cromatinaPreta.y, jogo->cromatinaPreta.w, jogo->cromatinaPreta.h };
	SDL_RenderCopy(jogo->renderer, jogo->Cromatinagenepreto, NULL, &cromatina);

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

	SDL_Rect FatorIna = { jogo->FatorIna.x, jogo->FatorIna.y, jogo->FatorIna.w, jogo->FatorIna.h };
	SDL_RenderCopy(jogo->renderer, jogo->das, NULL, &FatorIna);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	if (jogo->ajuda == 1) {
		SDL_Rect RectMensagem2 = { 50, 20, 800, 50 };
		SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &RectMensagem2);
	}

	SDL_Rect bolaV = { 1688, 340, 20, 20 };
	SDL_RenderCopy(jogo->renderer, jogo->bolinha, NULL, &bolaV);

	SDL_Rect RectTexto3 = { 1678, 355, 30, 30 };
	SDL_RenderCopy(jogo->renderer, mensagem3, NULL, &RectTexto3);

	SDL_RenderPresent(jogo->renderer);

	SDL_DestroyTexture(mensagem);
	SDL_DestroyTexture(mensagem2);
	SDL_DestroyTexture(mensagem3);
}