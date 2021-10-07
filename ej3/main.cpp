#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class rectangulo
{
    private:
        double base;
        double altura;
    public:
        rectangulo(double,double);
        ~rectangulo();
        void set_base(double);
        double get_base();
        void set_altura(double);
        double get_altura();
        double area();
        double perimetro();
};

rectangulo::rectangulo(double bas,double alt)
{
    this->base=bas;
    this->altura=alt;
}
rectangulo::~rectangulo()
{

}
void rectangulo::set_base(double bas)
{
    this->base=bas;
}
double rectangulo::get_base()
{
    return this->base;
}
void rectangulo::set_altura(double alt)
{
    this->altura=alt;
}
double rectangulo::get_altura()
{
    return this->altura;
}
double rectangulo::perimetro()
{
    double perim;
    perim=(this->altura*2)+(this->base*2);
    return perim;
}
double rectangulo::area()
{
    double area;
    area=this->altura*this->base;
    return area;
}
class triangulo
{
    private:
        double catmenor;
        double catmayor;
        double hipotenusa;

    public:
        triangulo(double,double,double);
        ~triangulo();
        void set_catmenor(double);
        double get_catmenor();
        void set_catmayor(double);
        double get_catmayor();
        void set_hipotenusa(double);
        double get_hipotenusa();
        double area();
        double perimetro();
};

triangulo::triangulo(double cmenor,double cmayor,double hipo)
{
    this->catmenor=cmenor;
    this->catmayor=cmayor;
    this->hipotenusa=hipo;
}
triangulo::~triangulo()
{
}
void triangulo::set_catmenor(double cmenor)
{
    this->catmenor=cmenor;
}
double triangulo::get_catmenor()
{
    return this->catmenor;
}
void triangulo::set_catmayor(double cmayor)
{
    this->catmayor=cmayor;
}
double triangulo::get_catmayor()
{
    return this->catmayor;
}
void triangulo::set_hipotenusa(double hipo)
{
    this->hipotenusa=hipo;
}
double triangulo::get_hipotenusa()
{
    return this->hipotenusa;
}
double triangulo::perimetro()
{
    double perim;
    perim=this->catmayor+this->catmenor+this->hipotenusa;
    return perim;
}
double triangulo::area()
{
    double area;
    area=(this->catmenor*this->catmayor)/2;
    return area;
}

int main()
{
    double x,y,h;

    cout<<"ingrese base del rectangulo: "<<endl;
    cin>>x;
    cout<<"ingrese altura del rectangulo: "<<endl;
    cin>>y;
    rectangulo *a=new rectangulo(x,y);
    cout<<"el perimetro es: "<<a->perimetro()<<endl;
    cout<<"el area es: "<<a->area()<<endl;
    cout<<"\ningrese cateto menor del triangulo: "<<endl;
    cin>>x;
    cout<<"ingrese cateto mayor del triangulo: "<<endl;
    cin>>y;
    cout<<"ingrese hipotenusa del triangulo: "<<endl;
    cin>>h;
    triangulo *b=new triangulo(x,y,h);
    cout<<"el perimetro es: "<<b->perimetro()<<endl;
    cout<<"el area es: "<<b->area()<<endl;
    system("PAUSE");
    return 0;
}
