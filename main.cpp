#include <iostream>

using namespace std;

class A
{public:
    //si una del padre es virtual todas las hijas
    //virtual toma en cuenta solo el tipo de apuntador depende de lo que esta apuntando, revisa si los hijos tienen ensa funcion sino lama a la padre
    virtual void funcion(){
        cout<<"Funcion de A"<<endl;
    }

};

class B: public A
{public:
    void funcion(){
        cout<<"Funcion de B"<<endl;
    }

};

class C: public B
{public:
    //virtual solo sirve si tiene hijos
    void funcion(){
        cout<<"Funcion de C"<<endl;
    }

};

class Personaje
{public:
    virtual void funcion(){
        cout<<"Funcion de B"<<endl;
    }

    string Curar(){
        return "Curandero";
    }
    //int Curar(){
    //    return 0;
    //}
    //ESte es como un instance of a pie
    int Arquero(){
        return 20;
    }
    virtual int ataque=0;
    virtual void activarPoder()=0;
    virtual void Personaje::atacar(Personaje*objetivo){
        objetivo->recibirAtaque(puntos_de_ataque);
    }

};

int main()
{

    A*a_heap= new A();
    a_heap->funcion();

    A a_stack;
    a_stack.funcion();
    B b;
    b.funcion();
    cout << "Hello world!" << endl;

    MagoOscuro mago(80,20);
    mago.atacar(&Curador);
    mago.atacar(&Tanque);
    mago.activarPoder();

    Personaje*personajes[5];
    personajes[0]=new Arquero();
    personajes[1]=new Guerrero();
    personajes[2]=new Guerrero();
    personajes[3]=new Curandero();
    personajes[4]=new Arquero();

    for(int i=0;1<5;i++){
        cout<<personajes[i]->ataque()<<endl;

        if(personajes[i]->getTipo()=="Curandero")
            cout<<((Curandero*)personajes[i])->curar()<<endl;
    }


    return 0;
}
