#include <stdio.h>
#include <stdlib.h>
#include <sdl.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <time.h>
#include "ORIGEM2.h"

	
int main(int argc, char* argv []) {
	SDL_Window* janela = NULL;
	SDL_Renderer* renderer = NULL;
	Jogo jogo;
	int done = 0;

	SDL_Init(SDL_INIT_EVERYTHING);
	
	TTF_Init();

	Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 4096);

	srand((int)time(NULL));

	janela = SDL_CreateWindow("programa", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_FULLSCREEN_DESKTOP);

	renderer = SDL_CreateRenderer(janela, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	jogo.renderer = renderer;

	inicializacaoTexturas(&jogo);

	inicializacaoTermos(&jogo);

	while (!done) {
		done = eventos(janela, &jogo);

		aceleracao(&jogo);

		colisao(&jogo);

		renderizar(&jogo);
	}

	SDL_DestroyWindow(janela);
	desalocarTexturas(&jogo);
	SDL_DestroyRenderer(jogo.renderer);
	SDL_DestroyRenderer(renderer);

	TTF_CloseFont(jogo.fonte);

	Mix_CloseAudio();

	Mix_Quit();
	TTF_Quit();
	IMG_Quit();
	SDL_Quit();

	return(0);
}