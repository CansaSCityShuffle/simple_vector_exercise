#include <iostream>
#include <math.h>
#include "Vektor.h"




///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
int main() {
	double x,y,z;
	int i=0;//MENÜ ZÄHLER
	Vektor a;
	Vektor b;
	Vektor result;
	double t;//Skalar_t




	do{
		
		
		switch (i){
			case 0://menü AUSWAHL
			
				printf("-----------------------------------------------------\n");
				printf("1-Fuer die Skalarmultiplikation 1 eintippen:\n");
				printf("2-Fuer das SkalarProdukt 2 eintippen:\n");
				printf("3-Fuer die Vektormultiplikatoin 3 eintippen:\n");
				printf("4-ZUM BEENDEN 4 EINTIPPEN:\n");
				printf("Ihre Eingabe: ");
				scanf("%i", &i);
				
				if( i>= 5 ){
					i=0;
				}
				
				break;
			
			case 1://Skalarmultiplikatoin
			
				//EINLESEN: vektor_a
				printf("vektor_a eingeben(x/y/z):");
				scanf("%lf %lf %lf", &x, &y, &z);
				
				a.set_x(x);
				a.set_y(y);
				a.set_z(z);
				
				
				//EINLESEN: Skalar_vektor_t
				printf("Multiplikator Skalar_t eingeben:");
				scanf("%lf", &t);
				
				a.skalarMultiplikation(t);
				
				printf("/////////////////////////ERGEBNIS///////////////////////\n");
				printf("--->Quadrant: %i\n", a.isInQuadrant() );
				printf("--->");
				a.ausgabe();
				printf("/////////////////////////ERGEBNIS///////////////////////\n");
				
				i=0;
				
				break;
			
			case 2://Skalarprudukt
				
				//EINLESEN: vektor_a
				printf("vektor_a eingeben(x/y/z):");
				scanf("%lf %lf %lf", &x, &y, &z);
				
				a.set_x(x);
				a.set_y(y);
				a.set_z(z);
			
				//EINLESEN: vektor_b
				printf("vektor_b eingeben(x/y/z):");
				scanf("%lf %lf %lf", &x, &y, &z);
				b.set_x(x);
				b.set_y(y);
				b.set_z(z);
				
				printf("/////////////////////////ERGEBNIS///////////////////////\n");
				printf("--->skalarProdukt: %lf\n", a.skalarProdukt(b));
				printf("/////////////////////////ERGEBNIS///////////////////////\n");
				i=0;
				
				break;
				
			case 3://VektorMultiplikatoin
				
				//EINLESEN: vektor_a
				printf("vektor_a eingeben(x/y/z):");
				scanf("%lf %lf %lf", &x, &y, &z);
				
				a.set_x(x);
				a.set_y(y);
				a.set_z(z);
			
				//EINLESEN: vektor_b
				printf("vektor_b eingeben(x/y/z):");
				scanf("%lf %lf %lf", &x, &y, &z);
				b.set_x(x);
				b.set_y(y);
				b.set_z(z);
				
				a.vektorAddition(b, result);
				printf("/////////////////////////ERGEBNIS///////////////////////\n");
				printf("--->Quadrant: %i\n", result.isInQuadrant() );
				printf("--->");
				result.ausgabe();
				printf("/////////////////////////ERGEBNIS///////////////////////\n");				

				i=0;
				
				break;
		
					
				/// Beenden mit AUSWAHL 4
		}
		
		 
	}while ( i != 4);
	
	printf("\nDANKE!!! das Sie dieses Programm genutzt haben.");
		
	return 0;
}
