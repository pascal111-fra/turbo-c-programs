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

char* strright2(const char* ch, char* c)
{

char* store=strdup(ch);

int diff=0;

diff=abs(c-&c[strlen(c)-1]);

if(store==NULL)
return NULL;

strrev(store);

store[diff+1]='\0';

strrev(store);

return store;

}

char* strmid2(const char* ch, char* c, size_t i)
{

char* store=strright2(ch,c);

if(store==NULL)
return NULL;

store[i]='\0';

return store;

}

char* strmid22(const char* ch, char* c, char* z)
{

char* store=strright2(ch,c);
int diff=0;

if(store==NULL || c>z)
return NULL;

diff=abs(c-z);

store[diff+1]='\0';

return store;

}