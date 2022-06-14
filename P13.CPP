// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS


#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "collect2.h"


int main(void)
{

const FLOATLEN=10;
float x;
char ch[FLOATLEN+1];
char* p,* p2="hello";
char i, health;

clrscr();

again:

i=0;
health=0;

printf("Enter a string to convert to float: ");
fgets2(ch, FLOATLEN+1);
fflush(stdin);
p=ch;

while(*p){
if(!isdigit(*p)){
if(*p=='.')
++i;
else{
++health;
break;}}
++p;
}

if(health ||
i>1){
printf("You entred incorrect real number!\n");
goto again;}

x=(float)atof(ch);

printf("Your number after converting = %f\n", x);

getch();
return 0;
}