// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>


void do_in_nums(const char*);
void enter_num(const char*, float*);

float firstnum,
secondnum, result;
char arr01 [4][14+1]={"Addition",
"Subtraction", "Multiplication", "Division"};
int oper_choice;
int secondtry;

int main(void)
{

int i, x;
char ques_again;

again:

firstnum=0;
secondnum=0;
secondtry=0;

clrscr();

printf("Choose arithmetic operation\n");
printf("you like to do:\n\n");

x=wherex();

for(i=1; i<=4; ++i){

gotoxy(x, wherey());
cprintf("%d) %s",i,arr01[i-1]);
x=wherex()+5;}


oper_again:

printf("\n? ");

scanf("%d", &oper_choice);
fflush(stdin);
if(oper_choice<1 || oper_choice>4){
printf("Your choice is out of the supposed range!\n");
goto oper_again;}


enter_num("first number", &firstnum);
enter_num("second number", &secondnum);

do_in_nums(arr01[oper_choice-1]);

printf("Do you like to do more (y/n)? ");
if(tolower(getchar())=='y'){
fflush(stdin);
goto again;}


fflush(stdin);
return 0;
}

void enter_num(const char *sh, float *num)
{

char is_zero;

num_again:

printf("\nEnter %s for %s : ", sh ,arr01[oper_choice-1]);
scanf("%f", num);
fflush(stdin);
if(*num==0){
printf("Is your input a zero (y/n)? ");
is_zero=getchar();
fflush(stdin);
if(tolower(is_zero)=='n')
goto num_again;}

if(secondtry &&
oper_choice==4 && *num==0){
printf("You can't divide by zero!\n");
goto num_again;}

secondtry=1;

}


void do_in_nums(const char *sh)
{

if(strcmp(sh,arr01[0])==0)
result=firstnum+secondnum;
else{if(strcmp(sh,arr01[1])==0)
result=firstnum-secondnum;
else{if(strcmp(sh,arr01[2])==0)
result=firstnum*secondnum;
else{if(strcmp(sh,arr01[3])==0)
result=firstnum/secondnum;}}}


printf("\nNumbers total is: %g\n\n", result);


}
