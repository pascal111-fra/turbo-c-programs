#include<string.h>
#include<stdlib.h>

const char* strleft2(const char* ch, char* c)
{

char* store=(char*)malloc(sizeof(char)*strlen(ch));
int count=0;

while(ch<c){
*store++=*ch++;
++count;}

*++store='\0';
store-=count+1;

return store;
}