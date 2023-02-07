#include <iostream>#include <string>using namespace std;
class Nodo{
    private:
        int valor;
        Nodo *sig;
    public:
        Nodo(int valor, Nodo *sig);  //metodo constructor        ~Nodo(){ cout << "Me destruiiii. "<< this->valor << endl;} //metodo destructor        int getValor();
        void setValor(int valor);
        Nodo* getSig();
        void setSig(Nodo *sig);
};
Nodo::Nodo(int valor, Nodo *sig){
    this->valor = valor;
    this->sig = sig;
}
int Nodo::getValor(){
    return this->valor;
}
void Nodo::setValor(int valor){
    this->valor = valor;
}
Nodo* Nodo::getSig(){
    return this->sig;
}
void Nodo::setSig(Nodo *sig){
    this->sig = sig;
}
class Lista{
    private:
        Nodo *cab = NULL;
    public:
        Lista(){
            this->cab = NULL;
        }
        ~Lista() {}
        void insertar(Nodo *item);
        void verLista();
};
void Lista::insertar(Nodo *item){
    item->setSig(this->cab);
    this->cab = item;
}
void Lista::verLista(){
    Nodo *temp = this->cab;
    while (temp != NULL){
        cout << "[" << temp->getValor() << "]->";
        temp = temp->getSig();
    }
    cout << "NULL" << endl;
}
int main(){
    Nodo item = Nodo(3,NULL);
    //cout << "["<< item.getValor() << "]->" << item.getSig() << endl;    Nodo *item2 = new Nodo(8, NULL);
    //cout << "[" << item2->getValor() << "]->" << item2->getSig() << endl;    Nodo *item3 = new Nodo(16,NULL);
    Lista listaX = Lista();
    listaX.insertar(&item);
    listaX.insertar(item2);
    listaX.insertar(item3);
    listaX.verLista();
    return 0;
}