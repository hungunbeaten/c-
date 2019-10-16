#include<stdio.h>
#include<math.h>
int gptb2(float a, float b, float c, float *x, float *x1, float *x2);
int main()
{
float a, b, c;
float x1, x2, x;
int sn;
	printf("Nhap a b c:\n");
    scanf("%f %f %f", &a, &b, &c);
	sn=gptb2(a,b,c,&x,&x1,&x2);
	switch(sn)
	{
		case 3: printf("Phuong trinh vo so nghiem"); break;
		case 0: printf("Phuong trinh vo nghiem"); break;
		case 1: printf("Phuong trinh co mot nghiem x=%0.3f", x); break;
		case 2: printf("Phuong trinh co 2 nghiem \nx1=%0.3f \nx2=%0.3f", x1, x2); break;
	}
}
int gptb2(float a, float b, float c, float *x, float *x1, float *x2)
{
	float dt=b*b-4*a*c;
	if(a==0 && b==0 && c==0) return 3;
	else if(a==0 && b!=0 && c!=0) 
	{
		*x=(-c) / b;
		return 1;
	}
	else if(dt<0) return 0;
	else if(dt>=0)
	{
        dt = sqrt(dt);
        *x1 = (-b + dt) / (2*a);
        *x2 = (-b - dt) / (2*a);
        return 2;
    }
}

