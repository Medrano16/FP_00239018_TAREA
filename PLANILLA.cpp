#include <stdio.h >
#include <conio.h >
#include  <iostream >
usando el  espacio de nombres  estándar ;

clase  planilla_mensual {
público:
vacío  sueldo_base ( vacío );
nulo  descuentos ( nulo );
vacío  sueldo_neto ( vacío );
flotar sb;
int dep;
flotador s_n;
}; // fin clase


int  main () {
planilla_mensual depar;

depar. departamento ();

planilla_mensual suel_b;

suel_b. sueldo_base ();

planilla_mensual inf;

inf. informe ();



getch ();
} // aleta principal


nulo  planilla_mensual :: sueldo_base ( nulo ) {

cout << " Ingrese su sueldo base " << endl;
cin >> sueldo_base;

} // fin sueldo_base

nulo  planilla_mensual :: descuentos ( nulo ) {
sb = s_n;
flotante renta = 0 ;
flotador afp = 0 ;
flotante isss = 0 ;

renta = sb * renta;
afp = sb * afp;
isss = sb * isss;
s_n = sb-renta-afp-isss;

} // fin descuentos

nulo  planilla_mensual :: sueldo_neto ( nulo ) {
volver s_n;

} // fin sueldo_neto

}