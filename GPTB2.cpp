#include<stdio.h>
#include<math.h>
int GPTB2(float a, float b, float c,float &x1, float &x2)
{
    float dt = b*b - 4*a*c;
    if(dt<0){
        x1=x2=0.0;
        return 0;
    }
    else if(dt==0){
        x1 = x2 = -b/(2*a);
        return 1;
    }
    else{
        dt = sqrt(dt);
        x1 = (-b + dt) / (2*a);
        x2 = (-b - dt) / (2*a);
        return 2;
    }
}
int main(){
    float a,b,c;
    float x1,x2;
    do{
        printf("Nhap a (a!=0): ");
        scanf("%f",&a);
        printf("Nhap b: ");
        scanf("%f",&b);
        printf("Nhap c: ");
        scanf("%f",&c);
    }
    while(!a);
    int GPT = GPTB2(a,b,c,x1,x2);
        if(GPT == 0) {
        printf("Phuong trinh da cho vo nghiem");
    }
    else if(GPT == 1){
        printf("Phuong trinh da cho co nghiem kep x=%.2f",x1);
    }
    else{
        printf("Phuong trinh da cho co hai nghiem phan biet\nx1=%.2f \nx2=%.2f",x1,x2);
    }
}
