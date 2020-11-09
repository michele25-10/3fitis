#include <iostream>
using namespace std;

main() {
	int n; //inserisci da tastiera il numero da convertire
	
	string b;	//stringa che conterrà il numero binario
	b=""; //stringa vuota per ora
	
	cout<<"Inserisci un numero decimale: ";	//scrivo di inserire un numero
	cin>>n; //input da tastiera
	
	while (n>0) { //n dovrà essere maggiore di 0 altrimenti non sarà rappresentabile
		if (n%2==0) // se n/2 da resto 0 allora
			b='0'+b; //scrivo che la stringa b corrisponde a 0+b
		else //altrimenti se n/2 da resto 1
			b='1'+b; //la stringa b corroisponderà a 1+b
		n=n/2;
	}
	
	cout<<b;	//scrivo il valore della stringa b
		
}
