// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS
// May use "Nafitha 4.0" Arabic localization system for DOS


#include <stdio.h>
#include <conio.h>


class land{

public:
	float area_meter_calc();
	float area;
	char* location;
};

class garden: public land{

public:
	int family_places;
	char* guard_name;
};


int main(void)
{

garden for_dummies;

clrscr();


for_dummies.area=1.5;
for_dummies.guard_name="John the funny";

printf("The garden area = %g meters\n",
for_dummies.area_meter_calc());
printf("The guard name is %s\n",
for_dummies.guard_name);


getch();
return 0;
}

float land::area_meter_calc()
{

float ar=float(0);

ar=(float)(this->area)*1000;

return ar;

}