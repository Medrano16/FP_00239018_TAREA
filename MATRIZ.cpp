#include <iostream >
usando el  espacio de nombres  estándar ;

int  main () {
    int n;
    int m;
    int matriz;

    cout << " Ingrese un numero: " << endl;
    cin >> n;
    cout << " Ingrese un numero: " << endl;
    cin >> m;

    for ( int i = 0 ; i <n; i ++) { // controla filas
        for ( int j = 0 ; j <m; j ++) { // controla columnas
            matriz [i] [j];
        }
    }
para ( int i = 0 ; i <n; i ++) {
    para ( int j = 0 ; j <m; j ++) {
        cout << matriz [i] [j] << " | " ;
    }
    cout << endl;
}
devuelve  0 ;
}