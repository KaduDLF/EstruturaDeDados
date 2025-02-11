#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "listaSquencial.hpp"


using namespace std;

int main(){
    listaAlunos *li;
    li = criarLista();

    tamanhoDaLista(li);

    bool cheia = listaCheia(li);
    if(cheia){
        cout << "essa lista esta cheia" << endl;
    }

    liberaLista(li);

}