#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE_STRING 50

char string[SIZE_STRING], aux;

int main() {
     printf("Digite um palavra: ");
     fgets(string, SIZE_STRING, stdin);

     void stringCoden(int size);

     size_t t_string = strlen(string) -1;

     for (int i=0; i<t_string; i++) {
          stringCoden(t_string);
          printf("\n");
     }

     return 0;
}

void stringCoden(int size) {
     for (int i=0; i<size; i++) {
          if(i == 0)
               aux = string[i];

          string[i] = string[i+1];
          string[size] = aux;
          printf("%c", string[i]);
     }
}