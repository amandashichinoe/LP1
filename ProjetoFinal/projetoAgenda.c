#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int codigo;
	char nome[50];
	char endereco[50];
	char email[50];
	char telefone[15];
  	
} Contato;

void flush_in(); 
int menu();
void cadastrar(Contato *contato, int *qnt);
void imprimirContato(Contato *contato, int i);
void pesquisarEmail(Contato *contato, int qnt);
int compararEmail(const void *a, const void *b);
void pesquisarNome(Contato *contato, int qnt);
int compararNome(const void * a, const void * b);
void alterarDados(Contato *ptr, int id);
void alterarContato(Contato *contato, int qnt);

int main(){
	Contato *contato;
	contato = (Contato *) malloc(sizeof(Contato)); 
	char opcao; 
	int primeiro = 1;
	int qnt = 0;

	printf("\"AGENDA DE CONTATOS\"\n"
			"Desenvolvido por Amanda e Carlos Wagner\n\n");

	while(opcao !='6'){
		opcao = menu();

		switch(opcao){
			case '1':
				if(primeiro == 1){
					contato = (Contato *) realloc(contato, 1 * sizeof(Contato));
					cadastrar(contato, &qnt);
					primeiro = 0;
				}else{
					contato = (Contato *) realloc(contato, (qnt+1) *sizeof(Contato));
					cadastrar(contato, &qnt);
				}
            break;
            
			case '2':
				if(primeiro==1){
					printf("Lista de contatos vazia.\n");
				}else{
					pesquisarEmail(contato, qnt);					
				}
            break;

			case '3':
				if(primeiro==1){
					printf("Lista de contatos vazia.\n");					
				}else{
					pesquisarNome(contato, qnt);					
				}

            break;
                
			case '4':
				if(primeiro==1){
					printf("Lista de contatos vazia.\n");
				}else{
					alterarContato(contato, qnt);
				}
            break;
                
			case '5':
            	printf("Para a funcao excluir, necessario informar o codigo do contato.\n"
                       "Use a consulta para obter o codigo do contato.\n\n"
                       "Insira o codigo do contato que deseja apagar ou digite -1 para voltar ao menu: ");
				int id;
				scanf("%i", &id);
				if(id == -1) break;
				int i, k;
				for(i = 0; i < qnt; i++){
                    if(id == contato[i].codigo){
                        for (k = i;k < qnt - 1; ++k){
                            contato[k] = contato[k + 1];
                        }
                        qnt--;
                        contato = (Contato *) realloc(contato, (qnt) * sizeof(Contato));
                    }
                }
                printf("Contato apagado.\n");           
			break;
            
			case '6':
                printf("Finalizando a aplicacao.\n");
            break;
			
			default:
				printf("Digite uma opcao valida!!!\n");
				flush_in(); // o flush in vai impedir de entrar num loop infinito           
		}
		flush_in();
		system("pause"); // pausar a tela
		system("cls"); // limpar a tela
	}
	
	free(contato);
	return 0;

}

void flush_in(){
	int ch;
	while((ch = fgetc(stdin)) != EOF && ch != '\n'){}
}

int menu(){

	printf("\nDigite a opcao desejada: \n\n"
	"1. Cadastrar Contatos\n"
	"2. Pesquisar contato pelo email\n"
	"3. Pesquisar contato pelo nome\n"
	"4. Alterar dados de um contato\n"
	"5. Excluir um Contato pelo codigo\n"
	"6. Sair\n");
	char opcao;
	scanf("%c", &opcao);
	return opcao;
}

void cadastrar(Contato *contato, int *qnt){

	printf("\nInsira os dados do contato\n");

	printf("Nome: ");
  	flush_in();
  	gets(contato[*qnt].nome);
	
	printf("Endereco: ");
  	fgets(contato[*qnt].endereco, 50, stdin);

 	printf("Email: ");
  	scanf("%s", contato[*qnt].email);
    flush_in();

	printf("Telefone: "); //0=48     9=57 na Tabela ASCII
	fgets(contato[*qnt].telefone, 15, stdin); 
  	printf("Contato cadastrado com sucesso.\n");
	contato[*qnt].codigo = *qnt;
  	(*qnt)++;
}

void imprimirContato(Contato *contato, int i){
	printf("---------------------\n");
	printf("Codigo: %i\n", contato[i].codigo);
  	printf("Nome: %s\n", contato[i].nome);
  	printf("Telefone: %s", contato[i].telefone);
	printf("Endereco: %s", contato[i].endereco);
	printf("E-mail: %s\n", contato[i].email);
	printf("---------------------\n");
}

void pesquisarEmail(Contato *contato, int qnt){
	Contato  pesquisarEmail, *pesquisa;
	printf("Insira o email que deseja pesquisar: ");
	scanf("%s", pesquisarEmail.email);
	pesquisa = (Contato *) bsearch (&pesquisarEmail, contato, qnt+1, sizeof (Contato), compararEmail);
	if(pesquisa != NULL){
    	printf("Contato encontrado:");
    	imprimirContato(pesquisa, 0);
	}else{
    	printf("Contato nao encontrado");		
	}
}

void pesquisarNome(Contato *contato, int qnt){
  	Contato  pesquisarNome, *pesquisa;
  	printf("Insira o nome do contato que deseja pesquisar: ");
	flush_in();
	gets(pesquisarNome.nome);
	pesquisa = (Contato *) bsearch (&pesquisarNome, contato, qnt+1, sizeof (Contato), compararNome); 
  	if(pesquisa != NULL){
    	printf("Contato encontrado:");
    	imprimirContato(pesquisa, 0);
  	}else{
	  printf("Contato nao encontrado");		
  	}
}

int compararEmail(const void * a, const void * b){
	Contato *ptr1 = (Contato*) a;
	Contato *ptr2 = (Contato*) b;
	
	return strcmp((*ptr1).email, (*ptr2).email);
}

int compararNome(const void * a, const void * b){
	Contato *ptr1 = (Contato*) a;
	Contato *ptr2 = (Contato*) b;
	
	return strcmp((*ptr1).nome, (*ptr2).nome);
}

void alterarContato(Contato *contato, int qnt){
	printf("Para a funcao alterar, necessario informar o codigo do contato.\n"
            "Use a consulta para saber o codigo do contato.\n\n"
            "Insira o codigo do contato que deseja alterar ou digite -1 para voltar ao menu: \n");
	int id;
	scanf("%i", &id);
 	if(id == -1) return;
	
	printf("Escolha o campo a ser alterado: \n1 - Nome \n2 - Email \n3 - Endereco \n4 - Telefone \n5 - Cancelar alteracao\n");
	
  	int option;
	scanf("%i", &option);
	if(option == 1){
    	printf("Novo nome: ");
    	flush_in();
	  	gets(contato[id].nome);
	}
	else if(option == 2){
    	printf("Novo email: ");
    	scanf("%s", &contato[id].email);
	}
	else if(option == 3){
    	printf("Novo endereco: ");
    	getchar();
	  	fgets(contato[id].endereco, 50, stdin);
	}
	else if(option == 4){
    	printf("Novo telefone: ");
    	scanf("%s", &contato[id].telefone);
	}
  	else if(option == 5){
	  	printf("Operacao cancelada.\n");
		return;
	}
  	else {
	    printf("Opcao invalida!\n");
	    return;
	}		
    printf("Alteracao realizada com sucesso.\n");
}
