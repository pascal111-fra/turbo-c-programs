#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


/******************************************/

const char* strleft2(const char* ch, char* c)
{

char* store=strdup(ch);

int diff;

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

int diff;

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
int diff;

if(store==NULL || c>z)
return NULL;

diff=abs(c-z);

store[diff+1]='\0';

return store;

}

/******************************************/

void strcpy2(char* ch, const char* c, size_t i)
{

char* temp=(char*)malloc(sizeof(char)*i);

if(strlen(c)>=(i-1)){
strncpy(temp, c, (i-1));
temp[i-1]='\0';
strncpy(ch, temp, (i-1));
ch[i-1]='\0';}

else{
strncpy(temp, c, strlen(c));
temp[strlen(c)]='\0';
strncpy(ch, temp, strlen(c));
ch[strlen(c)]='\0';}

free(temp);

}

/******************************************/

void strcat2(char* ch, const char* c, size_t i)
{

/*
char* temp=strdup(c);
int diff;

diff=abs(strlen(ch)-(i-1));

if(strlen(c)>=diff){
strncat(ch, temp, diff);
ch[i]='\0';}

else{
strncat(ch, temp, strlen(c));
ch[strlen(ch)+strlen(c)]='\0';}

free(temp);*/

int diff;

diff=abs(strlen(ch)-i);
--diff;

if(strlen(c)<=diff)
memmove(&ch[strlen(ch)], c, strlen(c)+1);

else{
memmove(&ch[strlen(ch)], c, diff);
ch[i]='\0';}

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



char* store1,
* store2,* store3;

int LEN;

if(c==&ch[0])
store1=NULL;
else
store1=(char*)strleft2(ch, (c-1));

if(z==&ch[strlen(ch)-1])
store2=NULL;
else
store2=(char*)strright2(ch, (z+1));

LEN=sizeof(char)*(strlen(store1)+strlen(store2)+1);

store3=(char*)malloc(LEN);

strcpy2(store3, store1, LEN);

strcat2(store3, store2, LEN);

return store3;

}

/******************************************/

void strinst2(char* ch, const char* substr, char* c, size_t i)
{

char* store1;
char* store2=(char*)strright2(ch, c);
char* store3=(char*)malloc(sizeof(char)*(strlen(ch)+
strlen(substr)+1));
int len=strlen(ch)+strlen(substr)+1;

if(c==&ch[0])
store1=NULL;
else
store1=(char*)strleft2(ch, (c-1));

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

/******************************************/

void strltrim2(char* ch)
{

int i;

while(isspace(ch[0])){

for(i=0; i<=strlen(ch)-1; i++)
ch[i]=ch[i+1];}

}

/******************************************/

void strrtrim2(char* ch)
{

strrev(ch);
strltrim2(ch);
strrev(ch);

}

/******************************************/

void strdelall(char* ch, const char* substr, size_t i)
{

char* c,* z;

c=strstr(ch, substr);
z=c+(strlen(substr)-1);

while(c){
strcpy2(ch, strdel2(ch, c, z), i);
c=strstr(ch, substr);
z=c+(strlen(substr)-1);}


}

/******************************************/

void strreplaceall(char* ch, const char* substr1,
const char* substr2, size_t i)
{

char* c,* z;

c=strstr(ch, substr1);
z=c+(strlen(substr1)-1);

while(c){
strreplace2(ch, substr2, c, z, i);
c=strstr(ch, substr1);
z=c+(strlen(substr1)-1);}


}

/******************************************/

void fgets2(char *s, size_t x)
{

fgets(s, x, stdin);

s[strcspn(s, "\n")]=0;

}

/******************************************/

void swap(void** x, void** y)
{

void** z;

*z=*x;
*x=*y;
*y=*z;


}

/******************************************/

const char* strstring(int x, const char c)
{

char* store=(char*)malloc(x+1);
int i;

for(i=0; i<=x-1; ++i)
store[i]=c;

store[x]='\0';

return store;
}

/******************************************/

const char* strspace(int x)
{

return strstring(x, 32);

}

/******************************************/

double fix(double x)
{

double y,* z;

y=modf(x,z);
y=*z;

return y;

}

/******************************************/

int sgn(double x)
{

if(x<0)
return -1;
else{if(x>0)
return 1;}

return 0;

}

/******************************************/

