//#pragma once
#ifndef MY_MATRIX_H
#define MY_MATRIX_H
#include <iostream>

using namespace std;

template<class T>
class Matrix;

template <class T>
class Matrix 
{
	private:
	   T *a;
 	   size_t rows, cols;
 	   
	public:
	    Matrix (size_t nr = 0, size_t nc = 0): rows(nr), cols(nc) {}
	    Matrix (const Matrix<T> & m); 
	    ~Matrix();  
	    T& operator()(size_t i, size_t j);
	    Matrix<T> & operator <<(const T & v);	     
	    template<class T> ostream& operator << <>(ostream &os, Matrix<T> &m); //sobrecarga del operador <<
	    Matrix<T> operator + (const Matrix<T> & m); 
	    Matrix<T> operator * (const Matrix<T> & m); 
	
};
#include "my_matrix.inl"
#endif
