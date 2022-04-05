#include <iostream>

using namespace std;

main(){
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if (idade>=16){
        cout << " voce ja pode votar!\n " ;
	}
	if (idade>=18){
		cout << " voce ja pode tirar abilitacao!\n ";
	}


	return 0;
}