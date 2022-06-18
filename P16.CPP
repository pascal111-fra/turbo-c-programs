// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main(void)
{

int* j=(int*)malloc(sizeof(int)*6+1);
char* p1,* p2;
int i, temp;

clrscr();

p1=(char*)&j[0];
*p1=6;
p2=p1+1;
*p2=0;
j++;

for(i=0; i<=(*p1)-1; i++){
scanf("%d", &temp);
if(temp!=888){
j[i]=temp;
(*p2)++;}
else
break;

fflush(stdin);}

printf("\n");

for(i=0; i<=(*p2)-1; i++)
printf("%d\n", j[i]);

getch();
return 0;
}