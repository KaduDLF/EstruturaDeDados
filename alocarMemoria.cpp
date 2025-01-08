#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int *i, *p;
    char *c;

    i = (int*) malloc(5 * sizeof(int)); // vai alocar 20 bytes, ou seja 5 posições pois 5* 4 = 20
    c = (char*) malloc(200); //aloca 200 espaços pois cada char ocupa apenas 1 byte
    p = (int*) calloc (5, 4/* sizeof(int) */);
    p = (int*) realloc (p, 40); // aumentando tamanho de p para 10;
    int *o = (int*) realloc (NULL, 20); // alocando memoria com a função realloc
    cout << *i << endl;
    // o = (int*) realloc (o, 0); libera memoria, semelhante a função free()
    i[1] = 20;

    cout << i[1];

    if( i == NULL){
        cout << "Erro memoria insuficiente!" << endl;
        exit(1);
    }

    // for( int j = 0; j < 5; j++){
    //     cout << "digite o valor de p[" << j+1 << "]" << endl;
    //     cin >> i[j];


    // }

    free(i); // liberando a memoria alocada!
}