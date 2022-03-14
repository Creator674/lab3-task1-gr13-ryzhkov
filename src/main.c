/* hello.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable : 4996)


int main (void)
{
  char letter;
  char sentence[200];
	printf ("Write down the letter: ");
  scanf("%c", &letter);
  printf("Sentence :");
  scanf("%[^\n]%*c", sentence);

  printf("ke");
  printf("%s", sentence);

  return 0;
}
