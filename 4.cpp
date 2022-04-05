#include <iostream>
using namespace std;

main(){
	int anoa,anon,idade;
	
	cout <<" Digite o ano de nasc: ";
	cin >> anon;
	cout << " Digite o ano atual: "; 
	cin >> anoa;
	idade = anoa - anon ;
	cout << " A sua idade eh: " << idade << " anos.";	
	cin.get();
	
	return 0;
}