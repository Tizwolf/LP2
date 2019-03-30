
//SELECTION SORT

#include<iostream>
using namespace std;

void selection_sort (int  A[], int n) 
{
        int min,i,j,aux;
        for (i=0; i<n-1; i++) 
        {
              min=i;
              for(j=i+1; j<n; j++)
                    if(A[min] > A[j])
                       min=j;
              aux=A[min];
              A[min]=A[i];
              A[i]=aux ;
        }
 
} 


int main () 
{
	int n;
    int A[n];
	
     
    cout<<"Numero de elementos: ";
	cin>>n;
      
    for(int i=0;i<n;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>A[i];
    }
         
    
    selection_sort(A,n);

	//Imprime los elementos ordenados del array e.e				
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}			
	
	return 0;
}
