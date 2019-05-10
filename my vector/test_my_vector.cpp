#include <iostream>
#include "my_vector.h"
using namespace std; 

int main()
{
	Vector<int> v1; 
	v1.push_back(3);
	v1.push_back(35);
	cout<<v1.get_size()<<endl;
	cout<<v1[1];
	return 0;		
}
