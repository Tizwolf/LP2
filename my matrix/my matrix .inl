#include <iostream>
#include<cstdlib>
#include <cassert>
using namespace std; 
template<class T>	
Matrix<T>::Matrix(size_t nr = 0, size_t nc= 0): rows(nr) ,cols(nc)	//Constructor por defecto
{
    rows = nr;
	cols = nc;
    a = new T *[nr];		//con solo un array menos memoria ocupa
    for(int i=0; i<nr; i++)
    {
        m[i] = new T [nc];
    }
}

template <class T>
Matrix<T>::~Matrix() 	//Destructor
{
   for(int i=0; i<rows; i++)
   {
        delete [] a[i];
   }
    delete [] a;
}

template <class T>
Matrix<T> :: Matrix(const Matrix<T> & m)
{
    rows = m.rows;
    cols = m.cols;
    a = new T* [rows];
    for(int i=0; i<rows; i++)
    {
        a[i] = new T [cols];
    }
    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
	{
            a[i][j] = m.a[i][j];
        }
    }
}

template <class T>
Matrix<T> Matrix<T> :: operator +(const Matrix<T> & m)  
{
	Matrix<T> m2;
    m2.rows = m.rows;
    m2.cols = m.cols;
    m2.a = new T* [m.rows];
    for(int i=0; i<m2.rows; i++)
    {
        m2.a[i] = new T [m.cols];
    }
    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
	{
            m2.a[i][j] = a[i][j] + m.a[i][j];
        }
    }
    return m2;
	//con dos argumentos
//    while(x.rows == y.rows || x.cols == y.cols)
//	{
//		
//	    Matrix<T> sum(x.rows, x.cols);
//	 
//	    int i,j;
//	 
//	    for(i=0; i < x.rows; i++)
//		{
//	        for(j=0; j < x.cols; j++)
//			{
//	            sum.a[i][j] = x.a[i][j] + y.a[i][j];
//	        }
//	    }
//	       
//	    return sum;
// 	}
}

template <class T>
Matrix<T> Matrix<T> :: operator * (const Matrix<T> & m)  
{ 
    Matrix<T> m2;
    m2.rows = rows;
    m2.cols = m.cols;
    m2.M = new T* [m2.rows];
    for(int i=0; i<m2.rows; i++)
    {
        m2.M[i] = new T [m2.cols];
    }
    T suma = 0;
    for(int i=0; i<cols;i++)
	{
        for(int j=0; j<rows; j++)
	{
            for(int l=0; l<cols;l++)
	    {
                suma = suma + (a[i][l] * m.a[l][j]);
            }
            m2.a[i][j] = suma;
            suma = 0;
        }
    }
    return m2;

		//Con dos argumentos
//    while(x.cols == y.rows){
//		
//	    Matrix<T> mult(x.rows, y.cols);
//	  
//	    for(int i=0; i < x.rows; i++)
//		{
//	        for(int j=0; j < x.cols; j++)
//			{
//	            mult.a[i][j] = 0;
//	 
//	            for(int k=0; k < x.cols; k++)
//				{
//	                mult.a[i][j] += x.a[i][k] * y.a[k][j];   
//	            }
//	               
//	        }
//	    }
//	       
//	    return mult;
//	 }
}

template <class T>
Matrix<T> &Matrix<T> :: operator << (const T &v)
{
    assert(nr<rows);
    a[nr][nc] = v;
    if(nc<cols-1)
    {
        nc++;
    }
    else
    {
        nr++;
        nc = 0;
    }
    return *this;
}

template <class T>
ostream& operator << (ostream & os,const Matrix<T>& m)
{
    for(int i=0; i<m.rows; i++)
    {
        for(int j=0;j<m.cols;j++)
	{
            os<<m.a[i][j]<<" ";
        }
        os<<endl;
    }
    return os;
}
