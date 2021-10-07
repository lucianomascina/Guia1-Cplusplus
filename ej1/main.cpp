#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class computadora
{
    private:
        int disco;
        double memoria;
        char *procesador;
    public:
        computadora(double,char *,int);
        ~computadora();
        void set_memoria(double);
        double get_memoria();
        void set_procesador(char*);
        char* get_procesador();
        void set_disco(int);
        int get_disco();
        void mostrar_datos();
};

computadora::computadora(double mem,char* proc,int disco)
{
    this->memoria=mem;
    this->procesador=new char(sizeof(proc));
    strcpy(this->procesador,proc);
    this->disco=disco;
}
computadora::~computadora()
{
    delete[]this->procesador;
}
void computadora::set_memoria(double mem)
{
    this->memoria=mem;
}
double computadora::get_memoria()
{
    return this->memoria;
}
void computadora::set_procesador(char *n)
{
    strcpy(this->procesador,n);
}
char* computadora::get_procesador()
{
    return this->procesador;
}
void computadora::set_disco(int d)
{
    this->disco=d;
}
int computadora::get_disco()
{
    return this->disco;
}
void computadora::mostrar_datos()
{
    cout<<"memoria:"<<memoria<<endl;
    cout<<"procesador:"<<procesador<<endl;
    cout<<"disco:"<<disco<<endl;
}

int main()
{
    cout << "Hello world!" << endl;
    computadora *c=new computadora(16,(char*)"intel",500);
    c->mostrar_datos();
    system("PAUSE");
    return 0;
}
