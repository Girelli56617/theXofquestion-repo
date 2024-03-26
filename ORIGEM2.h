#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <SDL_ttf.h>
#include "STATUSCENAS.h"
#include <SDL_mixer.h>

typedef struct {
	float x, y, Dx, Dy;
	int w, h;
}Personagem;

typedef struct {
	int x, y, w, h;
}Bloco;

typedef struct {
	int x, y, w, h;
	short encaixado, selecionado;
	double rotacao;
}Bloco2;

typedef struct {
	SDL_Texture* acil, *blocos[5], * bolinha, * bolinha2,
		*cariotipomacho,* cabeca, *cariotipofemea, * Celula, * Cromatinagenelaranja,
		* Cromatinagenepreto, * das, * embriao, * fundonucleo, * FundoPolitecnico2, * interrogacao, *interrogacao2, 
		*inventario, * irispensandogato, * iris, * iriscabeca, * iriscafe, *irisfeliz, * irismuitofeliz, *irismuitotriste, 
		*irisquarto, *irissurpresa, *iristriste, *lixo, *met, *nucleossomo, *oculos, *oculosiris,*paredecelula, *pensamentogato, 
		*pocao1, *politecnico, *quadro, *rato, *RNA1, *RNA2, *tetocelula;
	SDL_Renderer* renderer;
	SDL_Color preto;
	TTF_Font* fonte;
	Personagem personagem;
	Bloco chao[20][20], bolinhasV[38], bloco[9], RNA[15], FatorIna, cromatinaPreta, JPX, cromatinaLaranja, 
		Acil, Nucleossomo;
	Bloco2 RNAS[26], Metil[3];
	int scrollX, scrollY, z, x, y, apertado, creditos;
	short acerto, ajuda, statusjogo, coletado, coletado2;
}Jogo;

int eventos(SDL_Window* janela, Jogo* jogo);
void renderizar(Jogo* jogo);
void inicializacaoTexturas(Jogo* jogo);
void inicializacaoTermos(Jogo* jogo);
void desalocarTexturas(Jogo* jogo);
void cena2(Jogo* jogo);
void cena3(Jogo* jogo);
void cena4(Jogo* jogo);
void cena5(Jogo* jogo);
void cena6(Jogo* jogo);
void cena7(Jogo* jogo);
void cena8(Jogo* jogo);
void cena9(Jogo* jogo);
void cena10(Jogo* jogo);
void cena11(Jogo* jogo);
void cena12(Jogo* jogo);
void cena13(Jogo* jogo);
void cena14(Jogo* jogo);
void cena15(Jogo* jogo);
void cena16(Jogo* jogo);
void cena17(Jogo* jogo);
void cena18(Jogo* jogo);
void cenagato(Jogo* jogo);
void cenasuspiro(Jogo* jogo);
void cena19(Jogo* jogo);
void cena20(Jogo* jogo);
void cena21(Jogo* jogo);
void cena22(Jogo* jogo);
void cena23(Jogo* jogo);
void cena24(Jogo* jogo);
void cena25(Jogo* jogo);
void cena26(Jogo* jogo);
void cena27(Jogo* jogo);
void cena28(Jogo* jogo);
void cena29(Jogo* jogo);
void cena30(Jogo* jogo);
void cena31(Jogo* jogo);
void cena32(Jogo* jogo);
void cena33(Jogo* jogo);
void cena34(Jogo* jogo);
void cena35(Jogo* jogo);
void cena36(Jogo* jogo);
void aceleracao(Jogo* jogo);
void cenaprenucleo(Jogo* jogo);
void cenaprenucleo2(Jogo* jogo);
void cenaprenucleo3(Jogo* jogo);
void cenaprenucleo4(Jogo* jogo);
void cenaprenucleo5(Jogo* jogo);
void cenaprenucleo6(Jogo* jogo);
void cena37(Jogo* jogo);
void colisao(Jogo* jogo);
void cenaposnucleo(Jogo* jogo);
void cenaposnucleo2(Jogo* jogo);
void cenaposnucleo3(Jogo* jogo);
void cenaposnucleo4(Jogo* jogo);
void cenaposnucleo5(Jogo* jogo);
void cenaposnucleo6(Jogo* jogo);
void cena38(Jogo* jogo);
void cena39(Jogo* jogo);
void cena40(Jogo* jogo);
void cena41(Jogo* jogo);
void cena42(Jogo* jogo);
void cena43(Jogo* jogo);
void cena44(Jogo* jogo);
void cena45(Jogo* jogo);
void cena46(Jogo* jogo);
void cena47(Jogo* jogo);
void cena48(Jogo* jogo);
void cena49(Jogo* jogo);
void cena50(Jogo* jogo);
void cena51(Jogo* jogo);
void cena52(Jogo* jogo);
void cena53(Jogo* jogo);
void cena54(Jogo* jogo);
void cena55(Jogo* jogo);
void cena56(Jogo* jogo);