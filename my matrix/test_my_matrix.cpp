#include <iostream>
#include "my_matrix.h"
using namespace std; 

int main()
{
	Matrix <int> m1(3,3);
	Matrix <int> m1(2,2);
    m1<<1<<2<<3<<4<<5<<6<<7<<8<<9;
    Matrix<int> m2(2,2);
    m2<<1<<2<<3<<4;
	cout<<m1(1,2);   
    cout<<m1+m2;
    cout<<m1*m2;
    
	return 0;		
}
