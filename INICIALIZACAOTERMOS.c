#include"ORIGEM2.h"
#include <stdlib.h>
#include <time.h>

void inicializacaoTermos(Jogo* jogo) {
	jogo->statusjogo = ESCALAMENOR;
	jogo->preto.r = 0, jogo->preto.g = 0, jogo->preto.b = 0, jogo->preto.a = 0;
	jogo->acerto = 0;
	jogo->ajuda = 0;
	jogo->personagem.x = 884;
	jogo->personagem.y = 496;
	jogo->personagem.w = 60;
	jogo->personagem.h = 60;
	jogo->personagem.Dx = 0;
	jogo->personagem.Dy = 0;
	jogo->x = 0;
	jogo->y = 0;

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			jogo->chao[0][j].x = 100;
			jogo->chao[0][j].y = j * 100;
			jogo->chao[0][j].w = 10;
			jogo->chao[0][j].h = 100;

			jogo->chao[19][j].x = 1900;
			jogo->chao[19][j].y = j * 100;
			jogo->chao[19][j].w = 10;
			jogo->chao[19][j].h = 100;

			jogo->chao[i][0].x = i * 100;
			jogo->chao[i][0].y = 100;
			jogo->chao[i][0].w = 100;
			jogo->chao[i][0].h = 10;

			jogo->chao[i][19].x = i * 100;
			jogo->chao[i][19].y = 1900;
			jogo->chao[i][19].w = 100;
			jogo->chao[i][19].h = 10;

		}
	}
	jogo->bloco[0].x = 10 + 100, jogo->bloco[0].y = 100 + 100, jogo->bloco[0].w = 100, jogo->bloco[0].h = 1000;

	jogo->bloco[1].x = 300, jogo->bloco[1].y = 1800, jogo->bloco[1].w = 700, jogo->bloco[1].h = 100;

	jogo->bloco[2].x = 1200, jogo->bloco[2].y = 1800, jogo->bloco[2].w = 300, jogo->bloco[2].h = 100;

	jogo->bloco[3].x = 1800, jogo->bloco[3].y = 900, jogo->bloco[3].w = 100, jogo->bloco[3].h = 800;

	jogo->bloco[4].x = 1800, jogo->bloco[4].y = 200, jogo->bloco[4].w = 100, jogo->bloco[4].h = 600;

	jogo->bloco[5].x = 800, jogo->bloco[5].y = 110, jogo->bloco[5].w = 600, jogo->bloco[5].h = 100;

	jogo->bloco[6].x = 550, jogo->bloco[6].y = jogo->bloco[1].y - 500, jogo->bloco[6].w = 200, jogo->bloco[6].h = 200;

	jogo->bloco[7].w = 200, jogo->bloco[7].h = 600, jogo->bloco[7].x = jogo->bloco[5].x + jogo->bloco[5].w - jogo->bloco[7].w,
		jogo->bloco[7].y = 400;

	jogo->bloco[8].w = 400, jogo->bloco[8].h = 150, jogo->bloco[8].x = jogo->bloco[7].x - jogo->bloco[8].w,
		jogo->bloco[8].y = jogo->bloco[7].y + jogo->bloco[7].h - jogo->bloco[8].h;
	
	for (int i = 0; i < 36; i++) {
		if (i < 6) {
			int Al = rand() % 50;
			jogo->bolinhasV[i].x = jogo->bloco[0].x + jogo->bloco[0].w + 30 + Al;
			jogo->bolinhasV[i].y = 100 + jogo->bloco[0].y + 100 * i ;
			jogo->bolinhasV[i].w = 20;
			jogo->bolinhasV[i].h = 20;
		}
		if (i >= 6 && i < 12) {
			int Al = rand() % 50;
			int Al2 = rand() % 30;
			jogo->bolinhasV[i].x = 100*i + jogo->bloco[1].x + 30 + Al;
			jogo->bolinhasV[i].y = jogo->bloco[1].y - jogo->bloco[1].h - Al2;
			jogo->bolinhasV[i].w = 20;
			jogo->bolinhasV[i].h = 20;
		}
		if (i >= 12 && i < 24) {
			int Al = rand() % 50;
			int Al2 = rand() % 30;
			jogo->bolinhasV[i].x = jogo->bloco[4].x - jogo->bloco[4].w - 30 - Al;
			jogo->bolinhasV[i].y = jogo->bloco[4].y + i * 50;
			jogo->bolinhasV[i].w = 20;
			jogo->bolinhasV[i].h = 20;
		}
		if (i >= 24 && i < 30) {
			int Al = rand() % 50;
			int Al2 = rand() % 20;
			jogo->bolinhasV[i].x = jogo->bloco[5].x + jogo->bloco[5].w*4 - 80 * i;
			jogo->bolinhasV[i].y = jogo->bloco[5].y + jogo->bloco[5].h + 50 + Al2;
			jogo->bolinhasV[i].w = 20;
			jogo->bolinhasV[i].h = 20;
		}
		if (i >= 30 && i <= 35) {
			int Al = rand() % 200;
			jogo->bolinhasV[i].x = jogo->bloco[6].x + jogo->bloco[6].w + i * 20 - 200;
			jogo->bolinhasV[i].y = jogo->bloco[6].y - i*5 - Al + 100;
			jogo->bolinhasV[i].w = 20;
			jogo->bolinhasV[i].h = 20;
		}
	}

	jogo->bolinhasV[36].x = jogo->bloco[7].x;
	jogo->bolinhasV[36].y = jogo->bloco[7].y - 50;
	jogo->bolinhasV[36].w = 20;
	jogo->bolinhasV[36].h = 20;

	jogo->bolinhasV[37].x = jogo->bloco[2].x + 100;
	jogo->bolinhasV[37].y = jogo->bloco[2].y - 50;
	jogo->bolinhasV[37].w = 20;
	jogo->bolinhasV[37].h = 20;
	
	jogo->RNA[0].x = 784;
	jogo->RNA[0].y = 316;
	jogo->RNA[0].w = 40;
	jogo->RNA[0].h = 40;

	jogo->RNA[1].x = 684;
	jogo->RNA[1].y = 356;
	jogo->RNA[1].w = 40;
	jogo->RNA[1].h = 40;

	jogo->RNA[2].x = 984;
	jogo->RNA[2].y = 336;
	jogo->RNA[2].w = 40;
	jogo->RNA[2].h = 40;

	jogo->FatorIna.x = 1673;
	jogo->FatorIna.y = 725;
	jogo->FatorIna.w = 50;
	jogo->FatorIna.h = 50;

	jogo->cromatinaPreta.x = 584;
	jogo->cromatinaPreta.y = 396;
	jogo->cromatinaPreta.w = 600;
	jogo->cromatinaPreta.h = 300;

	jogo->cromatinaLaranja.x = 584;
	jogo->cromatinaLaranja.y = 396;
	jogo->cromatinaLaranja.w = 600;
	jogo->cromatinaLaranja.h = 300;

	jogo->JPX.x = 1688;
	jogo->JPX.y = 340;
	jogo->JPX.w = 20;
	jogo->JPX.h = 20;

	for (int i = 0; i < 26; i++) {
		jogo->RNAS[i].encaixado = 0;
		jogo->RNAS[i].rotacao = 0;
		if (i < 13) {
			jogo->RNAS[i].x = jogo->cromatinaLaranja.x + jogo->cromatinaLaranja.w + 100;
			jogo->RNAS[i].y = jogo->cromatinaLaranja.y + i * 35;
			jogo->RNAS[i].w = 50;
			jogo->RNAS[i].h = 50;
		}
		if (i >= 13) {
			jogo->RNAS[i].x = jogo->cromatinaLaranja.x + jogo->cromatinaLaranja.w + 200;
			jogo->RNAS[i].y = jogo->cromatinaLaranja.y + (i - 13) * 35;
			jogo->RNAS[i].w = 50;
			jogo->RNAS[i].h = 50;
		}
	}

	jogo->Nucleossomo.x = 484;
	jogo->Nucleossomo.y = 196;
	jogo->Nucleossomo.w = 700;
	jogo->Nucleossomo.h = 500;

	jogo->Acil.w = 70;
	jogo->Acil.h = 70;
	jogo->Acil.x = (jogo->Nucleossomo.x + jogo->Nucleossomo.w) * 0.8;
	jogo->Acil.y = jogo->Nucleossomo.y + jogo->Nucleossomo.h - jogo->Acil.h*2;
	
	for (int i = 0; i < 3; i++) {
		jogo->Metil[i].x = jogo->Nucleossomo.x + i * 50 + 10;
		jogo->Metil[i].y = jogo->Nucleossomo.y;
		jogo->Metil[i].w = 50;
		jogo->Metil[i].h = 50;
	}

	jogo->apertado = 0;

	jogo->creditos = 0;

	jogo->coletado = 0, jogo->coletado2 = 0;
}