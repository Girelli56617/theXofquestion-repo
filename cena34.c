#include "ORIGEM2.h"

void cena34(Jogo* jogo) {
	SDL_Rect rectfundo = { 0, 0, 1768, 992 };
	SDL_RenderCopy(jogo->renderer, jogo->fundonucleo, NULL, &rectfundo);

	SDL_Rect rectembriao1 = { 382, 96, 800, 800 };
	SDL_RenderCopy(jogo->renderer, jogo->embriao, NULL, &rectembriao1);

	SDL_Rect rectembriao2 = { 800, 396, 800, 800 };
	SDL_RenderCopy(jogo->renderer, jogo->embriao, NULL, &rectembriao2);

	SDL_Rect CaixaTexto = { 0, 872, 1768, 120 };
	SDL_RenderFillRect(jogo->renderer, &CaixaTexto);

	SDL_Surface* Stexto = TTF_RenderText_Solid(jogo->fonte,
		"Siri: Nossa, como eu cheguei aqui? Isso aqui é o interior de um gato? Se sim,", jogo->preto);
	SDL_Texture *Texto = SDL_CreateTextureFromSurface(jogo->renderer, Stexto);
	SDL_FreeSurface(Stexto);
	

	SDL_Surface* Stexto2 = TTF_RenderText_Solid(jogo->fonte,
		"qualquer um desses pode ser minha gatinha, mas qual?", jogo->preto);
	SDL_Texture* Texto2 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto2);
	SDL_FreeSurface(Stexto2);

	SDL_Surface* Stexto3 = TTF_RenderText_Solid(jogo->fonte,
	"A inativação do X ocorre no início do desenvolvimento embrionário, durante a gastrulação, que vemos aqui. Gatos, porém, geram",
		jogo->preto);
	SDL_Texture* Texto3 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto3);
	SDL_FreeSurface(Stexto3);

	SDL_Surface* Stexto4 = TTF_RenderText_Solid(jogo->fonte,
	"geram mais de um filhote por vez e para que possamos ter uma gatinha escaminha, precisamos nos certificar que o gato no qual",
		jogo->preto);
	SDL_Texture* Texto4 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto4);
	SDL_FreeSurface(Stexto4);

	SDL_Surface* Stexto5 = TTF_RenderText_Solid(jogo->fonte,
		"inativaremos o X é fêmea. Como seria legal se tivéssemos um item ou coisa assim para fazer isso...",
		jogo->preto);
	SDL_Texture* Texto5 = SDL_CreateTextureFromSurface(jogo->renderer, Stexto5);
	SDL_FreeSurface(Stexto5);

	SDL_Rect rectTexto = { 20, 890, 1700, 50 };
	SDL_RenderCopy(jogo->renderer, Texto, NULL, &rectTexto);

	SDL_Rect rectTexto2 = { 20, 940, 1200, 50 };
	SDL_RenderCopy(jogo->renderer, Texto2, NULL, &rectTexto2);

	SDL_Rect rectiris = { 0, 192, 1000, 1000 };
	SDL_RenderCopy(jogo->renderer, jogo->irissurpresa, NULL, &rectiris);

	SDL_Rect rectinventario = { 1648, 300, 100, 500 };
	SDL_RenderCopy(jogo->renderer, jogo->inventario, NULL, &rectinventario);

	SDL_Rect rectoculos = { 1550, 500, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->oculos, NULL, &rectoculos);

	SDL_Rect rectinterrogacao = { 1520, 225, 300, 300 };
	SDL_RenderCopy(jogo->renderer, jogo->interrogacao, NULL, &rectinterrogacao);

	if (jogo->ajuda == 1) {
		SDL_Rect rectTexto3 = { 20, 0, 1730, 40 };
		SDL_RenderCopy(jogo->renderer, Texto3, NULL, &rectTexto3);
		SDL_Rect rectTexto4 = { 20, 40, 1730, 40 };
		SDL_RenderCopy(jogo->renderer, Texto4, NULL, &rectTexto4);
		SDL_Rect rectTexto5 = { 20, 80, 1300, 40 };
		SDL_RenderCopy(jogo->renderer, Texto5, NULL, &rectTexto5);
	}

	SDL_RenderPresent(jogo->renderer);
	SDL_DestroyTexture(Texto);
	SDL_DestroyTexture(Texto2);
	SDL_DestroyTexture(Texto3);
	SDL_DestroyTexture(Texto4);
	SDL_DestroyTexture(Texto5);
}