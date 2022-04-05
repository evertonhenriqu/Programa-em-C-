#include <iostream>
using namespace std;

int main(){
	 
	 float valor_g, combustivel, gasolina , alcool;
	 int cl;
	  
     cout << " Digite a capacidade do tanque: ";
	 cin >> cl;
	 cout << " Digite o valor gasto para encher o tanque R$ ";
	 cin >> valor_g;
	 cout << " 1-gasolina\n";
	 cout << " 2-alcool\n";
	 cout << " Digite qual ira utilizar: ";
	 cin >> combustivel;

	 
	 if(combustivel==1){
		 gasolina = ( valor_g * 2.30 );
		 cout << " voce vai gartar R$ " << gasolina << endl;
	 }else{
		 alcool = ( valor_g * 1.50);
		 cout << " voce vai gartar R$ " << alcool << endl;
	 }
	 
	 	
	return 0;
}