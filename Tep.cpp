#include<stdio.h>
int main(int argc, char *argv[])
{ int c; FILE *in, *out;
if(argc!=3){
	fprintf(stderr,"C� ph�p: 'coppy source dest'\n");
	return 1;
}
if((in = fopen(argv[1],'r'))==NULL){
	fprintf(stderr,"Kh�ng th? m? t?p: %s\n", argv[1]);
	perror("L� do:"); return 1;
}
if((out = fopen(argv[2],'w'))==NULL){
	fprintf(stderr,"Kh�ng th? m? t?p: %s\n", argv[2]);
	perror("L� do:"); return 1;
while((c=fgetc(in)) != EOF) fputc(c, out);
fclose(in); fclose(out);
return 0;
}	
