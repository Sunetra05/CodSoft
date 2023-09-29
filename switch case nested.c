#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	switch(n>0)
	{
				case 1:
				printf("The number is positive");
				break;
				case 0:
				switch(n<0)
			{
				case 1:
				printf("The number is negetive");
				break;
				case 0:
				printf("The number is equal to zero");
				break;
			}
			break;
	}
	return 0;
}
