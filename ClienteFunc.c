#include "cliente.h"

static int gerarSenha() {
    static int contador = 1;
    return contador++;
}

cliente criarCliente(int prioridade) {
    cliente novoCliente;
    novoCliente.senha = gerarSenha();
    novoCliente.prioridade = prioridade;
    novoCliente.operacao = 0;
    return novoCliente;
}
