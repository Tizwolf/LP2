//ITERATIVA

//4.- Escriba una función que calucule la potencia b^n realizando 
//    la menor cantidad de multiplicaciones
#include <iostream>

using namespace std; 


int pot_ite(int b, int n)
{
	int total=1;
	    while(n!=1){
	        if(n%2!=0){
	            total=total*b;
	            n--;
	        }
	        else{
	        b=b*b;
	        n=n/2;
	        }
	    }
	    return total*b;
}
	



int main(){
		
	int a, b;
	cin>>a>>b;
	
	cout<<"La potencia de "<<a<<" en "<<b<<""" es "<<pot_ite(a,b)<<endl;
	return 0;

}
