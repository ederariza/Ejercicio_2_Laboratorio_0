
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
