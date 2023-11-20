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
#include <string.h>

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
            addContact(contacts, &count);
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
            listContacts(contacts, count);
            break;
        case 5:
            printf("Digite o ID do contato que deseja localizar: ");
            scanf("%d", &id);
            findContact(contacts, count, id);
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


void addContact(struct Contact *contacts, int *count) {
    printf("Digite o nome do contato: ");
    scanf("%s", contacts[*count].name);
    printf("Digite o número de telefone: ");
    scanf("%s", contacts[*count].cellphone);
    printf("Digite o tipo de contato (pessoal/trabalho): ");
    scanf("%s", contacts[*count].type);

    /// ATRIBUINDO ID

    contacts[*count].id = *count + 1;

    (*count)++;
    printf("O contato foi adicionado com sucesso!");
};


void findContact(struct Contact *contacts, int count, int id) {
    int i, found = 0;

    for (i=0; i < count; i++) {
        if (contacts[i].id == id) {
            printf("ID\tName\tCellphone\tType\n");
            printf("%d\t%s\t%s\n", contacts[i].id, contacts[i].name, contacts[i].cellphone, contacts[i].type);
            found = 1;
            break;
        }
    }
}

void listContacts(struct Contact *contacts, int count) {
   if (count == 0) {
       printf("No contacts available.\n");
   } else {
       printf("ID\tName\tCellphone\tType\n");
       for (int i = 0; i < count; i++) {
           printf("%d\t%s\t%s\t%s\n", contacts[i].id, contacts[i].name, contacts[i].cellphone, contacts[i].type);
       }
   }
}
