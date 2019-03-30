

//INSERTION
//void <fun>_sort (int *A, int n)

#include <iostream>

using namespace std;


    void insertion_sort(int* A, int n)
    {
        int i, j;
        int actual;
     
        for (i = 1; i < n; i++) {
            actual = A[i];
            for (j = i; j > 0 && A[j - 1] > actual; j--) {
                A[j] = A[j - 1];
            }
            A[j] = actual;
        }
 	}
        /*
        int i,j,v;
   for (i = 1; i < n; i++)
   {
        v = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > v)
        {
            a[j + 1] = a[j];
            j--;
        }
             
        a[j + 1] = v;
    }   
    }
    */


int main(){
	int n;
    int A[n];
	
     
    cout<<"Numero de elementos: ";
	cin>>n;
      
    for(int i=0;i<n;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>A[i];
    }
         
    
    insertion_sort(A,n);

	//Imprime los elementos ordenados del array e.e				
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}			
	
	return 0;
}




/*
for(i=1; i<n; i++) {
  temp = V[i];
  Izq = 0;
  Der = i-1;
  while(Izq <= Der){
    Medio = (Izq+Der)/2;
    if (temp < V[Medio])
      Der = Medio - 1;
    else
      Izq = Medio + 1;
  }
  for (j=i-1; j>=Izq; j--){
    V[j+1]=V[j];
  }
  V[Izq] = temp;
}
*/
