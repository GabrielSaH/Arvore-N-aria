#include "arvore.hpp"


arvore::arvore():
raiz(nullptr)
{

}

noArvore* arvore::criaNo(int v) {
	noArvore* novo = new noArvore(v);
	raiz = novo;
	return novo;
}

void arvore::insereFilho(noArvore* pai, noArvore* filho) {
	filho->setProx(pai->getPrim());
	pai->setPrim(filho);
	raiz = pai;


}

bool arvore::pertence(int v) {
	return pertenceAUX(raiz, v);
}

bool arvore::pertenceAUX(noArvore* no, int v) {
	if (no->getInfo() == v) {
		return true;
	}

	noArvore* p = no->getPrim();

	while (p != nullptr) {
		if (pertenceAUX(p, v)) {
			return true;
		}
		p = p->getProx();
	};
}

int arvore::altura() {
	return alturaAUX(raiz);
}

int arvore::alturaAUX(noArvore* no) {
	int hmax = -1;
	noArvore* p = no->getPrim();

	while (p != nullptr) {
		int h = alturaAUX(p);
		if (h > hmax) {
			hmax = h;
		};
		p = p->getProx();
	}

	return hmax + 1;
}

int arvore::pares() {
	int pares = 0;
	int* num = &pares;

	paresAUX(raiz, num);

	return pares;

}

void arvore::paresAUX(noArvore* no, int* num) {
	
	if ((no->getInfo() % 2) == 0) {
		*num += 1;
	}

	noArvore* p = no->getPrim();

	while (p != nullptr) {
		paresAUX(p, num);

		p = p->getProx();
	}

}

int arvore::folhas() {
	int folhas = 0;
	int* num = &folhas;

	folhasAUX(raiz, num);

	return folhas;
}

void arvore::folhasAUX(noArvore* no, int* num) {
	if (no->getPrim() == nullptr) {
		*num += 1;
	};

	noArvore* p = no->getPrim();

	while (p != nullptr) {
		folhasAUX(p, num);

		p = p->getProx();
	}
}

bool arvore::igual(arvore alvo) {
	return igualAUX(raiz, alvo.raiz);
}

bool arvore::igualAUX(noArvore* no1, noArvore* no2) {
	
	if (no1 == nullptr) {
		if (no2 != nullptr) {
			return false;
		}
		return true;
	}
	
	else if (no1->getInfo() != no2->getInfo()) {
		return false;
	}

	
	noArvore* p = no1->getPrim();
	noArvore* c = no2->getPrim();

	while (p != nullptr) {
		if (!igualAUX(p, c)) {
			return false;
		}

		p = p->getProx();
		c = c->getProx();
	}

	return true;
}

std::ostream& operator<<(std::ostream& os, const arvore* arvore) {
	arvore->raiz->print(os);

	return os;
}

std::ostream& operator<<(std::ostream& os, const arvore arvore) {
	arvore.raiz->print(os);

	return os;
}
