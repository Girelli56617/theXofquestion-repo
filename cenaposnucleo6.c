#include "ORIGEM2.h"

void cenaposnucleo6(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Rect rectfundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &rectfundo);

	SDL_Rect rectrato = { 900, 52, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->rato, NULL, &rectrato);

	SDL_Rect rectiris = { 400, 102, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rectiris);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		"Rato Roedor: Exatamente, mãos à obra! Temos que inativar o centro de inativação do X (Xic) nesse cromossomo!"
		, jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Surface* Smensagem2 = TTF_RenderText_Solid(jogo->fonte,
		"X: 1", jogo->preto);
	SDL_Texture* mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
	SDL_FreeSurface(Smensagem2);

	SDL_Rect CaixaTexto = { 0, 902, 1768, 90 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rectMensagem = { 14, 912, 1750, 80 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &rectMensagem);

	SDL_Rect bola = { 1678, 730, 40, 40 };
	SDL_RenderCopy(jogo->renderer, jogo->das, NULL, &bola);

	SDL_Rect bolaV = { 1688, 340, 20, 20 };
	SDL_RenderCopy(jogo->renderer, jogo->bolinha, NULL, &bolaV);

	SDL_Rect texto = { 1678, 355, 30, 30 };
	SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &texto);

	SDL_RenderPresent(jogo->renderer);

	SDL_DestroyTexture(mensagem);
	SDL_DestroyTexture(mensagem2);
}