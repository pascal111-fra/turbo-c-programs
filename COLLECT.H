// Programmed under TC++ 3.0
// Programmed by Mishary (Ahmed Crow)
// DOS OS


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

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

void strinst(char* ch, const char* substr, int x)
{

char* store=(char*)malloc(strlen(ch)+strlen(substr)+1);
char* p=(char*)malloc(strlen(ch)+1);

store=strleft(ch,x-1);

strcpy(p, ch);
strdel(p, 1, strlen(store));

strcat(store, substr);

strcat(store, p);

strcpy(ch, store);

}

/******************************/

void strreplace(char* ch, const char* substr, int x, int l)
{

strdel(ch, x, l);
strinst(ch, substr, x);

}

/******************************/

char* strstring(int x, const char c)
{

char* store=(char*)malloc(x+1);
int i;

for(i=0; i<=x-1; ++i)
store[i]=c;

store[x]='\0';

return store;
}

/******************************/

char* strspace(int x)
{

return strstring(x, 32);

}

/******************************/

void strltrim(char* ch)
{

while(isspace(ch[0]))
strdel(ch,1,1);

}

/******************************/

void strrtrim(char* ch)
{

strrev(ch);
strltrim(ch);
strrev(ch);

}

/******************************/

double fix(double x)
{

double y,* z;

y=modf(x,z);
y=*z;

return y;

}

/******************************/

int sgn(double x)
{

if(x<0)
return -1;
else{if(x>0)
return 1;}

return 0;

}