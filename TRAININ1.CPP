// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS


#include<stdio.h>
#include<conio.h>

int main(void)
{

float x,
y, z;

clrscr();

printf("Number 1: ");
scanf("%f", &x);
fflush(stdin);

printf("Number 2: ");
scanf("%f", &y);
fflush(stdin);

z=x+y;

printf("Total = %g",z);

getch();
return 0;
}