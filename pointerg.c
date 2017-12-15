#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
char ch[10] = "Ranganadh\0";
int *p;
p = (int *)&ch;
printf("%x,%x\n",ch,p);
int j = 0;
while(*(char *)p != '\0'/* j != 9*/)
{
printf("%c %x\n",*p,p);
p = (char *)p + 1;
j++;

}


}