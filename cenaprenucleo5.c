#include "ORIGEM2.h"

void cenaprenucleo5(Jogo* jogo) {
	SDL_SetRenderDrawColor(jogo->renderer, 61, 55, 55, 255);
	SDL_RenderClear(jogo->renderer);
	SDL_SetRenderDrawColor(jogo->renderer, 173, 134, 79, 255);

	SDL_Rect rectfundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &rectfundo);

	SDL_Rect rectiris = { 120 + jogo->scrollX, 222 + jogo->scrollY,
		1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irissurpresa, NULL, &rectiris);

	SDL_Rect rectrato = { 900, 52, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->rato, NULL, &rectrato);

	SDL_Surface* Smensagem = TTF_RenderText_Solid(jogo->fonte,
		"Rato Roedor: Eu sou muitas coisas e sei de muitas coisas. Inativar o cromossomo X envolve uma série de coisas, mas", 
		jogo->preto);
	SDL_Texture* mensagem = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem);
	SDL_FreeSurface(Smensagem);

	SDL_Surface* Smensagem2 = TTF_RenderText_Solid(jogo->fonte,
		"a primeira delas é saber quantos cromossomos X precisaremos inativar. A célula faz isso por meio de produtos gênicos",
		jogo->preto);
	SDL_Texture* mensagem2 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem2);
	SDL_FreeSurface(Smensagem2);

	SDL_Surface* Smensagem3 = TTF_RenderText_Solid(jogo->fonte,
		"que são diferentes para cromossomos sexuais e autossomos. Elas se juntam para formar um fator que inativará a porção do",
		jogo->preto);
	SDL_Texture* mensagem3 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem3);
	SDL_FreeSurface(Smensagem3);

	SDL_Surface* Smensagem4 = TTF_RenderText_Solid(jogo->fonte,
		"X responsável por inativar aquele cromossomo, fazendo ele se tornar o cromossomo X ativo. Para formar um fator de",
		jogo->preto);
	SDL_Texture* mensagem4 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem4);
	SDL_FreeSurface(Smensagem4);

	SDL_Surface* Smensagem5 = TTF_RenderText_Solid(jogo->fonte,
		"inativação serão precisos, como é um gatinho, de 36 proteínas CTCF dos autossomos e 2 RNAs do cromossomo X, que",
		jogo->preto);
	SDL_Texture* mensagem5 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem5);
	SDL_FreeSurface(Smensagem5);

	SDL_Surface* Smensagem6 = TTF_RenderText_Solid(jogo->fonte,
		"se chama Jpx. Agora ande logo, mova-se com WASD para coletar essas coisas. Boa sorte!",
		jogo->preto);
	SDL_Texture* mensagem6 = SDL_CreateTextureFromSurface(jogo->renderer, Smensagem6);
	SDL_FreeSurface(Smensagem6);

	SDL_Rect CaixaTexto = { 0, 802, 1768, 190 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 225, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	SDL_Rect rectMensagem = { 20, 802, 1730, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem, NULL, &rectMensagem);

	SDL_Rect rectMensagem2 = { 20, 832, 1730, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem2, NULL, &rectMensagem2);

	SDL_Rect rectMensagem3 = { 20, 862, 1730, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem3, NULL, &rectMensagem3);

	SDL_Rect rectMensagem4 = { 20, 892, 1730, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem4, NULL, &rectMensagem4);

	SDL_Rect rectMensagem5 = { 20, 922, 1730, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem5, NULL, &rectMensagem5);

	SDL_Rect rectMensagem6 = { 20, 952, 1400, 40 };
	SDL_RenderCopy(jogo->renderer, mensagem6, NULL, &rectMensagem6);

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(mensagem);
	SDL_DestroyTexture(mensagem2);
	SDL_DestroyTexture(mensagem3);
	SDL_DestroyTexture(mensagem4);
	SDL_DestroyTexture(mensagem5);
	SDL_DestroyTexture(mensagem6);
}