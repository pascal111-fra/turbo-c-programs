// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS

#include <stdio.h>
#include <conio.h>


int main(void)
{

enum likedegree {bad=1, good, perfect};

int x;

clrscr();

again:

printf("How you think Wikipedia.com?\n");
printf("1) bad 2) good 3) perfect: ");
scanf("%d", &x);
fflush(stdin);

switch(x){

case bad:
	printf("\nMaybe for that you didn't get what you seek from it!\n");
	break;
case good:
	printf("\nYou found it useful!\n");
	break;
case perfect:
	printf("\nYou enjoyed it much :)\n");
	break;
default:
	printf("\nYou have to choose one of the 3 numbers!\n\n");
	goto again;}

getch();
return 0;
}