#include <iostream>
using namespace std;

int main() {
	
	int x;
	
	cout << "Digite o numero: ";
	cin >> x;
	
	if ( x < 0 ){
		x = x *(-1);
		
	}
	
	cout << " Resposta: " << x << endl;
	
	return 0;
}