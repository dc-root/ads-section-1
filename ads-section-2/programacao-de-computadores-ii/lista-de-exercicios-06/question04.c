#include <stdlib.h>
#include <stdio.h>

#if defined(_WIN32)
#define Clear() system("cls")
#else
#define Clear() printf("\e[1;1H\e[2J")
#endif

#define SIZE_NAME 100
#define QNT_REGISTER 3

// Definido estrutura de dados
typedef struct {
  unsigned int Day;
  unsigned int Month;
} tDate;

typedef struct {
  unsigned short id;
  char name[SIZE_NAME];
  tDate birthDay;
  unsigned long phoneNumber;
} tContacBook;

FILE *File;
tContacBook RegisterUser;

// Declarando Funções
void registerContact();
void RemoveContact();
// int searchContactByName();

int main() {
  unsigned short Option;
  
  printf("1. Registrar contato\n2. remover contato\n3. pesquisar contato pelo nome\n4. listar contato pela inicial\n5. mostrar os aniversariantes do mês\n\n\tOpçao: [ ]\b\b");
  scanf("%d%*c", &Option);

    // opções
    switch (Option) {
      case 1:
      // cadastrar contato
        registerContact();
        break;
      case 2:
        RemoveContact();
        break;
    }

  return 0;
}

// Definindo funções
void registerContact() {
  // Clear();

 // Lendo os dados do registro
  printf("Nome do contato: ");
  fgets(RegisterUser.name, SIZE_NAME, stdin);

  printf("Data de nascimento(dia/mes): ");
  scanf("%hd/%hd", &RegisterUser.birthDay.Day, &RegisterUser.birthDay.Month);

  printf("Telefone: ");
  scanf("%d%*c", &RegisterUser.phoneNumber);
  
  //  Gravando o registro no arquivo binario
  if ((File = fopen("file.bin", "ab+")) == NULL) {
    perror("Falha ao abrir o arquivo!!");
    exit(1);
  };

  fwrite(&RegisterUser, 1, sizeof(tContacBook), File);
  fclose(File);
}

void RemoveContact() {
  if ((File = fopen("file.bin", "rb")) == NULL) {
    perror("Erro ao abrir o arquivo!!");
    exit(1);
  }

  fseek(File, 0, SEEK_SET);

  printf(fread(&RegisterUser, sizeof(tContacBook), 1, File));
}