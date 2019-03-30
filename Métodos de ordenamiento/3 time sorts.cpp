#include<iostream>
#include<algorithm>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include<cmath>

using namespace std;

int *TA;
int *TB;

typedef long long my_int;
typedef void(*fun_sort)(int *,int);

bool test_sort(fun_sort sort,const int *A,int n)
{
	memcpy(TA, A, sizeof(int)*n);
	memcpy(TB, A, sizeof(int)*n);
	
	clock_t t=clock();
	sort(TA, n);
	
	float time = float(clock()-t)/CLOCKS_PER_SEC;
	
	std::sort(TB,TB+n);
	
	for(int i=0;i<n;i++)
	{	if(TA[i]!=TB[i])
		{	
			return false;
		}
	}
	cout<<time<<" ";
	return true;
}

bool busq_lineal(int *,int,int);
bool busq_binaria(int *,int,int);
void bubble_sort(int *,int);
void selection_sort(int *,int);
void insertion_sort(int *,int);

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
			

		}
	}


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

int main()
{ 

	srand(time(NULL));
	
	int N=100000;
	
	int *A=new int[N];
	
	TA=new int[N];
	TB=new int[N];
	
  	fun_sort sort[3]={bubble_sort, insertion_sort, selection_sort};
  	
	for(int n=100; n<=N; n*=10){
		
		for(int i=0;i<n;i++)
		{
			A[i]=rand()%n;
		}
	  		cout<<n<<" ";
	  		
	  	for(int s=0;s<3;s++)
	  	{
	  		if(!test_sort(sort[s],A,n))
	  		{
	  				cout<<"FAIL\n";
	  				return 0;
		    }
		}
		cout<<endl;
	}
	
	delete []A;
	delete []TA;
	delete []TB;
  
	return 0;
}
