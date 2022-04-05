#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int total, passadas, restam;
	float andamento;
	
	cout << "Digite o total de aulas: ";
	cin >> total;
	cout << "Digite a quantidade de aulas passadas: ";
	cin >> passadas;
	
	restam=total-passadas;
	andamento=(passadas*100)/total;
	
	cout << "faltam" << restam << "aulas" << endl;
	cout << "andamento" << andamento;
	
	return 0;
}








