#include<iostream>
using namespace std;
int  i, j, k, N;

char letra;
int main(void){

    cout<< "Ingrese el numero del tamano del triangulo mariposa: ";
    cin>> N;

    for(i=1; i<=N; i++){
        letra = 65;

        for(j=1; j<=i; j++){
            cout<< letra;
            letra++;
        }

        for(j=0; j<((N-i)*2-1); j++){
            cout<<" ";
        }

        for(j=1; j<=i; j++){
            letra--;

            if(letra != (65+N-1)){
                cout<<letra;
            }
        }

        cout<< endl;
    }

    for(i=1; i<N; i++){
        letra = 65;

        for(j=i; j<N; j++){
            cout<< letra;
            letra++;
        }

        for(j=0; j<=k; j++){
            cout<< " ";
        }

        k+=2;

        for(j=i; j<N; j++){
            letra--;
            cout<< letra;
        }

        cout<< endl;

    }
return 0;
}
