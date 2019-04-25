
#include <iostream>

using namespace std;

template <class T>

class Matrix 
{
	private:
	   T **a;
 	   int rows, cols;
 	   
	public:
		Matrix (size_t nr = 0; size_t nc = 0);
		Matrix (const Matrix<T> & m);
		
		Matrix<T>(int m, int n);  
	    ~Matrix();  // Destructor 
	  	T & operator () (size_t i; size_t j);
	    void initMatrix(T **t);
	    Matrix<T> & operator <<(T & v);	     
	
	    friend ostream& operator << (ostream &os, Matrix<T> &t); //sobrecarga del operador <<
	    friend istream& operator >> (istream &os, Matrix<T> &t); //sobrecarga del operador >>
	 
	    friend Matrix<T> operator + (Matrix<T> x, Matrix<T> y); //sumar matrices
	    friend Matrix<T> operator - (Matrix<T> x, Matrix<T> y); //restar matrices
	    friend Matrix<T> operator * (Matrix<T> x, Matrix<T> y); //* para multiplicar matrices
	
};

#include "my_matrix.inl"
