*
1.-Escriba un algoritmo que intercambie el valor de dos variables  enteras sin declarar una nueva

2.-Escriba un algoritmo que dado un array encuentre el k esimo menor elemento
  SI:  A = 4 2 1 7 5 8 3 9  
  k esimo k = 3 ----> 3
  
3.-Escriba un algoritmo que verifique si una cadena es palíndroma

4.- Escriba una función que calucule la potencia b^n realizando la menor cantidad de multiplicaciones

5.-Explique la suguiente lineas:
	 const int *const p= new int(5);
		int &a = *p;

*/

#include <iostream>

using namespace std;

int main()
{
	int	a = 20;
	int b = 10; 
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout<<"a == "<<a<<endl;
	cout<<"b == "<<b<<endl;
	
	return 0;	
}
	

