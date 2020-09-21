
/*
#include <iostream>

using namespace std;

int main(){

    int valor_ICA = 0;
    int promedio_ICA = 0;
    int numero_muestras;

    cout << " Ingrese el numero de muestras del ICA: ";
    cin >> numero_muestras ;

    for(int i=1;i<=numero_muestras;i++){


        cout << " Ingrese el valor del ICA: ";
        cin >> valor_ICA ;
        promedio_ICA += valor_ICA ;

    if(promedio_ICA > 150 &  promedio_ICA <= 200){
        cout << " Rojo" <<endl;
    }

    else if(promedio_ICA > 100 &  promedio_ICA <= 150){
        cout << " Naranja" <<endl;
    }

    else if(promedio_ICA > 50 &  promedio_ICA <= 100){
        cout << " Amarillo" <<endl;
    }

    else {
        cout << " Verde" <<endl;
    }

    }

    return  0;

    ---------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

int main(){

    char letra = 65;
    int i, j, N;
    cout<< "Ingrese la cantidad de lineas: ";
    cin>> N;

    for(j=1;  j<=N;  j++){

        cout<< letra << endl;
        letra++;
        }

    return  0;
}
}


---------------------------------------------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter Largest Alphabet Value(e.g C=3):";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=65;j<64+(2*n);j++)
        {
            if(j>=(64+n)+i)
                cout<<(char)((64+n)-(j%(64+n)));
            else if(j<=(64+n)-i)
                cout<<(char)j;
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/

#include <iostream>

using namespace std;

int main(){

    char letra;
    int i, j, k;
    int N = 7;

    k = -N - 3;
    for(j=1;  j<=N;  j++){

        letra=65;

        for(i=1;  i<=j;  i++){
            cout<< letra;
             letra++;
        }

        for(i= k;  i<j;  i++){
            cout<< " ";
        }
        k +=3;

        for(i=1;  i<=j;  i++){
            letra--;

            if (letra != 65 + N -1){
                 cout <<letra;}
        }

     cout<< endl;
    }

    k=1;
    for(j=-N;  j<-1;  j++){

        for(i=j;  i<-1;  i++){
            cout<< letra;
             letra++;
        }

        for(i=1;  i<=k;  i++){
            cout<< " ";
        }
        k +=2;

        for(i=j;  i<-1;  i++){
            letra--;
            cout<< letra;
        }

     cout<< endl;
     letra=65;
    }

    return  0;
}
