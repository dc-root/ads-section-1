#include <stdlib.h>
#include <stdio.h>

#if defined(_WIN32)
#define Clear() system("cls")
#else
#define Clear() printf("\e[1;1H\e[2J")
#endif


#define NAME_SIZE 100

typedef struct
{
    unsigned short Day;
    unsigned short Month;
} Date;

typedef struct
{
    char Name[NAME_SIZE];
    Date Birthday;
    unsigned long PhoneNumber;
} Contact;

int main() 
{
    int Option;
    FILE* File;
    Contact User[2];

    Retry:

    printf("Menu\n\n");
    printf("1. Cadastrar usuario.\n");
    printf("2. Verificar ultimo usuario.\n\n");
    printf("Escolha: ");
    scanf("%d", &Option);

    Clear();

    switch(Option)
    {
        case 1:
            goto Register;
            break;
        case 2:
            goto Check;
            break;
        default:
            goto Retry;
            break;
    }

    Register:

    Clear();

    File = fopen("Info.bin", "wb");
    
    if (File == NULL) 
    {
        perror("Falha ao ler arquivo.");
        exit(1);
    }

    printf("Digite o nome: ");
    scanf("%s", User[1].Name);

    printf("Informe a data de nascimento (dia/mes): ");
    scanf("%hd/%hd", &User[1].Birthday.Day, &User[1].Birthday.Month);

    printf("Digite o numero de telefone: ");
    scanf("%d%*c", &User[1].PhoneNumber);

    // 2

    printf("\nDigite o nome: ");
    scanf("%s", User[2].Name);

    printf("Informe a data de nascimento (dia/mes): ");
    scanf("%hd/%hd", &User[2].Birthday.Day, &User[2].Birthday.Month);

    printf("Digite o numero de telefone: ");
    scanf("%d", &User[2].PhoneNumber);

    fwrite(&User, sizeof(Contact), 2, File);

    goto Close;

    Check:

    Clear();

    File = fopen("Info.bin", "rb");

    fseek(File, 0, SEEK_SET); //rewind(File);
    fread(&User, sizeof(Contact), 2, File);

    printf("\n%s", User[1].Name);
    printf("\n%hd/%hd", User[1].Birthday.Day, User[1].Birthday.Month);
    printf("\n%d\n\n", User[1].PhoneNumber);

    fseek(File, sizeof(User) * 1, SEEK_SET);

    printf("\n%s", User[2].Name);
    printf("\n%hd/%hd", User[2].Birthday.Day, User[2].Birthday.Month);
    printf("\n%d\n\n", User[2].PhoneNumber);

    goto Close;

    Close:

    fclose(File);

    getchar();
    getchar();

    return 0;
}