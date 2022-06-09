// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS

#include<stdio.h>
#include<conio.h>
#include"collect.h"
#include"collect2.h"


int main(void)
{

char your_name[30+1],
first_name[14+1], second_name[14+1];
char* p;

clrscr();

printf("Enter your 1st & 2nd name: ");
gets(your_name);
fflush(stdin);

strltrim(your_name);
p=&your_name[0];
while((*p)!=' ')
p++;

strcpy2(first_name, strleft2(your_name, p),
sizeof(first_name));

printf("Your 1st name is: %s\n", first_name);

strcpy2(second_name, strright2(your_name, p),
sizeof(second_name));

strltrim(second_name);
strrtrim(second_name);

printf("Your 2nd name is: %s\n", second_name);



getch();
return 0;
}