
//BUBBLE
//void <fun>_sort (int *A, int n)


#include <iostream>


using namespace std;

void bubble_sort(int *A, int n)
{
	int aux;
	
	for (int i = 0; i<n ; i++){
		for(int j=0;j<n-1;j++){
			
			if(*(A+j) > *(A+j+1)){
				
				aux = *(A+j);
				*(A+j) = *(A+j+1);
				*(A+j+1) = aux;
			}
		}
	}
	 
	
}

int main (){
	int n; //numero de elementos del array
	int *A;
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	
	A = new int[n];
	
	//entra elementos del array
	for(int i=0;i<n;i++){
		cout<<"Digite un numero ["<<i<<"]: ";
		cin>>*(A+i);
	}
				
	bubble_sort(A,n);
				
	//Imprime los elementos ordenados del array e.e				
	for(int i=0;i<n;i++){
		cout<<*(A+i)<<" ";
	}			
	delete[] A;
	return 0;

}
