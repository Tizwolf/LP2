

//4.- Escriba una función que calucule la potencia b^n realizando 
//    la menor cantidad de multiplicaciones

//RECURSIVA POTENCIACIÓN
#include <iostream>

using namespace std; 


int pot_re(int b, int n)
{
	if(n==0){
		return 1;
	}
	
	else{
		int aux = pot_re(b,n/2);
		
		if (n%2 ==0)
		{
			return aux*aux;
		}
		else
		{
			return b*aux*aux;
		}
	}
	
}


int main(){
		
	int a, b;
	cin>>a>>b;
	
	cout<<"La potencia de "<<a<<" en "<<b<<""" es "<<pot_re(a,b)<<endl;
	return 0;

}
