#include  <iostream >
usando el  espacio de nombres  estándar ;
int  main () {
int extNum, sumDigit = 0 , numEntero;
cout << " Ingrese un numero entero: " ;
cin >> numEntero;
while (numEntero! = 0 ) {
extNum = numEntero% 10 ;
numEntero / = 10 ;
sumDigit + = extNum;
}
cout << " La suma del digito es: " << sumDigit << endl;
resturn  0 ;
}