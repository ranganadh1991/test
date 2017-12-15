#include<stdio.h>
#include<stdlib.h>
#include<string.h>

print(int *a)
{
	int i = 0;
		for(i = 0;i<5;i++)
		printf("%d  ",*(a +i));
	
	printf("\n");
}
main()
{
	
	int a[5] = {1,4,2,3,6};
	
	int i,j,temp;
	
	for(i = 0;i<5;i++)
		for(j = 0;j<4;j++) 
			if (a[j] < a[j + 1]) {
				temp = a[j+1];
				a[j+ 1] = a[j];
				a[j] = temp;
				print(&a[0]);
				
			}

}