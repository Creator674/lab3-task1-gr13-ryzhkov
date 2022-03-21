/* main.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#pragma warning(disable : 4996)


int* input(int* num)
{
  int i,n;
  printf("Input number of elements: ");
  scanf("%d",&n);
  int * a = malloc(n*sizeof(int));

  for(i = 0; i < n; i++)
  {
    printf("a[%d] = ",i);
    scanf("%d", &a[i]);
  }
  *num = n;

  return a;
}

bool IsPowerOfFive(int number)
{
    for (int x = 1; x <= number; x *= 5)
    {
        if (x == number) return true;
    }

    return false;
}

void output(int *a, int n)
{
  int i;

  for(i = 0; i < n; i++)
  {
    if(IsPowerOfFive(a[i])){
      printf("a[%d] = %d\n",i, a[i]);
    }
  }
}

int main() {
  int n;
  int * a = input(&n);

  printf("Printed mass:\n");
  output(a,n);

  free(a);

  return 0;
}