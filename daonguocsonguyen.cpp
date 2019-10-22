
#include <stdio.h>
 
int main(){
    int n, sm;
    scanf("%d", &n);
    int sd = 0;
    while(n > 0){
        sm = n % 10;
        sd = sd * 10 + sm;
        n = n / 10;
    }
    printf("%d", sd);
}
