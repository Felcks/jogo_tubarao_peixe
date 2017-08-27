#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Agente {
	int x;
	int y;
	int vida;
	public:
		Agente(int a, int b, int c){ x = a; y = b; vida = c; }
};

class Peixe : public Agente {
	public:
		Peixe(int a, int b, int c) : Agente(a, b, c);
};

int main() {

	return 0;
}