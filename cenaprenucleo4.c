#include "ORIGEM2.h"

void cenaprenucleo4(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Rect rectfundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &rectfundo);

	SDL_Rect rectiris = { 120 + jogo->scrollX, 292 + jogo->scrollY,
		1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irissurpresa, NULL, &rectiris);

	SDL_Rect rectrato = { 900, 102, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->rato, NULL, &rectrato);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		" Siri: Você é o menu de ajuda também?!", jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Rect CaixaTexto = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 225, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rectMensagem = { 20, 892, 800, 100 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &rectMensagem);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(mensagem);
}