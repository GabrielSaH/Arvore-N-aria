#include "noArvore.hpp"
#include <iostream>

class arvore {
private:
	noArvore* raiz;

public:
	arvore();

	noArvore* criaNo(int v);
	void insereFilho(noArvore* pai, noArvore* filho);
	bool pertence(int v);
	int altura();
	int pares();
	int folhas();
	bool igual(arvore alvo);

	friend std::ostream& operator<<(std::ostream& os, const arvore arvore);
	friend std::ostream& operator<<(std::ostream& os, const arvore* arvore);

private:
	void paresAUX(noArvore* no, int* num);
	bool pertenceAUX(noArvore* no, int info);
	int alturaAUX(noArvore* no);
	void folhasAUX(noArvore* no, int* num);
	bool igualAUX(noArvore* no1, noArvore* no2);

};