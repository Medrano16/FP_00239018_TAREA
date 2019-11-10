#include  <iostream > 
#include  <stdlib.h >
usando el  espacio de nombres  estándar ;
int  main () {
    int n, i = 0 , j, factorial;
    cout << " Ingrese el numero: " ;
    cin >> n;
    mientras que (i <= n) {
        si (i == 0 ) {
            factorial = 1 ; }
            más {
                factorial = 1 ;
                j = 1 ;
                mientras que (j <= i) {
                    factorial * = j;
                    j ++; }}
                    cout << " Factorial de " << i << " : " << factorial << endl;
                    i ++; }
                    devuelve  0 ;
                }