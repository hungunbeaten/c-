#include<stdio.h>
#include<math.h>
void showTime(int seconds, int index = 0) 
{
	if(seconds < 60 || index == 2) printf("%dh:", seconds);
	else 
	{
		showTime(seconds/60, index+1);
		if(index == 0) printf("%ds", seconds%60);
		if(index == 1) printf("%dm:", seconds%60);
	}
} 
int main()
{
    showTime(963510);
}
