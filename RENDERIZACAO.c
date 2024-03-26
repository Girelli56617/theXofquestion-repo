#include "ORIGEM2.h"

void renderizar(Jogo* jogo) {
	if (jogo->statusjogo == STATUSPENSARGATO) {
		cena2(jogo);
	}
	else if (jogo->statusjogo == STATUSPENSARGATOD) {
		cena3(jogo);
	}
	else if (jogo->statusjogo == STATUSIRISTRISTE) {
		cena4(jogo);
	}
	else if (jogo->statusjogo == STATUSIRISCAFE) {
		cena5(jogo);
	}
	else if (jogo->statusjogo == STATUSIRISCAFE2) {
		cena6(jogo);
	}
	else if (jogo->statusjogo == STATUSPOLITECNICO) {
		cena7(jogo);
	}
	else if (jogo->statusjogo == STATUSQUADRONEGRO) {
		cena8(jogo);
	}
	else if (jogo->statusjogo == STATUSQUADRONEGROOPCOES) {
		cena9(jogo);
	}
	else if (jogo->statusjogo == STATUSRESPOSTA) {
		cena10(jogo);
	}
	else if (jogo->statusjogo == STATUSRESPOSTA2) {
		cena11(jogo);
	}
	else if (jogo->statusjogo == STATUSRESPOSTA3) {
		cena12(jogo);
	}
	else if (jogo->statusjogo == STATUSRESPOSTA4) {
		cena13(jogo);
	}
	else if (jogo->statusjogo == STATUSRESPOSTA5) {
		cena14(jogo);
	}
	else if (jogo->statusjogo == STATUSRESPOSTA6) {
		cena15(jogo);
	}
	else if (jogo->statusjogo == STATUSRESPOSTA7) {
		cena16(jogo);
	}
	else if (jogo->statusjogo == STATUSRESPOSTA8) {
		cena17(jogo);
	}
	else if (jogo->statusjogo == STATUSRESPOSTA8) {
		cena17(jogo);
	}
	else if (jogo->statusjogo == STATUSPRESUSPIRO) {
		cenagato(jogo);
	}
	else if (jogo->statusjogo == STATUSSUSPIRO) {
		cenasuspiro(jogo);
	}
	else if (jogo->statusjogo == STATUSTRANSICAO) {
		cena18(jogo);
	}
	else if (jogo->statusjogo == STATUSTRANSICAO2) {
		cena19(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO) {
		cena20(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO2) {
		cena21(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO3) {
		cena22(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO4) {
		cena23(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO5) {
		cena24(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO6) {
		cena25(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO7) {
		cena26(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO8) {
		cena27(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO9) {
		cena28(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO10) {
		cena29(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO11) {
		cena30(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO12) {
		cena31(jogo);
	}
	else if (jogo->statusjogo == STATUSDIALOGORATO13) {
		cena32(jogo);
	}
	else if (jogo->statusjogo == STATUSMUNDOMOLECULAR) {
		cena33(jogo);
	}
	else if (jogo->statusjogo == STATUSFUNDONUCLEO) {
		cena34(jogo);
	}
	else if (jogo->statusjogo == STATUSOCULOS) {
		cena35(jogo);
	}
	else if (jogo->statusjogo == STATUSCELULA) {
		cena36(jogo);
	}
	else if (jogo->statusjogo == STATUSPRELABIRINTO) {
		cenaprenucleo(jogo);
	}
	else if (jogo->statusjogo == STATUSPRELABIRINTO2) {
		cenaprenucleo2(jogo);
	}
	else if (jogo->statusjogo == STATUSPRELABIRINTO3) {
		cenaprenucleo3(jogo);
	}
	else if (jogo->statusjogo == STATUSPRELABIRINTO4) {
		cenaprenucleo4(jogo);
	}
	else if (jogo->statusjogo == STATUSPRELABIRINTO5) {
		cenaprenucleo5(jogo);
	}
	else if (jogo->statusjogo == STATUSPRELABIRINTO6) {
		cenaprenucleo6(jogo);
	}
	else if (jogo->statusjogo == STATUSLABIRINTO) {
		cena37(jogo);
	}
	else if (jogo->statusjogo == STATUSPOSNUCLEO) {
		cenaposnucleo(jogo);
	}
	else if (jogo->statusjogo == STATUSPOSNUCLEO2) {
		cenaposnucleo2(jogo);
	}
	else if (jogo->statusjogo == STATUSPOSNUCLEO3) {
		cenaposnucleo3(jogo);
	}
	else if (jogo->statusjogo == STATUSPOSNUCLEO4) {
		cenaposnucleo4(jogo);
	}
	else if (jogo->statusjogo == STATUSPOSNUCLEO5) {
		cenaposnucleo5(jogo);
	}
	else if (jogo->statusjogo == STATUSPOSNUCLEO6) {
		cenaposnucleo6(jogo);
	}
	else if (jogo->statusjogo == STATUSLABIRINTO2) {
		cena38(jogo);
	}
	else if (jogo->statusjogo == ESCALAMENOR) {
		cena39(jogo);
	}
	else if (jogo->statusjogo == CROMATINAPRETA) {
		cena40(jogo);
	}
	else if (jogo->statusjogo == STATUSPOSENCAIXE) {
		cena41(jogo);
	}
	else if (jogo->statusjogo == CROMATINALARANJA) {
		cena42(jogo);
	}
	else if (jogo->statusjogo == CROMATINALARANJARNA) {
		cena43(jogo);
	}
	else if (jogo->statusjogo == POSCROMATINALARANJARNA) {
		cena44(jogo);
	}
	else if (jogo->statusjogo == POSCROMATINALARANJARNA2) {
		cena45(jogo);
	}
	else if (jogo->statusjogo == POSCROMATINALARANJARNA3) {
		cena46(jogo);
	}
	else if (jogo->statusjogo == POSCROMATINALARANJARNA4) {
		cena47(jogo);
	}
	else if (jogo->statusjogo == POSCROMATINALARANJARNA5) {
		cena48(jogo);
	}
	else if (jogo->statusjogo == POSCROMATINALARANJARNA6) {
		cena49(jogo);
	}
	else if (jogo->statusjogo == OUTRASCELULAS) {
		cena50(jogo);
	}
	else if (jogo->statusjogo == TRANSICAOSONHO) {
		cena51(jogo);
	}
	else if (jogo->statusjogo == STATUSLEVANTAR) {
		cena52(jogo);
	}
	else if (jogo->statusjogo == STATUSAPENASUMSONHO) {
		cena53(jogo);
	}
	else if (jogo->statusjogo == STATUSQUEM) {
		cena54(jogo);
	}
	else if (jogo->statusjogo == STATUSANE) {
		cena55(jogo);
	}
	else if (jogo->statusjogo == STATUSCREDITOS) {
		cena56(jogo);
	}
}