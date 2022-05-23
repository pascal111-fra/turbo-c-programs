// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS


#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void fgets2(char *s, size_t x)
{

fgets(s, x, stdin);

s[strcspn(s, "\n")]=0;

}

/******************************/

char* strleft(const char* ch, int x)
{

char* store=(char*) malloc(strlen(ch)+1);

strcpy(store, ch);

store[x]='\0';

return store;

}

/******************************/

char* strright(const char* ch, int x)
{

char* store=(char*) malloc(strlen(ch)+1);

strcpy(store, ch);

store=strrev(store);

store[x]='\0';

store=strrev(store);

return store;

}

/******************************/

char* strmid(const char* ch, int x, int l)
{

char* store=(char*) malloc(strlen(ch)+1);
int i;

for(i=0; i<=l; ++i)
store[i]=ch[i+x-1];

store[l]='\0';

return store;


}

/******************************/

void swap(void** x, void** y)
{

void** z;

*z=*x;
*x=*y;
*y=*z;


}

/******************************/

void strdel(char* ch, int x, int l)
{

char* store=(char*)malloc(strlen(ch)+1);
int diff;

store=strleft(ch, x-1);

diff=strlen(ch)-(strlen(store));

strcat(store, strmid(ch, x+l,diff));


strcpy(ch, store);

}

/******************************/