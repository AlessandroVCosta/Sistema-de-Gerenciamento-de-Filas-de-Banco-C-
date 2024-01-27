#include "fila.h"
#include <stdlib.h>

void inicializarFila(fila *filaBanco){
	filaBanco->inicio = filaBanco->fim = NULL;
}

void enfileirarCliente(fila* filaBanco, cliente novoCliente) {
    NoFila* novoNo = (NoFila*)malloc(sizeof(NoFila));
    novoNo->dados = novoCliente;
    novoNo->prox = NULL;

    if (filaBanco->fim == NULL) {
        filaBanco->inicio = filaBanco->fim = novoNo;
    } else {
        // Inserir na fila com base na prioridade
        switch (novoCliente.prioridade) {
            case 1:
                novoNo->prox = filaBanco->inicio;
                filaBanco->inicio = novoNo;
                break;
            case 2:
                filaBanco->fim->prox = novoNo;
                filaBanco->fim = novoNo;
                break;
            default:
                // Valor invalido ou se tivessemos outro factor para a prioridade
                free(novoNo); // Libera o nó se a prioridade não for reconhecida
                printf("Prioridade inválida. Cliente não enfileirado.\n");
        }
    }
}



cliente desenfileirarCliente(fila* filaBanco) {
    if (filaBanco->inicio == NULL) {
        cliente filaVazia; // Pode retornar um valor especial para indicar fila vazia
        filaVazia.senha = -1;//um valor invalido 
        return filaVazia;
    }

    NoFila* aux = filaBanco->inicio;
    cliente clienteDesenfileirado = aux->dados;

    filaBanco->inicio = aux->prox;

    if (filaBanco->inicio == NULL) {
        filaBanco->fim = NULL;
    }

    free(aux);

    return clienteDesenfileirado;
}
