#include<string.h>
#include<stdlib.h>


/******************************************/

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

/******************************************/

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

/******************************************/

const char* strmid2(const char* ch, char* c, size_t i)
{

char* store=(char*)strright2(ch,c);

if(store==NULL)
return NULL;

store[i]='\0';

return store;

}

/******************************************/

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

/******************************************/

void strcpy2(char* ch, const char* c, size_t i)
{

if(strlen(c)>=(i-1)){
strncpy(ch, c, (i-1));
ch[i-1]='\0';}

else{
strncpy(ch, c, strlen(c));
ch[strlen(c)]='\0';}

}

/******************************************/

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

/******************************************/

const char* strlwr2(const char* ch)
{

char* store=strdup(ch);

strlwr(store);

return store;
}

/******************************************/

const char* strupr2(const char* ch)
{

char* store=strdup(ch);

strupr(store);

return store;
}

/******************************************/

const char* strrev2(const char* ch)
{

char* store=strdup(ch);

strrev(store);

return store;
}

/******************************************/

const char* strdel2(const char* ch, char* c, char* z)
{

char* store1=(char*)strleft2(ch, (c-1));
char* store2=(char*)strright2(ch, (z+1));
char* store3=(char*)malloc(sizeof(char)*
(strlen(store1)+strlen(store2)+1));
int len=strlen(store1)+strlen(store2)+1;

strcpy2(store3, store1, len);

strcat2(store3, store2, len);

return store3;

}

/******************************************/

void strinst2(char* ch, const char* substr, char* c, size_t i)
{

char* store1=(char*)strleft2(ch, (c-1));
char* store2=(char*)strright2(ch, c);
char* store3=(char*)malloc(sizeof(char)*(strlen(ch)+
strlen(substr)+1));
int len=strlen(ch)+strlen(substr)+1;

strcpy2(store3, store1, len);
strcat2(store3, substr, len);
strcat2(store3, store2, len);

strcpy2(ch, store3, i);

}

/******************************************/

void strreplace2(char* ch, const char* substr, char* c, char* z, size_t i)
{

char* store=(char*)malloc(i);

strcpy2(store, strdel2(ch, c, z), i);
strcpy2(ch, store, i);
strinst2(ch, substr, c, i);


}