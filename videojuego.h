#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include "personaje.h"

class Videojuego
{
    Personaje arreglo[5];
    size_t cont;
public:
    Videojuego();
    void agregarPersonaje(const Personaje &p);
    void mostrar();
    
};
Videojuego::Videojuego()
{
    cont = 0;

}
void Videojuego::agregarPersonaje(const Personaje &p)
{
    if (cont < 5){
        arreglo[cont] = p;
        cont++;
    }
    else{
        cout << "arreglo lleno" << endl;
    }        
}

void Videojuego::mostrar()
{
    for(size_t i=0; i < cont; i++){
        Personaje &p = arreglo[i];
        cout << "Nombre del computador: "<<p.getNombre() << endl;
        cout << "Sistema Operativo: "<<p.getOperativo() << endl;
        cout << "Gb de almacenamiento: "<<p.getAlmacenamiento() << endl;
        cout << "Ram: "<<p.getRam() << endl;
        cout << endl;

    }
}

#endif