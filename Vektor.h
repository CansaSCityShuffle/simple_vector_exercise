//vektor.h
#include <stdio.h>

using namespace std;

class Vektor {

    private:

        double x;
        double y;
        double z;

    public:	

    void ausgabe();

    void skalarMultiplikation(double skalar) ;

    double skalarProdukt(Vektor v2) ;

    short isInQuadrant() ;

    void vektorAddition(Vektor v2, Vektor &result);

    Vektor* vektorKreuzprodukt(Vektor &v2);


    void set_x(double x){ }
    void set_y(double y){ }
    void set_z(double z){ }
    //getter
    double get_x(){ }
    double get_y(){ }
    double get_z(){ }
};
