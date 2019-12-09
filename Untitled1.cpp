#include<stdio.h> 
#include<string.h> 
 
 char* dao(char s[]) {
	return strrev(s);
}
 
int main() 
{ 
   char str[50] = "geeksforgeeks"; 
  
   printf("\nThe given string is =%s\n",str); 
  
   printf("\nAfter reversing string is =%s", dao(str)); 
   printf("\nThe given string is =%s\n",str); 
  
   return 0; 
} 

