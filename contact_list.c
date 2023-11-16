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

        printf("\nAGENDA DE CONTATOS TELEFôNICOS\n");
        printf("[1] - Adicionar um contato\n");
        printf("[2] - Deletar um contato\n");
        printf("[3] - Editar um contato\n");
        printf("[4] - Listar todos os contatos\n");
        printf("[5] - Localizar um contato\n");
        printf("[6] - Sair\n");
        printf("\nDigite aqui sua escolha: ");
        scanf("%d", &pick);
}