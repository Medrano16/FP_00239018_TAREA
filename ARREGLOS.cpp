#include <iostream >
uisng namespace  std ;

int  main () {

    int cantNumeros = 5 ;
    int numeros [cantNumeros]; // de int numeros [5] cambia a int numeros [cantNumeros]

    para ( int i = 0 ; i <cantNumeros; i ++) {
        // numeros [i] = i + 1;
        std :: cout << " Ingrese el dato " << (i + 1 );
        std :: cin >> numeros [i];
    }
    // Mostrar lo que tiene el arreglo
    std :: cout << " Los numeros ingresados ​​son: " << std :: endl;

    para ( int i = 0 ; i <cantNumeros; i ++) {
std :: cout << numeros [i] << std :: endl;
    }
devuelve  0 ;
}