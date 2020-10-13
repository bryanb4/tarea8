#include <iostream>
#include "videojuego.h"

using namespace std;

int main(){
    
    Personaje p02 = Personaje("bryan","troll",80.0,15);
    
    Personaje p03;
    p03.setNombre("oregel");
    p03.setTipo(troll);
    p03.setFuerza(60.2);
    p03.setSalud(20)

    Videojuego vj;
    vj.argregarPersonaje(p02);
    vj.agregarPersonaje(p03);
    return 0;
   
}
