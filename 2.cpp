#include<iostream>

using namespace std;

main(){
	float a,b,perimetro,area;
	
	cout << "digite a: ";
	cin >> a;
	cout << "digite b: ";
	cin >> b;
	perimetro = a + a + b + b;
	area = a * b;
	
	cout << " o perimetro eh: " << perimetro;
	cout << "\n a area eh: " << area;

}