#include<string.h>
#include<stdlib.h>

char* strleft2(const char* ch, char* c)
{

char* store=strdup(ch);

int diff=0;

diff=abs(ch-c);

if(store==NULL)
return NULL;

store[diff+1]='\0';

return store;
}