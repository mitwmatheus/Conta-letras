#include<iostream>
using namespace std;

int main(){
	char letra;
	int contA=0, contB=0, cont=0;
	
	while(cont<10){
		cin>>letra;
		
		if(letra=='a')
			contA++;
		else if(letra=='b')
			contB++;
		cont++;
	}
	if(contA<contB)
		cout<<1;
	else	
		cout<<0;
		
	return 0;
}
