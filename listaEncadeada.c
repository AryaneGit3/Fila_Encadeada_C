#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char processo[40];
	int tempo;
}tdado;

typedef struct no{
	tdado dado;
	struct no *prox;
}tno; // um no armazena um dado e seu ponteiro 

typedef struct{
	tno *ini,*fim; // ponteiros de inicio e fim (Sentinelas - sem dados, apenas marcadores)
	int tamanho;
}tfila;
//--------------------------
void inicializa(tfila *f){
	f->ini = NULL; 
	f->fim = NULL;
	f->tamanho=0;
	//
}
//--------------------------
int enqueue(tfila *f, tdado x){ // inserindo 
	tno *novo = malloc(sizeof(tno));// alocando area de memoria do tamanho de um tno; 
	novo->dado = x;
	novo->prox = NULL; // esta definindo que o elemento de tras de x eh null
		if(f->ini==NULL) // vazia
			f->ini = novo; 
		else
			f->fim->prox = novo; // encadeando novo nó, ligação do proximo como fim
			
			f->fim = novo;
			f->tamanho++;
			return 1;		
}
//---------------------------
tdado dequeue(tfila *f){
	
}
//------------------------------
int isEmpty(tfila f){

}
//--------------------------
void mostra(tfila f){
	while(f.ini!=NULL){ // verifica se a fila nao esta vazia 
		printf("%s: %d | ->", f.ini->dado.processo,
							  f.ini->dado.tempo);
		f.ini = f.ini->prox; // deslocamento 					  
	} // fim while 
printf("\n");
} 
//----------------------------
int menu(){
	int op;
	printf("*** Estrutura de Dados I - Fila Encadeada ****\n");
	printf("1-Enqueue (Inserir)\n");
	printf("2-Dequeue (Remover)\n");
	printf("3-Inicio e Fim\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------
int main(){
	tfila f1;
	tdado x;
	int op;
	inicializa(&f1);
	do{
		mostra(f1);
		op = menu();
		switch(op){
			case 1: printf("Entre com o processo e tempo:");
					fflush(stdin);
					gets(x.processo);
					scanf("%d",&x.tempo);
					enqueue(&f1, x); // inserindo 
					// inserir
			break;
			case 2: if(!isEmpty(f1)) {
				      // ?
				     }// fim if vazio
				     else
				       printf("Process Queue empty :(\n");
				break;
			case 3:
			 break;	
			case 0: printf("Saindo .... ;)\n");	    
		}// fim switch
	    getch(); // system("pause");
	    system("cls");
	}while(op!=0);

	return 0;
}
