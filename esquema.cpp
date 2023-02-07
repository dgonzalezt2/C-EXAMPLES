/*
    Para compilar g++ -o <nombredelejecutable> <nombre.cpp> 
    para ejecutar ./nombredelejecutable
*/

#include <iostream>

using namespace std;

int main(int arg, char *args[])
{
    cout<<"Hola mundo"<< endl;
    int numero;//En esta variable estará almacenado el nombre ingresado.
    cout<<"Ingresa un numero "<<endl;
    cin >> numero; //Se lee el nombre
    for(int i=0; i<=numero; i++)
    {
        cout<<"Iteracion: "<<i<<endl;
    }
    return 0;
}    
