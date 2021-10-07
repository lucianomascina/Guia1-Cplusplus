#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class calculadora
{
    private:
        double num1;
        double num2;
    public:
        calculadora(double,double);
        ~calculadora();
        void set_num1(double);
        double get_num1();
        void set_num2(double);
        double get_num2();
        void sumar();
        void restar();
        void dividir();
        void multiplicar();
};

calculadora::calculadora(double n1,double n2)
{
    this->num1=n1;
    this->num2=n2;
}
calculadora::~calculadora()
{
}
void calculadora::set_num1(double n1)
{
    this->num1=n1;
}
double calculadora::get_num1()
{
    return this->num1;
}
void calculadora::set_num2(double n2)
{
    this->num2=n2;
}
double calculadora::get_num2()
{
    return this->num2;
}
void calculadora::sumar()
{
    cout<<"la suma es: "<<this->num1+this->num2<<endl;
}
void calculadora::restar()
{
    cout<<"la resta es: "<<this->num1-this->num2<<endl;
}
void calculadora::dividir()
{
    cout<<"la division es: "<<this->num1/this->num2<<endl;
}
void calculadora::multiplicar()
{
    cout<<"la multiplicacion es: "<<this->num1*this->num2<<endl;
}
int main()
{
    double x,y;

    cout<<"ingrese un numero: "<<endl;
    cin>>x;
    cout<<"ingrese otro numero: "<<endl;
    cin>>y;
    calculadora *c=new calculadora(x,y);
    c->sumar();
    c->restar();
    c->dividir();
    c->multiplicar();
    system("PAUSE");
    return 0;
}
