//Vector.cpp
#include <stdio.h>
#include <cmath>
#include "Vektor.h"

using namespace std;


double x,y,z;

void Vektor::ausgabe(){
    printf("(%lf/%lf/%lf)\n", this->x, this->y, this->z);	
}

void Vektor::skalarMultiplikation(double skalar) {
    this->x *= skalar;
    this->y *= skalar;
    this->z *= skalar;
}

double Vektor::skalarProdukt(Vektor v2) {
    return abs( this->x * v2.x + this->y * v2.y + this->z * v2.z );
} 	

short Vektor::isInQuadrant() {

    if( (this->x) > 0 && (this->y) > 0 ) return 1;//Quatrant 1

    else if( (this->x) < 0 && (this->y) > 0 ) return 2;//Quatrant 2

    else if( (this->x) < 0 && (this->y) < 0 ) return 3;//Quatrant 3

    else if( (this->x) > 0 && (this->y) < 0 ) return 4;//Quatrant 4

    else return 0;
}
///1.2_________________________________________		
void Vektor::vektorAddition(Vektor v2, Vektor &result){
    (result.x) = (this->x) + (v2.x);
    (result.y) = (this->y) + (v2.y);
    (result.z) = (this->z) + (v2.z);
}
///1.3__________________________________________	

Vektor* Vektor::vektorKreuzprodukt(Vektor &v2){
    Vektor b;

    b.x = ((this->y) * (v2.z)) + ((this->z) * (v2.y));
    b.y = ((this->z) * (v2.x)) + ((this->x) * (v2.z));
    b.z = ((this->x) * (v2.y)) + ((this->y) * (v2.x));
}
