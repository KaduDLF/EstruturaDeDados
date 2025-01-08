#include <iostream>
#include <cstdio>

using namespace std;


int main(){

    void *pg;
    int *p;
    int a = 10;
    
    pg = &a;
    p = &a;
    cout << *p;

    cout << endl << *(int*)pg; // fazendo o casting para acessar o conteudo do ponteiro generico

}