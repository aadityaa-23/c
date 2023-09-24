#include <stdio.h>
#include <stdlib.h>
int *memory;
int main()
{
	int c,n=0,t=0;
	main:
	printf("1.malloc()\n2.calloc()\n3.realloc()\nenter the choice: ");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("enter the number of elements: ");
			scanf("%d",&n);
			memory = (int*)malloc(n * sizeof(int));
			if (memory == NULL) 
			{
				printf("memory allocation failed.\n");
				exit(0);
			}
			else 
			{
				printf("memory allocated successfully.\n--------------------\nelement\t| address\n");
				printf("--------------------\n");
				for (int i = 0; i < n; i++) 
				{
					memory[i] = i+1;
					printf("%-5d\t| %-10d\n",memory[i],&memory[i]);
				}
				printf("--------------------\n");
				free(memory);
				printf("memory freed successfully.\n\n");
			}
			break;
		case 2:
			printf("enter the number of elements: ");
			scanf("%d",&n);
			memory = (int*)calloc(n , sizeof(int));
			if (memory == NULL) 
			{
				printf("memory allocation failed.\n");
				exit(0);
			}
			else 
			{
				printf("memory allocated successfully.\n--------------------\nelement\t| address\n");
				printf("--------------------\n");
				for (int i = 0; i < n; i++) 
				{
					memory[i] = i+1;
					printf("%-5d\t| %-10d\n",memory[i],&memory[i]);
				}
				printf("--------------------\n");
				free(memory);
				printf("memory freed successfully.\n\n");
			}
			break;
		case 3:
			printf("enter the number of elements: ");
			scanf("%d",&n);
			memory = (int*)calloc(n , sizeof(int));
			if (memory == NULL) 
			{
				printf("memory allocation failed.\n");
				exit(0);
			}
			else 
			{
				printf("memory allocated successfully.\n--------------------\nelement\t| address\n");
				printf("--------------------\n");
				for (int i = 0; i < n; i++) 
				{
					memory[i] = i+1;
					printf("%-5d\t| %-10d\n",memory[i],&memory[i]);
				}
				printf("--------------------\n");
			}
			t = n;
			printf("enter the new number of elements[in addition to %d]: ",n);
			scanf("%d",&n);
			memory = (int*)realloc(memory,n * sizeof(int));
			if (memory == NULL) 
			{
				printf("memory re-allocation failed.\n ");
				exit(0);
			}
			else 
			{
				for (int i = t; i < n; i++) 
				{
					memory[i] = i+1;
				}
				printf("memory re-allocated successfully.\n--------------------\nelement\t| address\n");
				printf("--------------------\n");
				for (int i = 0; i < n; i++) 
				{
					printf("%-5d\t| %-10d\n",memory[i],&memory[i]);
				}
				printf("--------------------\n");
				free(memory);
				printf("memory freed successfully.\n\n");
			}
			break;
			default:
				goto main;
	}
	goto main;
	return 0;
}