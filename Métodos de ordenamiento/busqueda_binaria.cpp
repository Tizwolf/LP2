
//BUSQUEDA BINARIA

#include <iostream>
using namespace std; 

bool busq_binaria(int *A,int x,int n)
{	

	int i=0,j=n-1; 
	
	while(i<=j)
	{
		int m=(i+j)/2;
		
		if(A[m]==x)
		{
			cout<<"encontrado"<<endl;
			return true;
		} 
		if(A[m]<x)
		
		{
			i=m+1;
		}
		else
		{	
			j=m-1;
		}
	
	}
		return false;
		cout<<" NO encontrado"<<endl;
	
}

int main(){
	
	int n; //tamaño
    int A[n];
	int x; // numero a buscar
     
    cout<<"Numero de elementos: ";
	cin>>n;
	
		for(int i=0;i<n;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>A[i];
    }
    	
	cout<<"Numero deseado a buscar dentro del array: "<<endl;
	cin>>x;
	
	busq_binaria(A, x, n);
	
	
}
