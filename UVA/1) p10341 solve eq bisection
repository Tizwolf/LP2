

///UVA 1            ( use... divide and conquer)
//SOLVE THE EQUATION

#include <iostream>
#include <cmath> 
#include <stdio.h>

#define EPS 1e-7

//#define PI 3.14159265


using namespace std; 
	
	int p,q,r,s,t,u;
	
	double funcion(double x){
	  return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
	}
	
	double biseccion(){
		
	  double inf = 0;			//
	  double sup = 1;
	  
	  
	  while (inf + EPS < sup){
	  	
		    double x = (inf + sup)/2;
		    
		    if (funcion (inf) * funcion (x) <= 0){
		      sup = x;
		    } 
			else {
		      inf = x;
		    }
		    
	  }
	  
	  return (inf + sup)/2;
	}
	
	int main(){
		
		
	  while (scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF)
	  {
	  	
		    if (funcion(0) * funcion(1) > 0){
		      cout<<"No solution"<<endl;
		      
		    } else {
		      printf("%.4lf\n", biseccion());
		    }
	  }
	  
	  
	}
