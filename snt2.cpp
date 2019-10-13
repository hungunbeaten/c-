#include<stdio.h>
#include<math.h>

bool isPrime(int n) 
{
	if (n < 2) return false;
	if(n < 4) return true;
	// float sqrtN = sqrt(n);
	for(int i = 2; i <= sqrt(n) ; i++) {
	    if(n%i == 0) return false;
	}
	return true;
}
main()
{
	int n, i;
	printf("Nhap n:");
	scanf("%d", &n);
//	for(i = 2; i <= sqrt(n); i++) {
//	    if(n%i == 0) break;
//	}
//	if(n>=2 && i > sqrt(n)) {
//		printf("%d la so nguyen to", n);
//	}
//	else {
//		printf("%d khong la so nguyen to", n);
//	}
   if(isPrime(n)) {
		printf("%d la so nguyen to", n);
   }
   else {
		printf("%d khong la so nguyen to", n);
   }
	
}
