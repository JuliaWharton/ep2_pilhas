#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <malloc.h>
#include <string.h>

// elemento da pilha
typedef struct estrutura {
	struct estrutura *prox;
       	int tipo; // 1=char e 2=float
       	union {
              	char simbolo;
              	float valor;
       	};
} NO;

bool testeFloat(char ch){
    if(ch>=0 || ch<=9) return true;

    return false;
}

void push(char ch, NO* topo){

    NO* novo = (NO*)malloc(sizeof(NO));
    if(testeFloat(ch) == false){
        novo->tipo = 1;
        novo->simbolo = ch;
    }
    else{
        novo->tipo = 2;
        novo->valor = ch-48;
    }
    novo->prox = topo;
    topo = novo;

}

char popChar(NO* topo){
    NO* aux;
    char ch;
    if(!topo) return -1;
    aux = topo;
    ch = aux->simbolo;
    topo = topo->prox;
    free(aux);
    return ch;
}

float popFloat(NO* topo){
    NO* aux;
    float ch;
    if(!topo) return -1;
    aux = topo;
    ch = aux->valor;
    topo = topo->prox;
    free(aux);
    return ch;
}

float calcular(char* expressao, int* codigo);

float calcular(char* expressao, int* codigo){

	float resp = 0.0;
	*codigo = 999;




	return resp;
}

int main() {


	char exp[200];
	strcpy(exp, "((1+1)*2)");

	int codigo;

	float resp = calcular(exp,&codigo);


}

