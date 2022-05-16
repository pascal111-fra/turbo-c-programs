// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS

/* This is a BASIC language game
from a book called "BASIC COMPUTER
GAMES", edited by David H. Ahl,
Microsoft Edition. */

#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int card_generate(void);
const char *card_value(int*);


int main(void)
{

int card_a,
card_b, card_c;

int your_money,
how_much;

char *card_name="null";

srand(time(NULL));

again:

your_money=100;

clrscr();

printf("Acey Ducey card game!\n\n");
printf("Bet with your money that the card that\n");
printf("the computer will discover is between the\n");
printf("shown cards or equal to one of 'em. Type \"0\"\n");
printf("if you liked not to bet.\n\n");

next_turn:

printf("You have %d$\n\n", your_money);

printf("Here is your two cards:\n");

do{
card_a=card_generate();
card_b=card_generate();
}while((card_b<=card_a) ||
((card_b-card_a)<=1));

card_name=(char *)card_value(&card_a);
printf("%s", card_name);

card_name=(char *)card_value(&card_b);
gotoxy(wherex()+5, wherey());
cprintf("%s", card_name);

type_again:

printf("\n\nYou'll bet with (integers only)\n");
printf("(negatives will exit the game): ");

if(scanf("%d", &how_much)==0){
fflush(stdin);
printf("\nWrong value!");
goto type_again;}

fflush(stdin);

if(how_much<0)
exit(0);

if(how_much==0){
printf("\nCHICKEN!!!\n\n");
goto next_turn;}

if(how_much>your_money){
printf("\nYou bet with %d$ and that's higher than your money %d$",
how_much, your_money);
goto type_again;}

card_c=card_generate();

if((card_c>=card_a) &&
(card_c<=card_b)){
your_money+=how_much;
printf("\nThat's right!\n");
card_name=(char *)card_value(&card_c);
printf("3rd card is %s\n\n", card_name);
goto next_turn;}

else{
your_money-=how_much;
printf("\nOoops that's wrong!\n");
card_name=(char *)card_value(&card_c);
printf("3rd card is %s\n\n", card_name);}

if(your_money>0)
goto next_turn;

printf("You have zero money!\n");
printf("Do you like to play again(y/n)? ");
if(tolower(getchar())=='y'){
fflush(stdin);
goto again;}

fflush(stdin);
return 0;
}

int card_generate(void)
{

int x;

x=(rand()%12)+2;

return x;

}

const char *card_value(int *x)
{

char *sh="null";

switch(*x){

case 11: strcpy(sh, "Jack"); break;
case 12: strcpy(sh, "Queen"); break;
case 13: strcpy(sh, "King"); break;
case 14: strcpy(sh, "Ace"); break;

default: sprintf(sh, "%d", *x);}

return sh;

}