#include "ORIGEM2.h"

void inicializacaoTexturas(Jogo *jogo) {
	//politecnico2
	SDL_Surface* fundo = IMG_Load("fundopolitecnico2.png");
	if (fundo == NULL) {
		printf("nao foi possivel carregar o fundo\n");
	}
	jogo->FundoPolitecnico2 = SDL_CreateTextureFromSurface(jogo->renderer, fundo);
	SDL_FreeSurface(fundo);

	//celula
	SDL_Surface* SCelula = IMG_Load("celula.png");
	if (SCelula == NULL) {
		printf("nao foi possivel carregar o fundo\n");
	}
	jogo->Celula = SDL_CreateTextureFromSurface(jogo->renderer, SCelula);
	SDL_FreeSurface(SCelula);

	//fonte
	jogo->fonte = TTF_OpenFont("8bit.ttf", 12);
	if (jogo->fonte == NULL) {
		printf("nao foi possivel carregar a fonte \n");
		SDL_Quit();
		exit(1);
	}

	SDL_Surface* Sacil = IMG_Load("acil.png");
	jogo->acil = SDL_CreateTextureFromSurface(jogo->renderer, Sacil);
	SDL_FreeSurface(Sacil);

	SDL_Surface* Sbloco1 = IMG_Load("bloco1.png");
	jogo->blocos[0] = SDL_CreateTextureFromSurface(jogo->renderer, Sbloco1);
	SDL_FreeSurface(Sbloco1);

	SDL_Surface* Sbloco2 = IMG_Load("bloco2.png");
	jogo->blocos[1] = SDL_CreateTextureFromSurface(jogo->renderer, Sbloco2);
	SDL_FreeSurface(Sbloco2);

	SDL_Surface* Sbloco3 = IMG_Load("bloco3.png");
	jogo->blocos[2] = SDL_CreateTextureFromSurface(jogo->renderer, Sbloco3);
	SDL_FreeSurface(Sbloco3);

	SDL_Surface* Sbloco4 = IMG_Load("bloco4.png");
	jogo->blocos[3]= SDL_CreateTextureFromSurface(jogo->renderer, Sbloco4);
	SDL_FreeSurface(Sbloco4);

	SDL_Surface* Sbloco5 = IMG_Load("bloco5.png");
	jogo->blocos[4] = SDL_CreateTextureFromSurface(jogo->renderer, Sbloco5);
	SDL_FreeSurface(Sbloco5);

	SDL_Surface* Sbolinha = IMG_Load("bolinha.png");
	jogo->bolinha = SDL_CreateTextureFromSurface(jogo->renderer, Sbolinha);
	SDL_FreeSurface(Sbolinha);

	SDL_Surface* Sbolinha2 = IMG_Load("bolinha2.png");
	jogo->bolinha2 = SDL_CreateTextureFromSurface(jogo->renderer, Sbolinha2);
	SDL_FreeSurface(Sbolinha2);

	SDL_Surface* Scabeca = IMG_Load("cabeca.png");
	jogo->cabeca = SDL_CreateTextureFromSurface(jogo->renderer, Scabeca);
	SDL_FreeSurface(Scabeca);

	SDL_Surface* ScariotipoMacho = IMG_Load("cariotipomacho.png");
	jogo->cariotipomacho = SDL_CreateTextureFromSurface(jogo->renderer, ScariotipoMacho);
	SDL_FreeSurface(ScariotipoMacho);

	SDL_Surface* ScariotipoFemea = IMG_Load("cariotipofemea.png");
	jogo->cariotipofemea = SDL_CreateTextureFromSurface(jogo->renderer, ScariotipoFemea);
	SDL_FreeSurface(ScariotipoFemea);

	SDL_Surface* Scromatinalaranja = IMG_Load("Cromatinagenelaranja.png");
	jogo->Cromatinagenelaranja = SDL_CreateTextureFromSurface(jogo->renderer, Scromatinalaranja);
	SDL_FreeSurface(Scromatinalaranja);

	SDL_Surface* Scromatinapreta = IMG_Load("Cromatinagenepreto.png");
	jogo->Cromatinagenepreto = SDL_CreateTextureFromSurface(jogo->renderer, Scromatinapreta);
	SDL_FreeSurface(Scromatinapreta);

	SDL_Surface* Sdas = IMG_Load("das.png");
	jogo->das = SDL_CreateTextureFromSurface(jogo->renderer, Sdas);
	SDL_FreeSurface(Sdas);

	SDL_Surface* Sembriao = IMG_Load("embriao.png");
	jogo->embriao = SDL_CreateTextureFromSurface(jogo->renderer, Sembriao);
	SDL_FreeSurface(Sembriao);

	SDL_Surface* Sfundonucleo = IMG_Load("fundonucleo.png");
	jogo->fundonucleo = SDL_CreateTextureFromSurface(jogo->renderer, Sfundonucleo);
	SDL_FreeSurface(Sfundonucleo);

	SDL_Surface* Sinterrogacao = IMG_Load("interrogacao.png");
	jogo->interrogacao = SDL_CreateTextureFromSurface(jogo->renderer, Sinterrogacao);
	SDL_FreeSurface(Sinterrogacao);

	SDL_Surface* Sinterrogacao2 = IMG_Load("interrogacao2.png");
	jogo->interrogacao2 = SDL_CreateTextureFromSurface(jogo->renderer, Sinterrogacao2);
	SDL_FreeSurface(Sinterrogacao2);

	SDL_Surface* Sinventario = IMG_Load("inventario.png");
	jogo->inventario = SDL_CreateTextureFromSurface(jogo->renderer, Sinventario);
	SDL_FreeSurface(Sinventario);

	SDL_Surface* Siris = IMG_Load("iris.png");
	jogo->iris = SDL_CreateTextureFromSurface(jogo->renderer, Siris);
	SDL_FreeSurface(Siris);

	SDL_Surface* Siriscabeca = IMG_Load("iriscabeca.png");
	jogo->iriscabeca = SDL_CreateTextureFromSurface(jogo->renderer, Siriscabeca);
	SDL_FreeSurface(Siriscabeca);

	SDL_Surface* Siriscafe = IMG_Load("iriscafe.png");
	jogo->iriscafe = SDL_CreateTextureFromSurface(jogo->renderer, Siriscafe);
	SDL_FreeSurface(Siriscafe);

	SDL_Surface* Sirisfeliz = IMG_Load("irisfeliz.png");
	jogo->irisfeliz = SDL_CreateTextureFromSurface(jogo->renderer, Sirisfeliz);
	SDL_FreeSurface(Sirisfeliz);

	SDL_Surface* Sirismuitofeliz = IMG_Load("irismuitofeliz.png");
	jogo->irismuitofeliz = SDL_CreateTextureFromSurface(jogo->renderer, Sirismuitofeliz);
	SDL_FreeSurface(Sirismuitofeliz);

	SDL_Surface* Sirismuitotriste = IMG_Load("irismuitotriste.png");
	jogo->irismuitotriste = SDL_CreateTextureFromSurface(jogo->renderer, Sirismuitotriste);
	SDL_FreeSurface(Sirismuitotriste);

	SDL_Surface* Sirispensandogato = IMG_Load("irispensandogato.png");
	jogo->irispensandogato = SDL_CreateTextureFromSurface(jogo->renderer, Sirispensandogato);
	SDL_FreeSurface(Sirispensandogato);

	SDL_Surface* Sirisquarto = IMG_Load("irisquarto.png");
	jogo->irisquarto = SDL_CreateTextureFromSurface(jogo->renderer, Sirisquarto);
	SDL_FreeSurface(Sirisquarto);

	SDL_Surface* Sirissurpresa = IMG_Load("irissurpresa.png");
	jogo->irissurpresa = SDL_CreateTextureFromSurface(jogo->renderer, Sirissurpresa);
	SDL_FreeSurface(Sirissurpresa);

	SDL_Surface* Siristriste = IMG_Load("iristriste.png");
	jogo->iristriste = SDL_CreateTextureFromSurface(jogo->renderer, Siristriste);
	SDL_FreeSurface(Siristriste);

	SDL_Surface* Slixo = IMG_Load("lixo.png");
	jogo->lixo = SDL_CreateTextureFromSurface(jogo->renderer, Slixo);
	SDL_FreeSurface(Slixo);

	SDL_Surface* Smet = IMG_Load("met.png");
	jogo->met = SDL_CreateTextureFromSurface(jogo->renderer, Smet);
	SDL_FreeSurface(Smet);

	SDL_Surface* Snucleossomo = IMG_Load("nucleossomo.png");
	jogo->nucleossomo = SDL_CreateTextureFromSurface(jogo->renderer, Snucleossomo);
	SDL_FreeSurface(Snucleossomo);

	SDL_Surface* Soculos = IMG_Load("oculos.png");
	jogo->oculos = SDL_CreateTextureFromSurface(jogo->renderer, Soculos);
	SDL_FreeSurface(Soculos);

	SDL_Surface* Soculosiris = IMG_Load("oculosiris.png");
	jogo->oculosiris = SDL_CreateTextureFromSurface(jogo->renderer, Soculosiris);
	SDL_FreeSurface(Soculosiris);

	SDL_Surface* Sparedecelula = IMG_Load("paredecelula.png");
	jogo->paredecelula = SDL_CreateTextureFromSurface(jogo->renderer, Sparedecelula);
	SDL_FreeSurface(Sparedecelula);

	SDL_Surface* Spensamentogato = IMG_Load("pensamentogato.png");
	jogo->pensamentogato = SDL_CreateTextureFromSurface(jogo->renderer, Spensamentogato);
	SDL_FreeSurface(Spensamentogato);

	SDL_Surface* Spocao1 = IMG_Load("pocao1.png");
	jogo->pocao1 = SDL_CreateTextureFromSurface(jogo->renderer, Spocao1);
	SDL_FreeSurface(Spocao1);

	SDL_Surface* Spoli = IMG_Load("poli.png");
	jogo->politecnico = SDL_CreateTextureFromSurface(jogo->renderer, Spoli);
	SDL_FreeSurface(Spoli);

	SDL_Surface* Squadro = IMG_Load("quadro.png");
	jogo->quadro = SDL_CreateTextureFromSurface(jogo->renderer, Squadro);
	SDL_FreeSurface(Squadro);

	SDL_Surface* Srato = IMG_Load("rato.png");
	jogo->rato = SDL_CreateTextureFromSurface(jogo->renderer, Srato);
	SDL_FreeSurface(Srato);

	SDL_Surface* Srna1 = IMG_Load("RNA1.png");
	jogo->RNA1 = SDL_CreateTextureFromSurface(jogo->renderer, Srna1);
	SDL_FreeSurface(Srna1);

	SDL_Surface* Srna2 = IMG_Load("RNA2.png");
	jogo->RNA2 = SDL_CreateTextureFromSurface(jogo->renderer, Srna2);
	SDL_FreeSurface(Srna2);

	SDL_Surface* Stetocelula = IMG_Load("tetocelula.png");
	jogo->tetocelula = SDL_CreateTextureFromSurface(jogo->renderer, Stetocelula);
	SDL_FreeSurface(Stetocelula);
}