// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void aver(int, float*);

int main(void)
{

int y;
float z;

clrscr();

printf("Enter how many numbers to calculate\n");
printf("their average: ");
scanf("%d",&y);
fflush(stdin);

printf("\n");
aver(y,&z);
printf("\n");
printf("Average of 'em = %g", z);



getch();
return 0;
}

void aver(int x, float* c)
{

float* nums=(float*)malloc(sizeof(float)*x);
int i;
float calc_nums=0;

if(nums==NULL){
printf("Error occured in creating the array!");
exit(EXIT_FAILURE);}

for(i=0; i<x; i++){
printf("Enter a number: ");
scanf("%f", &nums[x]);
fflush(stdin);
calc_nums+=nums[x];}

calc_nums/=x;

*c = calc_nums;

}