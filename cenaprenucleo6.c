#include "ORIGEM2.h"

void cenaprenucleo6(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Rect rectfundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &rectfundo);

	SDL_Rect rectiris = { 120 + jogo->scrollX, 292 + jogo->scrollY,
		1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irissurpresa, NULL, &rectiris);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		"Siri: essa coisa me abandona sempre na hora que eu mais preciso dela...", jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Surface* Smensagem2 = TTF_RenderText_Solid(jogo->fonte,
		"De qualquer maneira. PRECISO VOLTAR PARA O MUNDO CELULAR!", jogo->preto);
	
	SDL_Texture* mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
	SDL_FreeSurface(Smensagem2);

	SDL_Rect CaixaTexto = { 0, 842, 1768, 150 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 225, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rectMensagem = { 20, 842, 1300, 80 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &rectMensagem);

	SDL_Rect rectMensagem2 = { 20, 902, 1100, 80 };
	SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &rectMensagem2);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(mensagem);
	SDL_DestroyTexture(mensagem2);
}