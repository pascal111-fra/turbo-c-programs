// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS

/* This is a BASIC language game
from a book called "BASIC COMPUTER
GAMES", edited by David H. Ahl,
Microsoft Edition. */

/******************* BAGELS *********************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "collect2.h"


int main(void)
{

const NUMBERMAX=(sizeof(char)*3+1);

int pico,
fermi, my_number;
char* my_number_str=(char*)malloc(NUMBERMAX+1);
char* your_number=(char*)malloc(NUMBERMAX+1);
char* temp;
int i;


srand(time(NULL));

again:

clrscr();

printf("Computer will generate an unsigned integer\n");
printf("consisting of 3 digits, and you'll try to know\n");
printf("the exact number computer keeps.\n\n");
printf("Help hints are as following:\n");
printf("PICO ==> one digit correct but in wrong position.\n");
printf("FERMI ==> one digit correct and in right position.\n");
printf("BAGELS ==> none of digits correct.\n\n");

generate_again:

strcpy2(my_number_str, "0", NUMBERMAX+1);

while(strlen(my_number_str)!=3){
my_number=rand()%1000;
sprintf(my_number_str, "%d", my_number);}

for(i=0; i<=1; i++)
if(my_number_str[i]==my_number_str[i+1])
goto generate_again;

if(my_number_str[0]==my_number_str[2])
goto generate_again;

do{

enter_again:

pico=0;
fermi=0;

printf("Enter a 3 digits unsigned integer: ");

if(!scanf("%d", &my_number)){
fflush(stdin);
goto enter_again;}
fflush(stdin);

if(my_number<0){
free(my_number_str);
free(your_number);
exit(0);}

sprintf(temp, "%d", my_number);

if(strlen(temp)!=3)
goto enter_again;

strcpy2(your_number, temp, NUMBERMAX+1);

for(i=0; i<=1; i++)
if(your_number[i]==your_number[i+1])
goto enter_again;

if(your_number[0]==your_number[2])
goto enter_again;

// PICO counting

if(your_number[0]==my_number_str[1] ||
your_number[0]==my_number_str[2])
++pico;

if(your_number[1]==my_number_str[2] ||
your_number[1]==my_number_str[0])
++pico;

if(your_number[2]==my_number_str[1] ||
your_number[2]==my_number_str[0])
++pico;


// FERMI counting

for(i=0; i<=2; i++)
if(your_number[i]==my_number_str[i])
++fermi;

if(pico);
for(i=1; i<=pico; i++)
printf("PICO ");

if(fermi);
for(i=1; i<=fermi; i++)
printf("FERMI ");

if(!pico && !fermi)
printf("BAGELS");

printf("\n");

}while(fermi!=3);

printf("You WON!\n");
printf("Do you like to play again(y/n): ");
if(getchar()==tolower('y'))
goto again;

free(my_number_str);
free(your_number);

return 0;
}