#include  <string.h >
#include <iostream >
usando el  espacio de nombres  estándar ;
 
int  main () {
int correo;
int contrasena;
int senal;
int m;

cout << " Ingrese el su correo electrónico: " << endl;
 cin >> correo;
cout << " Ingrese su contrasena: " << endl;
 cin >> contrasena;

 interruptor (m) {
     caso  1 :
     cout << " Ingrese el correo electrónico correcto " ;
     romper ;

     caso  2 :
     cout << " La contrasena es invalida " << endl;
     romper ;

     caso  3 :
     cout << " La contrasena y el correo son invalidos, por favor ingrese las credenciales correctas " << endl;
     romper ;
 }

 interruptor (m) {
     caso  4 :
     cout << " La conexión a internet es débil " << endl;
     romper ;

     caso  5 :
     cout << " Lo sentimos, pero su cuenta no existe " << endl;
     romper ;
 }

devuelve  0 ;
}