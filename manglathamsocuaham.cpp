#include<stdio.h>
#define KT 20
#include<conio.h>
void nhap_mang(int a[], int KT)
{
	int i;
	for(i=0 ; i<KT ; i++)
		printf("Nhap cac phan tu cua mang:\n");
		printf("a[%d]= ", i);
		scanf("%d", a[i]);
	return;
}
int tong_mang(const int *a, int KT) 
{
	int i, s;
	for(s=0, i=0 ; i<KT ; i++)
	s+=a[i];
	return s;
}
main()
{
	nhap_mang(a,7);
	sum=tong_mang(a,7);
	printf("Tong mang la: %d", sum);
}
		

