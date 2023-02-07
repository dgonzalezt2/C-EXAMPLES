#include <iostream>
using namespace std;

void compararRef(int x, int y, int *mayor, int *menor);
int compararValorMayor(int x, int y);
int compararValorMenor(int x, int y);

int main(){
    int x;
    int y;
    int mayor;
    int menor;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;
    
    //por referencia    //compararRef(x, y, &mayor, &menor);    //por valor    mayor = compararValorMayor(x, y);
    menor = compararValorMenor(x, y);
    
    //mostrar resultados    cout << "mayor("<< x << ", " << y << ") es " << mayor << endl;
    cout << "mayor("<< x << ", " << y << ") es " << menor << endl;
    
    return 0;
}

void compararRef(int x, int y, int *mayor, int *menor){
    if (x >= y){
        *mayor = x;
        *menor = y;

    } else {
        *mayor = y;
        *menor = x;
    }
}
int compararValorMayor(int x, int y){
    if (x >= y)
        return x;
    return y; 
}
int compararValorMenor(int x, int y){
    if (x < y)
        return x;
    return y; 
}