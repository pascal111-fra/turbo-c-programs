// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(void)
{

char ch1[]="Hello World!";
char ch2[]="Hello\nWorld!";
char* p=NULL;
int l;

clrscr();

l=strlen(ch1);
p=&ch1[0];

while(l--)
putch(*(p++));

printf("\n\n");

l=strlen(ch2);
p=&ch2[0];

while(l--){

if(*(p)=='\n'){
putch('\n');
putch('\r');}
else
putch(*p);

++p;}
getch();
return 0;
}