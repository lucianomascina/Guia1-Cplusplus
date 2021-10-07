#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class pila
{
    private:
        struct nodo
        {
            int dato;
            struct nodo *anterior;
        };
        nodo *raiz;
    public:
        pila();
        ~pila();
        void agregar(int);
        int quitar();
        void recorrer();
};
pila::pila()//constructor inicalizador
{
    this->raiz=NULL;
}
pila::~pila()
{
   while(this->raiz->anterior!=NULL)
   {
       nodo *aux=this->raiz;
       this->raiz=this->raiz->anterior;
       delete []aux;
   }
   delete []this->raiz;
}

void pila::agregar(int valor)
{
   if(this->raiz==NULL)
   {
       this->raiz=new nodo();
       this->raiz->dato=valor;
       this->raiz->anterior=NULL;
   }
   else
   {
       nodo *aux=new nodo();
       aux->anterior=this->raiz;
       aux->dato=valor;
       this->raiz=aux;
   }
}
int pila::quitar()
{
    if(this->raiz!=NULL)
    {
        int valor=this->raiz->dato;
        if(this->raiz->anterior!=NULL)
        {
            nodo *aux=new nodo();
            this->raiz=this->raiz->anterior;
            delete[]aux;
        }
        else
        {
            delete []this->raiz;
            this->raiz=NULL;
        }
        return valor;
    }
    else
        cout<<"pilavacia\n"<<endl;
        return 0;
}
void pila::recorrer()
{




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
