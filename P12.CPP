// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"collect2.h"

int main(void)
{

const LINELEN = 100;
char data_line[LINELEN+1];
char* p,* test;
int num=0;

clrscr();

printf("Enter a line: ");
fgets2(data_line, LINELEN+1);
fflush(stdin);

p=strtok(data_line, " ");

printf("\n\"ing\" words are:\n\n");

while(p!=NULL){
test=(char*)strright2(p,&p[strlen(p)-4]);

if(!strcmpi(strleft2(test, &test[2]), "ing")){

strcpy2(test, strdel2(test, &test[strlen(test)-1],
&test[strlen(test)-1]), strlen(test)+1);

strcpy2(p, strdel2(p, &p[strlen(p)-1],
&p[strlen(p)-1]), strlen(p)+1);}

else
test=(char*)strright2(p,&p[strlen(p)-3]);

if(!strcmpi(test, "ing")){
printf("%s\n", p);
++num;}
p=strtok(NULL, " ");}

if(!num)
printf("zero!\n");

getch();
return 0;
}