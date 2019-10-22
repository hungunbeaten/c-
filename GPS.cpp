#include<stdio.h>
main()
{
	int h=0, p=0, s=1000000;
	h = s/3600;
	p = s/60 - h*60;
	s = s%60;
//	if(s<60) s=s%60;
//	else if(s>=60)
//	{
//	p=s/60;
//	s=s%60;
//}
//	if(p>=60) {
//		
//		h=(p/60);
//		p=p%60;
//	}
printf("%d %d %d", h, p, s);
	
}
