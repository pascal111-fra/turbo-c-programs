// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS


#include<stdio.h>
#include<conio.h>
#include"collect.h"

int main(void)
{

int i;

clrscr();

for(i=1; i<=10; ++i)
printf("%s\n", strstring(i,'*'));

for(i=10; i>=1; --i)
printf("%s\n", strstring(i,'*'));


getch();
return 0;
}