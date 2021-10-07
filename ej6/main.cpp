#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class pila
{
    private:
        int *datos;
        int tope;
        int pilavacia();
    public:
        pila();
        ~pila();
        void agregar(int);
        int quitar();
        void recorrer();
};
pila::pila()//constructor inicalizador
{
    this->datos=new int();
    this->tope=-1;
}
pila::~pila()
{
    delete[]datos;
    cout<<"me borraran"<<endl;
}
int pila::pilavacia()
{
    if(this->tope<0)
        return 1;
    else
        return 0;
}
void pila::agregar(int valor)
{
    this->tope++;
    this->datos[tope]=valor;
}
int pila::quitar()
{
    if(!this->pilavacia())
    {
        return this->datos[tope--];
    }
    else
        cout<<"pilavacia\n"<<endl;
        return 0;
}
void pila::recorrer()
{
    struct pila *pilaaux;
    pilaaux=new pila();
    while(!this->pilavacia())
    {
        int valor=this->quitar();
        cout<<valor<<"\n"<<endl;
        pilaaux->agregar(valor);
    }
    while(!pilaaux->pilavacia())
    {
        this->agregar(pilaaux->quitar());
    }
}
int main()
{
    pila *p=new pila();
    p->agregar(5);
    p->agregar(4);
    p->agregar(10);
    p->agregar(1);
    p->agregar(20);
    p->agregar(8);
    p->recorrer();
    delete p;
    system("PAUSE");
    return 0;
}

