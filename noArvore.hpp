#include <iostream>


class noArvore {
private:
	int info;
	noArvore* prim;
	noArvore* prox;

public:
	noArvore(int info, noArvore* prim, noArvore* prox);
	noArvore(int info);

	int getInfo();
	noArvore* getPrim();
	noArvore* getProx();

	void setInfo(int info);
	void setPrim(noArvore* prim);
	void setProx(noArvore* prox);

	void print(std::ostream& os);


};