#include<stdio.h>
#include<math.h>
float ham(float x, int n)
{
	float t=1;;
	int a;
	if(n%2==0) a=1;
	else a=-1;
	int i;
	for(i=1 ; i <= 2*n+1 ; i++)
	t=t*x/i;
	return t*a;
}
float sin(float x) {
	
}
// Sin(x)=(-1)^n.x^(2n+1)/(2n+1)!
main()
{
int n=0;
float x, s=0;
printf("Nhap x:\n");
scanf("%f", &x);
while(fabs(ham(x, n))>0.00000001)
{
s=s+ham(x, n);
n++;
}
printf("Gia tri sin(x)=%0.8f",s);
}
