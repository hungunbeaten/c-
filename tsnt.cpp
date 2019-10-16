#include<stdio.h>
void tsnt(int n) 
{
	if (n <= 1) return;
	for(int i = 2; i <= n; i++) 
	{
		if (n%i == 0) 
		{
			printf("%d", i);
			if(n > i) printf(" * ");
			return tsnt(n/i);
		}
	}
}
main() 
{
	int a;
	printf("TSNT:");
	scanf("%d", &a);
	tsnt(a);
}

