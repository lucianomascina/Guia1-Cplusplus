#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#define tope 10
using namespace std;

class materia
{
    private:
        char *nombre;
        int notas[tope];
    public:
        materia(char *);
        ~materia();
        void set_nombre(char *);
        char * get_nombre();
        void promedio();
        void agregarnotas();
};
materia::materia(char *nom)
{
    this->nombre=new char(sizeof(nom));
    strcpy(this->nombre,nom);

}
materia::~materia()
{
    delete[]this->nombre;
}
void materia::agregarnotas()
{
    int i;
    for(i=0;i<tope;i++)
    {
        cout<<"ingrese nota: "<<endl;
        cin>>this->notas[i];
    }
}

void materia::promedio()
{
    int i;
    float acum;
    for(i=0;i<tope;i++)
    {
        acum+=this->notas[i];
    }
    cout<<"el promedio es: "<<acum/tope<<endl;
}
int main()
{
    materia *m=new materia("datos 2");
    m->agregarnotas();
    m->promedio();
    system("PAUSE");
    return 0;
}
