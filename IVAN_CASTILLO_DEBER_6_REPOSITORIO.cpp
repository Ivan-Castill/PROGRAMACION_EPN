#include <iostream>
#include <cmath>
using namespace std;

void triangulo_I(){
	int num=0;
	cout<<" Ingrese un numero por teclado:"<<endl;
	cin>>num;
	
	for(int j=1; j<=num;++j){
		cout<<"\n";
		//bucle anidado
		for(int i=1; i<=j;++i){
			cout<<"*";	
		}
	cout<<endl;
	}
	
}

void triangulo_II(){
	int num=0;
	cout<<" Ingrese un numero por teclado:"<<endl;
	cin>>num;
	
	for(int j=num; j>=1;--j){
		cout<<"\n";
		//bucle anidado
		for(int i=1; i<=j;++i){
			cout<<"*";	
		}
	cout<<endl;
	}
	
}

void triangulo_Completo(){
	int num=0;
	cout<<" Ingrese un numero positivo impar por teclado: "<<endl;
	cin>>num;
	//para verificar si es impar
	if (num>0 && num%2!=0 ){
			for (int i = 1; i <= num; i += 2) {
				cout<<"\n"<<endl;//imprime espacion entere lineas
            	//imprimir espacios en blanco...
            	for (int j = 0; j < (num - i) / 2; j++) {
                cout << " ";
            	}
            	//imprimir asteriscos...
            	for (int j = 0; j < i; j++) {
                cout << "*";
            	}
            cout<<endl;
			}
	}
	else{
		cout<<"El numero ingresado es incorrecto \n Que tenga un lindo dia....>-<--"<<endl;
	}
}

int main(){
	triangulo_Completo();
	//triangulo_II();
	//triangulo_I();
	return 0;
}
