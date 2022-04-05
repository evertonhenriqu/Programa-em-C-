#include <iostream>
using namespace std;

main(){
	float lagp,altp,lart,alt,tijolo,parede;
	int quantidade;
	cout << "Informe a largura da parede: ";
	cin >> lagp;
	cout << "Informe a altura da parede: ";
	cin >> altp;
	cout << "Informe a largura do tijolo: ";
	cin >> lart;
	cout << "Informe a altura do tijolo: ";
	cin >> alt;
	
	parede= altp*lagp;
	tijolo= alt*lart;
	quantidade= parede/tijolo;
	quantidade=quantidade+1;
	
	cout << "A Parede tem: " << parede << endl;
	cout << "O Tijolo tem: " << tijolo << endl;
	cout << quantidade << " tijolos.";
}