#include "ORIGEM2.h"

void cenaposnucleo4(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Rect rectfundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &rectfundo);

	SDL_Rect rectiris = { 200, 162, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irissurpresa, NULL, &rectiris);

	SDL_Rect rectrato = { 900, 52, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->rato, NULL, &rectrato);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		"X: 1", jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Surface* Smensagem3 = TTF_RenderText_Solid(jogo->fonte,
		"Rato Roedor : Exatamente! Enquanto as proteínas CTCF, que vieram dos autossomos vão se combinar com um dos Jpx para", 
		jogo->preto);
	SDL_Texture* mensagem3 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem3);
	SDL_FreeSurface(Smensagem3);

	SDL_Surface* Smensagem4 = TTF_RenderText_Solid(jogo->fonte,
		"formar o fator de inativação, que quase paradoxalmente ativará aquele cromossomo X, o outro Jpx fica 'sobrando' e irá", 
		jogo->preto);
	SDL_Texture* mensagem4 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem4);
	SDL_FreeSurface(Smensagem4);

	SDL_Surface* Smensagem5 = TTF_RenderText_Solid(jogo->fonte,
		"garantir a inativação do outro cromossomo X. Como é preciso dos produtos gênicos de um conjunto cromossômico inteiro para", 
		jogo->preto);
	SDL_Texture* mensagem5 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem5);
	SDL_FreeSurface(Smensagem5);

	SDL_Surface* Smensagem6 = TTF_RenderText_Solid(jogo->fonte,
		"ativar um único cromossomo X, acaba que em casos de organismos diploides, mas com três ou mais cromossomos X, ainda assim", 
		jogo->preto);
	SDL_Texture* mensagem6 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem6);
	SDL_FreeSurface(Smensagem6);

	SDL_Surface* Smensagem7 = TTF_RenderText_Solid(jogo->fonte,
		"apenas um deles será ativado.",
		jogo->preto);
	SDL_Texture* mensagem7 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem7);
	SDL_FreeSurface(Smensagem7);

	SDL_Rect CaixaTexto = { 0, 832, 1768, 160 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 425, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rectMensagem = { 10, 832, 1750, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem3, NULL, &rectMensagem);

	SDL_Rect rectMensagem2 = { 10, 862, 1750, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem4, NULL, &rectMensagem2);

	SDL_Rect rectMensagem3 = { 10, 892, 1750, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem5, NULL, &rectMensagem3);

	SDL_Rect rectMensagem4 = { 10, 922, 1750, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem6, NULL, &rectMensagem4);

	SDL_Rect rectMensagem5 = { 10, 952, 400, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem7, NULL, &rectMensagem5);

	SDL_Rect bola = { 1678, 730, 40, 40 };
	SDL_RenderCopy(jogo->renderer, jogo->das, NULL, &bola);

	SDL_Rect bolaV = { 1688, 340, 20, 20 };
	SDL_RenderCopy(jogo->renderer, jogo->bolinha, NULL, &bolaV);

	SDL_Rect texto = { 1678, 355, 30, 30 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &texto);

	SDL_RenderPresent(jogo->renderer);

	SDL_DestroyTexture(mensagem);
	SDL_DestroyTexture(mensagem3);
	SDL_DestroyTexture(mensagem4);
	SDL_DestroyTexture(mensagem5);
	SDL_DestroyTexture(mensagem6);
	SDL_DestroyTexture(mensagem7);
}