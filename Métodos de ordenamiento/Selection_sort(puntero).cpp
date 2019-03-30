
//SELECTION
//void <fun>_sort (int *A, int n)


#include <iostream>


using namespace std;

void selection_sort(int *A, int n)
{
	int aux;	
	for (int i = 0; i<n-1 ; i++){
		
		int min = i;
		
        for(int j =i+1; j<n; j++)
                    if(A[min] > A[j])
                       min=j;
              aux=A[min];
              A[min]=A[i];
              A[i]=aux ;
		
		/*
		
		for(int j=i+1; j<n; j++){
			
			if(*(A+min) > *(A+j)){
				min = *(A+j);			
				
			}		
		}
		aux = *(A+min);
		*(A+min) = *(A+i);
		*(A+i) = aux;
		*/
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
				
	selection_sort(A,n);
				
	//Imprime los elementos ordenados del array e.e				
	for(int i=0;i<n;i++){
		cout<<*(A+i)<<" ";
	}			
	delete[] A;
	return 0;

}
