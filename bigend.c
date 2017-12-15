#include<stdio.h>

int main()
{
  int a = 1;
  char *b;

  b = (char *)&a;
  if (*b)
    printf("Little Endian\n");
  else
    printf("Big Endian\n");
}