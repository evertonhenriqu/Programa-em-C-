#include <iostream>

using namespace std;

int main(){
	int sexo,peso_ideal;
	float altura;
	
	cout << " Digite a sua altura: ";
	cin >> altura;
	cout << " 1-homem\n";
	cout << " 2-mulher\n";
	cout << "Digite uma das opcoes: ";
	cin >> sexo; 
	
	if(sexo==1){
		peso_ideal =(72.7 * altura) - 58;
		cout << " seu peso ideal eh " << peso_ideal;	
	}else{
		peso_ideal =(62.1 * altura) - 44.7;
		cout << " seu peso ideal eh " << peso_ideal;
	}
	return 0;
}