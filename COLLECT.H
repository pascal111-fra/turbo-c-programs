#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fgets2(char *s, size_t x)
{

fgets(s, x, stdin);

s[strcspn(s, "\n")]=0;

}

char* left(const char* ch, int x)
{

char* store=(char*) malloc(strlen(ch)+1);

if((x>strlen(ch)) ||
(x<1))
exit(EXIT_FAILURE);

strcpy(store, ch);

store[x]='\0';

return store;

}

char* right(const char* ch, int x)
{

char* store=(char*) malloc(strlen(ch)+1);

if((x>strlen(ch)) ||
(x<1))
exit(EXIT_FAILURE);

strcpy(store, ch);

store=strrev(store);

store[x]='\0';

store=strrev(store);

return store;

}

char* mid(const char* ch, int x, int l)
{

char* store=(char*) malloc(strlen(ch)+1);
int i;

if((x>strlen(ch)) ||
(x<1))
exit(EXIT_FAILURE);

if((l>strlen(ch)) ||
(l<1))
exit(EXIT_FAILURE);

if(((x+l-1)-1)>
(strlen(ch)-1))
exit(EXIT_FAILURE);

for(i=0; i<=l; ++i)
store[i]=ch[i+x-1];

store[l]='\0';

return store;


}


void swap(void** x, void** y)
{

void** z;

*z=*x;
*x=*y;
*y=*z;


}