#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct queue
{
int m;
struct queue *next;

};
struct queue *front,*rear;
struct queue * create()
{
return (struct queue *)malloc(sizeof(struct queue));
}
int push(int a)
{
if (rear == NULL)
{
rear = create();
rear->m = a;
rear->next = NULL;
front = rear;
}
else
{
struct queue *temp;
temp =create();
temp->m = a;
temp->next = front; 
front = temp;
}

}

int print()
{
struct queue *temp;

temp = front;

while(1)
{
printf("%d\n",temp->m);
temp = temp->next;
if ((temp == rear)&& temp)
{
	printf("%d\n",temp->m);
	break;
}

}

}
int pop()
{
	
if (front)
{
	temp = front;
	
	
}


}

int main()
{
push(1);
push(10);
push(11);
push(12);
push(13);
print();

}