/*Desarrolle  un programa en C++ que le pida al usuario nueve numero enteros y los almacenaen una matriz de 3x3 
asi mismo que calcule la sumade los numeros de cada fila y mostrar el  numero de fila con mayor suma, */



#include <iostream>
using namespace std;

int main() {
    // Se declaran e inicializamos las variables en este caso la martriz es de 3 x3 (3 filas 3 columnas)
    int matriz[3][3];
    int suma_fila[3] = {0, 0, 0}; // Inicializa todas las sumas en 0
    int mayor_suma = 0;
    int fila_mayor_suma = 0;

    // Pedir al usuario que ingrese los 9 numeros enteros y este caso le pedimos que sea separado por espacios
    cout << "Ingrese 9 numeros enteros separados por un espacio: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
            suma_fila[i] += matriz[i][j];
        }
        // En este  paso verificamos el valor de la fila con la mayor suma
        if (suma_fila[i] > mayor_suma) {
            mayor_suma = suma_fila[i];
            fila_mayor_suma = i;
        }
    }

    // Mostramos la matriz
    cout << "\nLa matriz ingresada es:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
              cout << matriz[i][j] << " ";

        }
        cout << endl;
    }

     

    // Imprime la fila con la mayor suma
    cout << "\nLa fila con la mayor suma es la fila " << fila_mayor_suma+1 << endl;

   return 0;
}