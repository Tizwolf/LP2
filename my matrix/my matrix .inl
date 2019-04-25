#include <iostream>

using namespace std; 

template<class T>				
Matrix<T>::Matrix(int m , int n)	//Constructor
{
    rows = m;
	cols = n;
 
    a = new T*[rows]; //puntero apuntando a otro puntero
 
    for(int i = 0; i< rows; i++)		// = a[rows] [cols]
	{
    	a[i] = new T[cols];
    }
	//delete []a;
}

template <class T>
Matrix<T>::~Matrix() 	//Destructor
{
	delete []a;
}

template <class T>
void Matrix<T>::initMatrix(T **t)				//inicializar 
{
     
    for(int i=0; i < rows; i++)
	{
        for(int j=0; j < cols; j++)
		{
            a[i][j] = t[i][j];
        }
    }
 
}

template <class T>
Matrix<T> operator +(Matrix<T> x, Matrix<T> y)  //+ para sumar matrices
{
    while(x.rows == y.rows || x.cols == y.cols)
	{
		
	    Matrix<T> sum(x.rows, x.cols);
	 
	    int i,j;
	 
	    for(i=0; i < x.rows; i++)
		{
	        for(j=0; j < x.cols; j++)
			{
	            sum.a[i][j] = x.a[i][j] + y.a[i][j];
	        }
	    }
	       
	    return sum;
 	}
}

template <class T>
Matrix<T> operator *(Matrix<T> x, Matrix<T> y)    //* para multiplicar matrices
{ 
    while(x.cols == y.rows){
		
	    Matrix<T> mult(x.rows, y.cols);
	  
	    for(int i=0; i < x.rows; i++)
		{
	        for(int j=0; j < x.cols; j++)
			{
	            mult.a[i][j] = 0;
	 
	            for(int k=0; k < x.cols; k++)
				{
	                mult.a[i][j] += x.a[i][k] * y.a[k][j];   
	            }
	               
	        }
	    }
	       
	    return mult;
	 }
}
template <class T>
friend ostream& operator << (ostream &os, Matrix<T> &t) //cout 
{
	for(int i= 0; i<t.rows)	
	
		for (j = 0; j < z.cols; j++) {

			out << setw(10) << z.a[i][j];

		}

        out<< "\n";
     
	}
	
}
