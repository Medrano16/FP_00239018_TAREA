# include  < iostream >
# include  < cstdlib >
usando el  espacio de nombres  estándar ;

flotante num, cont = 1 , i, promedio, dato;

int  main ()
{
    cout << " Ingrese el numero de datos: " ;
    cin >> num;
    cont = 0 ;

    para (i = 1 ; i <= num; i = i + 1 ) {
    cout << " Ingrese un dato: " ;
    cin >> dato;
    cont = cont + dato;
    }  
promedio = cont / num;
cout << " El promedio es: " << promedio << endl;
sistema ( " pausa " );

}