/*
1. Elabore, en una hoja de papel, el diagrama de flujo para el programa que produce la siguiente
salida en la terminal:

A                                          A
A B                                  B A
A B C                           C B A
A B C D                   D C B A
A B C D E            E D C B A
A B C D E F     F E D C B A
A B C D E F G F E D C B A
A B C D E F    F E D C B A
A B C D E          E D C B A
A B C D                D C B A
A B C                       C B A
A B                             B A
A                                   A
 */

#include<iostream>
using namespace std;

int main(void){

    //Declarando variables
    int N, k = 0;
    char letra;

    //Capturando datos
    cout << "Ingrese el numero de dimension del triangulo mariposa: ";
    cin >> N;

    //Ciclo for para formar la parte superior
    for (int i = 1; i <= N; i++){
        letra = 65;

        //Imprime las letras mayusculas en orden del abecedario sepradas por un espacio: A + " " + B ...
        for (int j = 1; j <= i; j++){
            cout << letra << " ";
            letra++;
        }

        //Imprime dos espacios: "  "
        for (int j = 0; j < ((N-i)*2-1); j++){
            cout << "  ";
        }

        //Imprime las letras mayusculas del abecedario en orden inverso sepradas por un espacio: ... B + " " + A
        for (int j = 1; j <= i; j++){
            letra--;

            //Imprime los caracteres del abecedario en froma inversa excepto el:  65 + N - 1 (codigo ACSII)
            if (letra != (65+N-1)){
                cout << letra << " ";
            }
        }

        cout << endl;
    }

    //Ciclo for para formar la parte inferior
    for (int i = 1; i < N; i++){
        letra = 65;

        //Imprime el triangulo del abecedario en  orden invertido y con una linea menos
        for (int j = i; j < N; j++){
            cout << letra << " ";
            letra++;
        }

        //Imprime dos espacios en blanco
        for (int j = 0; j <= k; j++){
            cout << "  ";
        }

        k += 2;

        //Imprime el triangulo del abecedario en  orden invertido y con una linea menos
        for (int j = i; j < N; j++){
            letra--;
            cout << letra << " ";
        }

        cout << endl;

    }

return 0;
}
