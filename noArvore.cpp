#include "noArvore.hpp"


noArvore::noArvore(int info, noArvore* prim, noArvore* prox):
info(info),
prim(prim),
prox(prox)
{

}

noArvore::noArvore(int info):
info(info),
prim(nullptr),
prox(nullptr)
{

}


int noArvore::getInfo() {
	return info;
}

noArvore* noArvore::getPrim() {
	return prim;
}

noArvore* noArvore::getProx() {
	return prox;
};


void noArvore::setInfo(int info) {
	this->info = info;
}

void noArvore::setPrim(noArvore* prim) {
	this->prim = prim;
}

void noArvore::setProx(noArvore* prox) {
	this->prox = prox;
}

void noArvore::print(std::ostream& os) {
	os << "<" << info;

	noArvore* p = prim;

	while (p != nullptr) {
		p->print(os);
		p = p->getProx();
	}
	os << ">";
}