

//BUSQUEDA LINEAL

#include <iostream>
using namespace std; 


bool busq_lineal(int *A,int x,int n)
{
	//x el numero a buscar
	for(int i=0;i<n-1;i++)
	{
		if(A[i]==x)
		{
			cout<<"encontrado"<<endl;
			return true;
		}
		else 
		{
			return false;
			cout<<" NO encontrado"<<endl;
		}
	}

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
	
	busq_lineal(A, x, n);

	
}
