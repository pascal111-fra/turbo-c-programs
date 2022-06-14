// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS

#include<stdio.h>
#include<conio.h>
#include"collect2.h"


int main(void)
{

const char* MR="Mr. ";
const char* MISS="Miss ";
const YOURNAMELEN=(sizeof(char)*30+1);

char* your_name=(char*)malloc(YOURNAMELEN);
char c;

clrscr();

printf("Enter your name: ");
fgets2(your_name, YOURNAMELEN);
fflush(stdin);

again:
printf("Pick up 1) %s2) %s: ",MISS, MR);
c=getchar();
fflush(stdin);

switch(c){

case 49:
strinst2(your_name, MISS, &your_name[0],
YOURNAMELEN);
break;

case 50:
strinst2(your_name, MR, &your_name[0],
YOURNAMELEN);
break;

default: goto again;}

printf("Hello %s!\n", your_name);

free(your_name);

getch();
return 0;
}