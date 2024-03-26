#include "ORIGEM2.h"

void aceleracao(Jogo *jogo) {
	jogo->personagem.x += jogo->personagem.Dx;
	jogo->personagem.y += jogo->personagem.Dy;
	jogo->scrollX = -jogo->personagem.x + 884;
	jogo->scrollY = -jogo->personagem.y + 496;
	if (jogo->scrollX < -142) {
		jogo->scrollX = -142;
	}
	if (jogo->scrollY > -100) {
		jogo->scrollY = -100;
	}
	if (jogo->scrollY < -919) {
		jogo->scrollY = -919;
	}
	if (jogo->scrollX > -100) {
		jogo->scrollX = -100;
	}
}
void colisao(Jogo* jogo) {
	for (int i = 0; i < 9; i++) {
		float px = jogo->personagem.x, py = jogo->personagem.y, pw = jogo->personagem.w;
		int bx = jogo->bloco[i].x, by = jogo->bloco[i].y, bw = jogo->bloco[i].w, bh = jogo->bloco[i].h,
		 ph = jogo->personagem.h;

		if (px + pw - 10 > bx && bx + bw > px + 10) {
			if (py + ph < by + bh && by < py + ph && jogo->personagem.Dy > 0) {
				jogo->personagem.y = jogo->bloco[i].y - jogo->personagem.h;
				jogo->personagem.Dy = 0;
				py = by - ph;
			}
			else if (py < by + bh && py + ph > by + bh && jogo->personagem.Dy < 0) {
				jogo->personagem.y = jogo->bloco[i].y + jogo->bloco[i].h;
				jogo->personagem.Dy = 0;
				py = by + bh;
			}
		}

		if (py < by + bh && py + ph > by) {
			if (px + pw > bx && bx > px && jogo->personagem.Dx > 0) {
				jogo->personagem.x = jogo->bloco[i].x - jogo->personagem.w;
				jogo->personagem.Dx = 0;
				px = bx - pw;
			}
			else if (px + pw > bx + bw && px < bx + bw && jogo->personagem.Dx < 0) {
				jogo->personagem.x = jogo->bloco[i].x + jogo->bloco[i].w;
				jogo->personagem.Dx = 0;
				px = bx + bw;
			}
		}

		if (jogo->personagem.x < 110) jogo->personagem.x = 110, jogo->personagem.Dx = 0;
		if (jogo->personagem.x + jogo->personagem.w > 1900) 
			jogo->personagem.x = 1900 - jogo->personagem.w, jogo->personagem.Dx = 0;
		if (jogo->personagem.y < 110) jogo->personagem.y = 110, jogo->personagem.Dy = 0;
		if (jogo->personagem.y + jogo->personagem.h > 1900) 
			jogo->personagem.y = 1900 - jogo->personagem.h, jogo->personagem.Dy = 0;
	}

	if (jogo->FatorIna.x + jogo->FatorIna.w/2 > jogo->cromatinaPreta.x + jogo->cromatinaPreta.w - 334
		&& jogo->FatorIna.x < jogo->cromatinaPreta.x + jogo->cromatinaPreta.w - 294) {
		if (jogo->FatorIna.y > 607 && jogo->FatorIna.y < 611 ) {
			jogo->FatorIna.x = jogo->cromatinaPreta.x + jogo->cromatinaPreta.w - 334;
			jogo->statusjogo += 1;
			jogo->FatorIna.y = 606;
		}
	}

	if (jogo->JPX.x + jogo->JPX.w / 2 > jogo->cromatinaLaranja.x + 242
		&& jogo->JPX.x < jogo->cromatinaLaranja.x + jogo->cromatinaLaranja.w - 288) {
		if (jogo->JPX.y < jogo->cromatinaLaranja.y + jogo->cromatinaLaranja.h - 87
			&& jogo->JPX.y > jogo->cromatinaLaranja.y + jogo->cromatinaLaranja.h - 95) {
			jogo->statusjogo += 1;
			jogo->JPX.y = jogo->cromatinaLaranja.y + jogo->cromatinaLaranja.h - 96;
		}
	}
}