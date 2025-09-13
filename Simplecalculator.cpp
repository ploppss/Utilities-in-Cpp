#include <iostream>
using namespace std;
    float num1= 0;
    float num2= 0;
    float resultado= 0;
    int numOperacion;
void suma(){
 resultado= num1+ num2;
}

void resta(){
 resultado= num1- num2;
}

void multiplicacion(){
 resultado= num1*num2;
}

void division (){
resultado= num1/num2;
}

int main(){
    

cout<< "Este programa soporta las operaciones de suma, resta, multiplicacion y division"<< endl;
cout<< "Decida la operacion que necesita hacer antes de insertar los numeros"<< endl;
cout<< " "<< endl;
cout<< "Inserte el primer numero: ";
cin>> num1;
cout<< endl;
cout<< "Inserte el segundo numero: ";
cin>> num2;
cout<< endl;
cout<< "Elija que operacion desea hacer"<< endl;
cout<< "1.Suma"<< endl<< "2.Resta"<< endl<< "3.Multiplicacion"<< endl<< "4.Division"<<endl;
cin>> numOperacion;
cout<< endl;

switch (numOperacion){
case 1:
    suma();
    cout<< "El resultado de la suma es: "<< resultado;
    break;
case 2:
    resta();
    cout<< "El resultado de la resta es: "<< resultado;
    break;
case 3:
    multiplicacion();
    cout<< "El resultado del producto es: "<< resultado;
    break;
case 4:
    division();
    cout<< "El resultado de la division es: "<< resultado;
    break;
default: cout<< "ERROR. Inserte un valor valido";
    break;
}

    return 0;
}