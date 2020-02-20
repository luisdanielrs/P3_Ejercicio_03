#ifndef PENTAGONO_H
#define PENTAGONO_H
#include <iostream>
#include<stdlib.h>
#include <math.h>
#include "punto.h"
using namespace std;

 class Pentagono{
     public:
            Punto p1;
            Punto p2;
            Punto p3;
            Punto p4;
            Punto p5;

    Pentagono(){
    cout << "Se ha creado un Pentagono" << endl;
}




void punto1(float x, float y){
    p1.asignarX( x);
    p1.asignarY( y);
}

void punto2(float x, float y){
    p2.asignarX( x);
    p2.asignarY( y);
}
void punto3(float x, float y){
    p3.asignarX( x);
    p3.asignarY( y);
}
void punto4(float x, float y){
    p4.asignarX( x);
    p4.asignarY( y);
}
void punto5(float x, float y){
    p5.asignarX( x);
    p5.asignarY( y);
}



float Area(){
float valor = abs(1/2 * ( ((p1.obtenerX()*p2.obtenerY()) + (p2.obtenerX()*p3.obtenerY()) + (p3.obtenerX()*p4.obtenerY()) + (p4.obtenerX()*p5.obtenerY()) + (p4.obtenerX()*p1.obtenerY()) ) - ( (p1.obtenerX()*p5.obtenerY()) -(p5.obtenerX()*p4.obtenerY()) - (p4.obtenerX()*p3.obtenerY()) - (p3.obtenerX()*p2.obtenerY()) - (p2.obtenerX()*p1.obtenerY()) ) ));

return valor;
}


};

#endif // PENTAGONO_H
