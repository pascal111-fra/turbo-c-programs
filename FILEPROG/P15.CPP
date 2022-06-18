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

const LINELEN = 200;
const LINESNUM = 4;
char data_line[LINELEN+1];
char* p,* test;
int num=0;
FILE* ftext;
int count;

clrscr();

printf("\n\"ing\" words are:\n\n");

ftext=fopen("c:\\tc\\myprog\\fileprog\\info15.txt", "r");

for(count=1; count<=LINESNUM; count++){

fgets(data_line, LINELEN+1, ftext);
data_line[strcspn(data_line, "\n")]='\0';
fflush(stdin);

p=strtok(data_line, " ");

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
printf("zero!\n");}

fclose(ftext);

getch();
return 0;
}