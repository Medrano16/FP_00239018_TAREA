#include <iostream>
usando el  espacio de nombres  estándar ;


int  main () {
    
    int cantNumeros = 0 ;
    int promedio = 0 ;
    int suma = 0 ;

    cout << " Ingrese la cantidad de numeros: " ;
    cin >> cantNumeros;

    int numeros [cantNumeros];

    para ( int i = 0 ; i <cantNumeros; i ++) {
        cout << " Ingrese el dato " << (i + 1 ) << endl;
        cin >> numeros [i];
        suma = suma + numeros [i];
    }

    promedio = suma / cantNumeros;
    cout << " El promedio de los números es: " << promedio << endl;
    
    devuelve  0 ;

}