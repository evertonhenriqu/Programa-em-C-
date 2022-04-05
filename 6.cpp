#include <iostream>
using namespace std;

int main(){
	float prep,prepa,desconto;
	cout << "Digite o valor do produto: ";
	cin >> prep;
	cout << "Digite o valor pago: ";
	cin >> prepa;
	
	desconto= 100 -((prepa/prep)*100);
	cout << " o valor do desconto foi: " << desconto << "%";	
}