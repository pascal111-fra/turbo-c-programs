#include<string.h>
#include<stdlib.h>

const char* strleft2(const char* ch, char* c)
{

char* store=strdup(ch);

int diff=0;

diff=abs(ch-c);

if(store==NULL)
return NULL;

store[diff+1]='\0';

return store;
}

const char* strright2(const char* ch, char* c)
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

const char* strmid2(const char* ch, char* c, size_t i)
{

char* store=(char*)strright2(ch,c);

if(store==NULL)
return NULL;

store[i]='\0';

return store;

}

const char* strmid22(const char* ch, char* c, char* z)
{

char* store=(char*)strright2(ch,c);
int diff=0;

if(store==NULL || c>z)
return NULL;

diff=abs(c-z);

store[diff+1]='\0';

return store;

}


void strcpy2(char* ch, const char* c, size_t i)
{

if((strlen(c)>(i-1)) ||
(strlen(c)==(i-1))){
strncpy(ch, c, (i-1));
ch[i-1]='\0';}

else{
strncpy(ch, c, strlen(c));
ch[strlen(c)]='\0';}

}

void strcat2(char* ch, const char* c, size_t i)
{

int diff=0, ch_len;

diff=abs(strlen(ch)-(i-1));
ch_len=strlen(ch);

if(strlen(c)>diff ||
strlen(c)==diff){
strncat(ch, c, diff);
ch[i-1]='\0';}

else{
strncat(ch, c, strlen(c));
ch[ch_len+strlen(c)]='\0';}


}