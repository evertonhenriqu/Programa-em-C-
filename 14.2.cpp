#include <iostream>
using namespace std;

int main(){
	
	int num1, num2, num3;
	
	cout << ("Numero 1: \n");
	cin >> num1;
    cout << ("Numero 2: \n");
	cin >> num2;
	cout << ("Numero 3: \n");
	cin >> num3;
	
	if ((num1>num2) && (num1>num3)){
		if (num2>num3){
			cout <<num1<< " - " <<num2<< " - " << num3 << endl;
		}else{
			cout <<num1<< " - " <<num3<< " - " << num2 << endl;
		}
	}else{
    	if (num2>num3){
			if(num1>num2){
				cout <<num2<< " - " <<num1<< " - " <<num3<< endl;
			}
			else{
				cout <<num2<< " - " <<num3<< " - " <<num1<< endl;
			}
		}else{
        	if(num2>num1){
				cout <<num3<< " - " <<num2<< " - " <<num1<< endl;
			}
        	else{
				cout <<num3<< " - " <<num1<< " - " <<num2<< endl; 
			}	
			
		}
		}
	return 0;	
	}