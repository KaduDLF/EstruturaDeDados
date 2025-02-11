#define MAX 100

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2;
};

struct lista{
    int qtd;
    struct aluno dados[MAX];

};

typedef struct lista listaAlunos;

listaAlunos* criarLista(void){
    listaAlunos *pl;

    pl = (listaAlunos*) malloc (sizeof(struct lista));
    if(pl != NULL)
        pl ->qtd=0; // operador seta seria o pl.qtd;
    return pl;
}

void liberaLista(listaAlunos *pl){
    free(pl);
}

int tamanhoDaLista(listaAlunos *pl){
    if(pl == NULL){
        return -1;
    }else{
        return pl->qtd;
    }

}

bool listaCheia(listaAlunos *pl){
    if(pl == NULL){
        return -1;
    }else{
        return(pl->qtd == MAX);
    }
}
