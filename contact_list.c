// REQUISITOS

// i) incluir um novo contato; 
// ii) excluir um contato existente; 
// iii) alterar um contato existente; 
// iv) listar todos os contatos cadastrados; e 
// v) localizar um contato.

// STRUCT DO CONTATO

// i) id
// ii) nome
// iii) telefone
// iv) tipo de contato


#include <stdio.h>

struct Contact {
    int id;
    char name[20];
    char cellphone[20];
    char type[20];
};

void addContact();
void deleteContact();
void editContact();
void listContacts();
void findContact();


int main() {

    struct Contact contacts[100]; // maximo de 100 contatos
    
    int pick, id;
    int count = 0;

    do {

        printf("\nAGENDA DE CONTATOS TELEFôNICOS\n");
        printf("[1] - Adicionar um contato\n");
        printf("[2] - Deletar um contato\n");
        printf("[3] - Editar um contato\n");
        printf("[4] - Listar todos os contatos\n");
        printf("[5] - Localizar um contato\n");
        printf("[6] - Sair\n");
        printf("\nDigite aqui sua escolha: ");
        scanf("%d", &pick);
    switch (pick) {
        case 1:
            addContact();
            break;
        case 2:
            printf("Digite o ID do contato que deseja deletar: ");
            scanf("%d", &id);
            deleteContact();
            break;
        case 3:
            printf("Digite o ID do contato que deseja editar: ");
            scanf("%d", &id);
            editContact();
            break;
        case 4:
            listContacts();
            break;
        case 5:
            printf("Digite o ID do contato que deseja localizar: ");
            scanf("%d", &id);
            findContact();
            break;
        case 6:
            printf("Saindo da agenda de contatos..");
            break;
        default:
            printf("Opção invalida. Por favor selecione uma opção válida.");

    }
 } while (pick != 6);

 return 0;
}
