#include <iostream >
usando el  espacio de nombres  estándar ;

int  main () {
    int m;

    cout << " Eliga una opcion: " ;
    cout << " 1 Desayuno \ n " ;
    cout << " 2 Almuerzo \ n " ;
    cout << " 3 Cena \ n " ;
    cout << " 4 Postres \ n " ;
    cout << " 5 Antojos \ n " ;
    cout << " 6 Salir \ n \ n " ;
    cin >> m;

    interruptor (m) {
caso  1 :
cout << " Desayuno tipico " << endl;
cout << " Omelette " << endl;
cout << " Desayuno light " << endl;
romper ;

caso  2 :
cout << " Almuerzo carnivoro " << endl;
cout << " Almuerzo light " << endl;
cout << " Almuerzo vegetariano " << endl;
romper ;

caso  3 :
cout << " Cena de Huevo y Frijoles " << endl;
cout << " Cena light " << endl;
cout << " Cena de Sopas " << endl;
romper ;

caso  4 :
cout << " Postre Tres Leches " << endl;
cout << " Cheesecake " << endl;
cout << " Quesadilla y cafe " << endl;
romper ;

caso  5 :
cout << " Yuca Frita " << endl;
cout << " Empanada " << endl;
cout << " Nuegados " << endl;
romper ;

caso  6 :
cout << " Adios " << endl;
romper ;
predeterminado : cout << " El valor ingresado no esta en el menú " << endl;
}

devuelve  0 ;

}