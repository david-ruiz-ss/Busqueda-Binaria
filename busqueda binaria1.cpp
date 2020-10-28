#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[]={1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band='F';
cout<<"ingrese un numero: ";
	cin>>dato;
	
	inf = 0;
	sup = 5;
		
		while(inf<=sup){
			mitad=(inf+sup)/2;
			
			if(numeros[mitad]==dato){
				band='V';
				break;
			}
			if(numeros[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		if(numeros[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}
			}
		
	if(band=='V'){
		cout<<"EL NUMERO FUE ENCONTRADO EN LA POSICION: "<<mitad<<endl;
	}
	else{
		cout<<"EL NUMERO NO FUE ENCONTRADO";
	}
	
	getch();
	return 0;
}
