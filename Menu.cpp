#include<stdio.h>
#include<conio.h>
void kiemtrasonguyen();
void timUCvaBClonnhat();
void tinhtienquankaraoke();
void tinhtiendien();
void doitien();
void laisuat();
void vaytien();
void ttsv();
void game();
void tinhphanso();
void menu()
{
	int n;
	char cn;
	printf("Danh sach chuc nang:\n");
    printf("1. Kiem tra so nguyen\n");
    printf("2. Tim uoc so chung va boi so chung cua 2 so\n");
    printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
    printf("4. Tinh tien dien\n");
    printf("5. Chuc nang doi tien\n");
    printf("6. Xay dung chuc nang tinh lai suat vay ngan hang lai suat tra gop\n");
    printf("7. Xay dung chuon trinh vay tien mua xe\n");
    printf("8. Sap xep thong tin sinh vien\n");
    printf("9. Xay dung game FPOLY-LOTT(2/15)\n");
    printf("10. Xay dung chuong trinh tinh toan phan so\n");
    printf("Moi ban chon chuc nang: ");
    scanf("%c", &cn);
    switch(cn)
    {
	    case '1': kiemtrasonguyen();
	        break;
	    case '2': timUCvaBClonnhat();
	    	break;
	    case '3': tinhtienquankaraoke();
	        break;
	    case '4': tinhtiendien();
	    	break;
	    case '5': doitien();
	    	break;
	    case '6': laisuat();
	    	break;
	    case '7': vaytien();
	    	break;
	    case '8': ttsv();
	    	break;
	    case '9': game();
	    	break;
	    case '10': tinhphanso();
	    	break;
    }
    return;
}
int main() 
{
	menu();
}
void kiemtrasonguyen(){
	printf("Q\n");
}
void timUCvaBClonnhat(){
	printf("Tim uoc so chung va boi so chung cua 2 so\n");
}
void tinhtienquankaraoke(){
	printf("Chuong trinh tinh tien cho quan Karaoke\n");
}
void tinhtiendien(){
	printf("Tinh tien dien\n");
}
void doitien(){
	printf("Chuc nang doi tien\n");
}
void laisuat(){
	printf("Xay dung chuc nang tinh lai suat vay ngan hang lai suat tra gop\n");
}
void vaytien(){
	printf("Xay dung chuon trinh vay tien mua xe\n");
}
void ttsv(){
	printf("Sap xep thong tin sinh vien\n");
}
void game(){
	printf("Xay dung game FPOLY-LOTT(2/15)\n");
}
void tinhphanso(){
	printf("Xay dung chuong trinh tinh toan phan so\n");
}
