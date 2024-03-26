#include "ORIGEM2.h"

void cenaposnucleo(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Rect rectfundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &rectfundo);

	SDL_Rect rectiris = { 400, 72, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->iris, NULL, &rectiris);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		"Siri: eu coletei todos esses produtos, agora o que eu faço com eles?", jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Surface* Smensagem2 = TTF_RenderText_Solid(jogo->fonte,
		"X: 2", jogo->preto);
	SDL_Texture* mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
	SDL_FreeSurface(Smensagem2);

	SDL_Surface* Smensagem3 = TTF_RenderText_Solid(jogo->fonte,
		"X: 36", jogo->preto);
	SDL_Texture* mensagem3 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem3);
	SDL_FreeSurface(Smensagem3);

	SDL_Rect CaixaTexto = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rectMensagem = { 20, 892, 1250, 80 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &rectMensagem);

	SDL_Rect bola = { 1688, 740, 20, 20 };
	SDL_RenderCopy(jogo->renderer, jogo->bolinha2, NULL, &bola);

	SDL_Rect bola2 = { 1688, 340, 20, 20 };
	SDL_RenderCopy(jogo->renderer, jogo->bolinha, NULL, &bola2);

	SDL_Rect RectCont = { 1678, 355, 30, 30 };
	SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &RectCont);

	SDL_Rect RectCont2 = { 1678, 755, 30, 30 };
	SDL_RenderCopy(jogo->renderer, mensagem3, NULL, &RectCont2);

	SDL_RenderPresent(jogo->renderer);

	SDL_DestroyTexture(mensagem);
	SDL_DestroyTexture(mensagem2);
	SDL_DestroyTexture(mensagem3);
}