// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS

#include<stdio.h>
#include<conio.h>

int main(void)
{

int x=5, y=0;
int w=5, z=0;

clrscr();

y=++x; // --> x+=1; y=x;

printf("x=%d y=%d\n", x, y);

z=w++; // --> z=w; w+=1;

printf("w=%d z=%d\n", w, z);

getch();
return 0;
}