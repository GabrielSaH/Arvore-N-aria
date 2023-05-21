#include "arvore.hpp"

#include <iostream>


int main() {

	arvore a = arvore();
	noArvore* n1 = a.criaNo(1);
	noArvore* n2 = a.criaNo(2);
	noArvore* n3 = a.criaNo(3);
	noArvore* n4 = a.criaNo(4);
	noArvore* n5 = a.criaNo(5);
	noArvore* n6 = a.criaNo(6);
	noArvore* n7 = a.criaNo(7);
	noArvore* n8 = a.criaNo(8);
	noArvore* n9 = a.criaNo(9);
	noArvore* n0 = a.criaNo(0);

	a.insereFilho(n3, n4);
	a.insereFilho(n2, n5);
	a.insereFilho(n2, n3);
	a.insereFilho(n9, n0);
	a.insereFilho(n7, n9);
	a.insereFilho(n7, n8);
	a.insereFilho(n1, n7);
	a.insereFilho(n1, n6);
	a.insereFilho(n1, n2);

	arvore b = arvore();
	noArvore* n1b = b.criaNo(1);
	noArvore* n2b = b.criaNo(2);
	noArvore* n3b = b.criaNo(3);
	noArvore* n4b = b.criaNo(4);
	noArvore* n5b = b.criaNo(5);
	noArvore* n6b = b.criaNo(6);
	noArvore* n7b = b.criaNo(7);
	noArvore* n8b = b.criaNo(8);
	noArvore* n9b = b.criaNo(9);
	noArvore* n0b = b.criaNo(10);

	b.insereFilho(n3b, n4b);
	b.insereFilho(n2b, n5b);
	b.insereFilho(n2b, n3b);
	b.insereFilho(n9b, n0b);
	b.insereFilho(n7b, n9b);
	b.insereFilho(n7b, n8b);
	b.insereFilho(n1b, n7b);
	b.insereFilho(n1b, n6b);


	std::cout << "A : " << a << std::endl;
	std::cout << "B : " << b << std::endl;
	std::cout << "A == B ? " << a.igual(b) << std::endl;
	std::cout << "Numero de folhas em a: " << a.folhas() << "  Em B : " << b.folhas() << std::endl;
	std::cout << "Numero de numeros pares em a: " << a.pares() << "  Em B : " << b.pares() << std::endl;
	std::cout << "Altura de a: " << a.altura() << "  Em B : " << b.altura() << std::endl;
	std::cout << "10 pertence a a: " << a.pertence(10) << "  10 Em b ? " << b.pertence(10) << std::endl;

	return 0;
}