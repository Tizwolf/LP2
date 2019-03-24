
//3.-Escriba un algoritmo que verifique si una cadena es palíndroma


#include <iostream>

using namespace std;

int main()
{		
	/*
	bool is_pal (char *str){
		int n = 0;
		while (str[n])n++;{
			for (i=0; i<n/2; i++){
				if (str[i]!= str[n-i-1])
					return 0; 		//true
				else 
					return 1;		//false
			}
		}
	}
	*/
	
	string palabra;
	cout<<"Ingrese palabra "<<endl;
	cin>>palabra;
	
	/*
	for(int i=0;i<palabra.length();i++){
		for(int j=palabra.length()-1; j>=0; j--){
			
			if(palabra[i]==palabra[j])
				return true;
			else 
				return false;
			
		}
	}
	*/
	 int i = 0;
	 int j = palabra.length() - 1;
	 int mitad = j/2;
	 
	 while(palabra[i] == palabra[j]){
	  	if(mitad == i){
		   cout << "Es palindromo";
		   break;
	  	}
	 	j--;
	 	i++;
	 }
	 if(mitad != i)
	 cout << "No es palindromo";
	 return 0;
	//	abccba 
	//	012345
	
}
	
