

///UVA 2          
//Books and prices

#include <iostream>
#include <stdio.h>


using namespace std;

 int main(){
 	
 	int nbooks; 
  	
	int money; //dinero cada 2 semanas
 	
 //	while ( nbooks>= 2 && nbooks<= 10000){
	 
	 	while (cin>>nbooks){
	 		
	 		int prices[nbooks]={};
	 		
	 		for (int k = 0; k<nbooks; k++){
	 			cin>>prices[k];
			 	
			 }
	 		 cin>>money;
	 			 		
	 		int i, j; //precios de 2 libros
	 			
	 		for ( i=0; i<nbooks; i++)
	 		{
	 			for (j=1; j<nbooks ; j++){
				 	
	 				if (prices[i] + prices [j] == money){
	 					if (prices[i] <= prices[j]){
	 						
		 					cout<<"Peter should buy books whose prices are "<<prices[i]<<" and "<<prices[j]<<endl;
						
						}
					}
					
				}
			}
		 	
		}
 //	}
 	return 0; 
 	
 }
