#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct a
{
	char *s;
	int length;
	
}

main()
{
	
	struct a *b;
	b = malloc(sizeof(struct a));
	
	b->s = malloc(sizeof(char)*10);
	b->length = 10;
	
	snprintf(b->s,b->length,"ranganadh");
	printf("%s\n",b->s);
	
	
	
}