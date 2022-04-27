#include <stdio.h>
#include <string.h>

#define SIZE_STRING 50

int main() {
    char string[SIZE_STRING];
    int countChar=0;
    
    printf("Digite um palavra: ");
    fgets(string, SIZE_STRING, stdin);
    
    printf("%s", string);
    size_t t_string = strlen(string) -1;
    for (int i=0; i < t_string; i++) {
        if (string[i] == string[t_string-i-1])
            countChar++;
        else
            break;
    }
     
    if (countChar == t_string)
        printf("\n\tA string e um palindrome!");
    else
        printf("\n\tA string NAO e um palindrome!");

     return 0;
}