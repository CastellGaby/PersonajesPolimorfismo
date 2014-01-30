
class Personaje(){
public

    int hp;
    int punto_de_ataque;
    string tipo;

    Personaje();

    void imprimir();
    void recibirAtaque(int ataque);
    void activarPoder();
    void atacar(Personaje*objetivo);

    Personaje::Personaje(int hp, int puntos_de_ataque, strig tipo){
        this->hp=hp;
        this->puntos_de_ataque=puntos_de_ataque;
        this->tipo=tipo;

    }
}

int main(){
    Personaje Personaje(100,10,"Personaje");
    Personaje.imprimir();
    return 0;
}
