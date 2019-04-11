#ifndef MY_STRING_H
#define MY_STRING_H

#include <iostream>

using namespace std; 

class my_string
{
	
	private: 	
		char* 	string ; 
		unsigned 	 leng	; 
		//complete
	public: 
		my_string ( const char * str = NULL); 
		my_string ( const my_string & str);
		~my_string();
		
		
		my_string&operator = (const my_string & str);
		my_string&operator + ( const my_string & str);
		bool operator ==
		 				>
		 				<
		unsigned leng ( ) const;		// longitud constante
	
	    int indice (char c) const;		// Encontrar el índice char (localización)
			
		bool vacio();   	// si el string está vacio retorna true sino false
		
		String substr(int, int);	// retorna un objeto que es el substring del objeto llamado
		 				
		
		
		char & operator[](const int & i);
		{
		  friend ostream& operator<< (ostream& os, const String& srt);	//cout << String 
	    friend istream& operator>> (istream& os,       String& str);
		}
		//OPERADORES DE ASIGNACIÓN 
	    String& operator= (const String& s);
	
	    //OPERADORES LÓGICOS
		friend bool operator== (const String& izq, const String& der);	//Igualdad de ambos string
	   	  
	    friend bool operator!= (const String& izq, const String& der);	//Diferentes 
};
#endif
//Crear los archivos my_string.h 		my_string cpp			test_my_string.cpp

//int main ()
//{
//	
//	std::string 	str = "hola"; 
//	std::string a, b, c; 
//	a= str + str; 
//	b = a; 
//	c = a+b;
//	c = " ";
//	
//	a[1]  = 'H'; 
//	
//}
