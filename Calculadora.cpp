#include <iostream>
using namespace std;

//g++ -o <<output>> .\Calculadora.cpp

int sumar(int num1, int num2);
int restar(int num1, int num2);
double multiplicar(float num1, float num2);
float dividir(int num1, int num2);

int main()
{
    int num1, num2, resultado;
    cout << "Por favor ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Por favor ingrese el segundo numero: " << endl;
    cin >> num2;
    resultado = sumar(num1, num2);
    cout << resultado << endl;
    return 0;
}

int sumar(int num1, int num2)
{
    return num1 + num2;
}

int restar(int num1, int num2)
{
    return num1 - num2;
}

float dividir(int num1, int num2)
{
    float resultado = num1 / num2;
    return resultado;
}

double multiplicar(float num1, float num2)
{
    return num1 * num2;
}