#include <iostream>
using namespace std;

int main(){
	float peso, altura, imc;
	cout << "peso: ";
	cin >> peso;
	cout << "altura: ";
	cin >> altura;
	imc = (peso/(altura*altura));
	
	
	switch(imc){
		case 1:
			imc <18;
			cout << "Abaixo do peso. ";
			break;
		case 2:
			imc >= 18 && imc<= 25;
			cout << "Peso Normal. ";
			break;
		case 3:
			imc >= 26 && imc<= 30;
			cout << "Acima do Peso. ";
			break;
		case 4:
			imc >30;
			cout << "Obeso. ";
			break;
	}
	return 0
}