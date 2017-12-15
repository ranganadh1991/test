#include<stdio.h>
#include<stdlib.h>
#include<string.h>
static x = 10;

struct s{
int a;
struct s *next;
struct s *prev;

}

main()
{
struct s *head,*temp,*s1;
int i = 0;
head = (struct s *)malloc(sizeof(struct s));
head->a = 1;
head->prev = NULL;
head->next = NULL;
s1 = head;
for (i =0;i<5;i++){
temp = (struct s *)malloc(sizeof(struct s)); 
temp->a = i+1;
s1->next = temp;
temp->prev = s1;
temp->next = NULL;
s1 = temp;
temp = temp->next;


}
s1 = head;
while(s1)
{
printf("%d\n",s1->a);
s1 = s1->next;

}

}