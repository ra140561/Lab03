#include <stdio.h> // Biblioteca para realizar funções padrões de entrada/saída.
#include <string.h> // Biblioteca para comparação das strings.
  
int main()
{
   char a[100], b[100];
  
  printf("Enter the first string\n");
  scanf("%[^\n]s", a);
  getchar();  // O getchar pega o último caractere após o \n (CR) para que o mesmo não caia na segunda string.
  //gets(a);  Função gets caiu em desuso e tem problemas com overflow, portanto substituí por uma que tem o desempenho melhor.
 
  printf("Enter the second string\n");
  scanf("%[^\n]s", b);
  getchar();  // O getchar pega o último caractere após o \n (CR) para que o mesmo não caia na segunda string.
  //gets(b);
 
   if (strcmp(a,b) == 0)	  // Função strcmp compara os valores para verificar se os mesmos são iguais.
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");
 
   return 0;
}
