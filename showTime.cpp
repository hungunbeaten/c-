#include<stdio.h>
#include<math.h>

void showTime(int seconds, int index = 0) {
	printf("\nstart calling function: %d, %d", seconds, index);
	if(seconds < 60 || index >= 2) printf("\na%d: b%d", seconds, index);
	else {
		showTime(seconds/60, index+1);
		printf("\nfunction %d, %d wait function %d %d", seconds, index, seconds/60, index+1);
		printf("\n%d: %d", seconds%60, index);
	}
	printf("\nend calling function: %d, %d", seconds, index);
} 
int main(){
    showTime(3600);
}
