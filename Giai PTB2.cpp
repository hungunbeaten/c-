#include<stdio.h>
#include<math.h>
void nghiem(float a, float b, float c, float d, float *x, float *x1, float *x2)
{
	if(a=b=c=0) return 3;
	d=b*b-4*a*c;
	if(d<0) return 0;
	if(d=0) *x=(-b)/(2*a) return 1;
	if(d>0) *x1=(-b+sqrt(d))/(2*a) *x2=(-b-sqrt(d))/(2*a) return 2;
}
main()
{
	float a, b, c;
	printf("Nhap a b c :");
	scanf("%f %f %f\n", &a &b &c);
	nghiem(a,b,c,d,*x,*x1,*x2);
	if(nghiem=3) printf("Phuong trinh vo so nghiem");
	if(nghiem=0) printf("Phuong trinh vo nghiem");
	if(nghiem=1) printf("Phuong trinh co nghiem kep x1=x2=%f", &x);
	if(nghiem=2) printf("Phuong trinh co 2 nghiem phan biet x1=%f x2=%f", &x1, &x2);
}

	
