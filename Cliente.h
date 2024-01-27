#ifndef CLIENTE_H
#define CLIENTE_H
 
typedef struct Cliente {

	int senha;
	int prioridade; // 1 para prioritário, 2 para normal 
	int operacao; //vai ter um contador para as opercações estarem no relatório
	
} cliente;  //estrutura
cliente criarCliente(int prioridade);

//cliente entrarNaFila(int prioridade);

#endif // CLIENTE_H
