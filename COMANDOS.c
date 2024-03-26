#include "ORIGEM2.h"

int eventos(SDL_Window* janela, Jogo* jogo) {
	int done = 0, x, y;
	SDL_Event evento;

	while (SDL_PollEvent(&evento))
	{
		SDL_GetMouseState(&x, &y);
		SDL_GetMouseState(jogo->x, jogo->y);
		switch (evento.type)
		{
		case SDL_WINDOWEVENT_CLOSE:
		{
			if (janela)
			{
				SDL_DestroyWindow(janela);
				janela = NULL;
				done = 1;
			}
		}
		break;
		case SDL_KEYDOWN:
		{
			switch (evento.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				done = 1;
				break;
			case SDLK_RETURN:
				if (jogo->statusjogo != STATUSQUADRONEGROOPCOES && jogo->statusjogo != STATUSDIALOGORATO13 &&
					jogo->statusjogo != STATUSFUNDONUCLEO && jogo->statusjogo != STATUSOCULOS && jogo->statusjogo != STATUSCELULA
					&& jogo->statusjogo != STATUSLABIRINTO && jogo->statusjogo != STATUSPRELABIRINTO3 
					&& jogo->statusjogo != STATUSPOSNUCLEO6 && jogo->statusjogo != STATUSPRELABIRINTO6) {
					jogo->statusjogo += 1;
				}
				break;
			case SDLK_LEFT:
				jogo->statusjogo -= 1;
				break;
			}
		}
		break;
		case SDL_QUIT:
			done = 1;
			break;
		case SDL_MOUSEBUTTONDOWN:
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSQUADRONEGROOPCOES) {
				if (x > 20 && x < 220 && y > 892 && y < 992) {
					jogo->acerto = 1;
					jogo->statusjogo = STATUSRESPOSTA;
				}
				else if (x > 1548 && x < 1748 && y > 892 && y < 992) {
					jogo->acerto = 0;
					jogo->statusjogo = STATUSRESPOSTA;
				}
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSDIALOGORATO13) {
				if (x > 1668 && x < 1728 && y < 590 && y > 510) jogo->statusjogo += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSFUNDONUCLEO) {
				if (x > 1668 && x < 1728 && y < 390 && y > 310)	jogo->ajuda = 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSFUNDONUCLEO) {
				if (x > 1668 && x < 1728 && y < 690 && y > 610)	jogo->statusjogo += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSOCULOS) {
				if (x > 1668 && x < 1728 && y < 390 && y > 310)	jogo->ajuda = 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSOCULOS) {
				if (x > 1032 && x < 1224 && y < 772 && y > 604)	jogo->statusjogo += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSCELULA) {
				if (x > 1668 && x < 1728 && y < 790 && y > 710)	jogo->ajuda = 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSCELULA) {
				if (x > 1116 && x < 1646 && y < 434 && y > 33)	jogo->statusjogo += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSPRELABIRINTO) {
				if (x > 1668 && x < 1728 && y < 390 && y > 310)	jogo->ajuda += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSPRELABIRINTO3) {
				if (x > 1668 && x < 1728 && y < 390 && y > 310)	jogo->statusjogo += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSPRELABIRINTO6) {
				if (x > 1668 && x < 1728 && y < 690 && y > 610)	jogo->statusjogo += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSLABIRINTO2) {
				if (x > 1200 + jogo->scrollX && x < 1500 + jogo->scrollX && y < 1900 + jogo->scrollY && y > 1800 + jogo->scrollY) {
					jogo->statusjogo += 1;
				}
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSPOSNUCLEO6) {
				if (x > 1668 && x < 1728 && y < 690 && y > 610)	jogo->statusjogo += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == STATUSLABIRINTO2) {
				if (x > 1668 && x < 1728 && y < 590 && y > 510)	jogo->ajuda += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT && jogo->statusjogo == CROMATINAPRETA) {
				if (x > jogo->FatorIna.x && x < jogo->FatorIna.x + jogo->FatorIna.w 
					&& y < jogo->FatorIna.y + jogo->FatorIna.h && y > jogo->FatorIna.y)	jogo->apertado = 1;
				}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == CROMATINAPRETA) {
				if (x > 1668 && x < 1728 && y < 590 && y > 510)	jogo->ajuda += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == CROMATINALARANJA) {
				if (x > 1668 && x < 1728 && y < 590 && y > 510)	jogo->ajuda += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT && jogo->statusjogo == CROMATINALARANJA) {
				if (x > jogo->JPX.x && x < jogo->JPX.x + jogo->JPX.w
					&& y < jogo->JPX.y + jogo->JPX.h && y > jogo->JPX.y) jogo->apertado = 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT &&
				jogo->statusjogo == CROMATINALARANJARNA) {
				if (x > 1668 && x < 1728 && y < 590 && y > 510)	jogo->ajuda += 1;
			}
			if (evento.button.button == SDL_BUTTON_LEFT && jogo->statusjogo == CROMATINALARANJARNA) {
				for (int i = 0; i < 26; i++) {
					if (x > jogo->RNAS[i].x && x < jogo->RNAS[i].x + jogo->RNAS[i].w
						&& y > jogo->RNAS[i].y && y < jogo->RNAS[i].y + jogo->RNAS[i].h ) {
						jogo->apertado = 1;
						jogo->RNAS[i].selecionado = 1;
					}
				}
			}
			if (evento.button.button == SDL_BUTTON_LEFT && jogo->statusjogo == POSCROMATINALARANJARNA6) {
				for (int i = 0; i < 3; i++) {
					if (x > jogo->Metil[i].x && x < jogo->Metil[i].x + jogo->Metil[i].w
						&& y > jogo->Metil[i].y && y < jogo->Metil[i].y + jogo->Metil[i].h) {
						jogo->apertado = 1;
						jogo->Metil[i].selecionado = 1;
					}
				}
			}
			if (jogo->statusjogo == POSCROMATINALARANJARNA6 && evento.button.button == SDL_BUTTON_LEFT) {
				if (x > jogo->Acil.x && x < jogo->Acil.x + jogo->Acil.w
					&& y < jogo->Acil.y + jogo->Acil.h && y > jogo->Acil.y) {
					jogo->apertado = 1;
				}
			}
			break;
		case SDL_MOUSEBUTTONUP:
			if (evento.button.button == SDL_BUTTON_LEFT ) {
				jogo->ajuda = 0;
				jogo->apertado = 0;
				for (int i = 0; i < 26; i++) {
					jogo->RNAS[i].selecionado = 0;
				}
				for (int i = 0; i < 3; i++) {
					jogo->Metil[i].selecionado = 0;
				}
			}
			break;
		case SDL_MOUSEMOTION:
			if (jogo->statusjogo == CROMATINAPRETA && jogo->apertado == 1) {
				if (x > jogo->FatorIna.x && x < jogo->FatorIna.x + jogo->FatorIna.w
					&& y < jogo->FatorIna.y + jogo->FatorIna.h && y > jogo->FatorIna.y) {
					jogo->FatorIna.x = x - jogo->FatorIna.w / 2;
					jogo->FatorIna.y = y - jogo->FatorIna.h / 2;
				}
			}
			if (jogo->statusjogo == CROMATINALARANJA && jogo->apertado == 1) {
				if (x > jogo->JPX.x && x < jogo->JPX.x + jogo->JPX.w
					&& y < jogo->JPX.y + jogo->JPX.h && y > jogo->JPX.y) {
					jogo->JPX.x = x - jogo->JPX.w / 2;
					jogo->JPX.y = y - jogo->JPX.h / 2;
				}
			}
			if (jogo->statusjogo == CROMATINALARANJARNA && jogo->apertado == 1) {
				for (int i = 0; i < 26; i++) {
					if (x > jogo->RNAS[i].x && x < jogo->RNAS[i].x + jogo->RNAS[i].w 
						&& y < jogo->RNAS[i].y + jogo->RNAS[i].h && y > jogo->RNAS[i].y && jogo->RNAS[i].selecionado == 1) {
						jogo->RNAS[i].x = x - jogo->JPX.w / 2;
						jogo->RNAS[i].y = y - jogo->JPX.h / 2;
					}
				}
			}
			if (jogo->statusjogo == POSCROMATINALARANJARNA6 && jogo->apertado == 1) {
				for (int i = 0; i < 3; i++) {
					if (x > jogo->Metil[i].x && x < jogo->Metil[i].x + jogo->Metil[i].w
						&& y < jogo->Metil[i].y + jogo->Metil[i].h && y > jogo->Metil[i].y && jogo->Metil[i].selecionado == 1) {
						jogo->Metil[i].x = x - jogo->Metil[i].w / 2;
						jogo->Metil[i].y = y - jogo->Metil[i].h / 2;
					}
				}
			}
			if (jogo->statusjogo == POSCROMATINALARANJARNA6 && jogo->apertado == 1) {
				if (x > jogo->Acil.x && x < jogo->Acil.x + jogo->Acil.w
					&& y < jogo->Acil.y + jogo->Acil.h && y > jogo->Acil.y) {
					jogo->Acil.x = x - jogo->Acil.w / 2;
					jogo->Acil.y = y - jogo->Acil.h / 2;
				}
			}
			break;
		}
	}
	
	
	const Uint8* teclado = SDL_GetKeyboardState(NULL);
	if (teclado[SDL_SCANCODE_W]) {
		if (jogo->statusjogo == STATUSLABIRINTO || jogo->statusjogo == STATUSLABIRINTO2) {
			jogo->personagem.Dy -= 0.5;
			if (jogo->personagem.Dy < -6) jogo->personagem.Dy = -6;
		}
	}
	else if (teclado[SDL_SCANCODE_S]) {
		if (jogo->statusjogo == STATUSLABIRINTO || jogo->statusjogo == STATUSLABIRINTO2) {
			jogo->personagem.Dy += 0.5;
			if (jogo->personagem.Dy > 6) jogo->personagem.Dy = 6;
		}
	}
	else if (teclado[SDL_SCANCODE_A]) {
		if (jogo->statusjogo == STATUSLABIRINTO || jogo->statusjogo == STATUSLABIRINTO2) {
			jogo->personagem.Dx -= 0.5;
			if (jogo->personagem.Dx < -6) jogo->personagem.Dx = -6;
		}
	}
	else if (teclado[SDL_SCANCODE_D]) {
		if (jogo->statusjogo == STATUSLABIRINTO || jogo->statusjogo == STATUSLABIRINTO2) {
			jogo->personagem.Dx += 0.5;
			if (jogo->personagem.Dx > 6) jogo->personagem.Dx = 6;
		}
	}
	else {
		jogo->personagem.Dx *= 0.8;
		jogo->personagem.Dy *= 0.8;
		if (fabsf(jogo->personagem.Dx) < 0.1f) jogo->personagem.Dx = 0;
		if (fabsf(jogo->personagem.Dy) < 0.1) jogo->personagem.Dy = 0;
	}
	
	return done;
}