#include <iostream>
using namespace std;

int main(){
	
	float cl;
	
	cout << " Digite o valor da luz: ";
	cin >> cl;
	
	if( cl < 50 ){
		
		cout << " voc� esta gastando muito " << endl;
	}
	else
		cout << " seu gasto foi normal " << endl;
		
	return 0;
}