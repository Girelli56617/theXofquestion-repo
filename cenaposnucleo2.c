#include "ORIGEM2.h"

void cenaposnucleo2(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Rect rectfundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &rectfundo);

	SDL_Rect rectiris = { 200, 172, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irissurpresa, NULL, &rectiris);

	SDL_Rect rectrato = { 900, 52, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->rato, NULL, &rectrato);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
	"Rato Roedor: vamos fazer um fator de inativação! Você viu que você tem 36 quantidades", jogo->preto);
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

	SDL_Surface* Smensagem4 = TTF_RenderText_Solid(jogo->fonte,
		"das proteínas CTCF e 2 quantidades Jpx, certo?", jogo->preto);
	SDL_Texture* mensagem4 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem4);
	SDL_FreeSurface(Smensagem4);

	SDL_Rect CaixaTexto = { 0, 842, 1768, 150 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rectMensagem = { 10, 842, 1750, 80 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &rectMensagem);

	SDL_Rect rectMensagem2 = { 10, 902, 1000, 80 };
	SDL_RenderCopy(jogo->renderer, mensagem4, NULL, &rectMensagem2);

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
	SDL_DestroyTexture(mensagem4);
}