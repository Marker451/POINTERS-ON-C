#include<stdio.h>

char *judge(char *s1,char *s2)
{
	char *begin=s1;
	while((*s1)!='\0'&&(*s2)!='\0')
	{
		if((*s1)!=(*s2))
		{
			return begin;
		}
		else
		{
			s1++;
			s2++;
		}
	}
	if((*s2)=='\0')
		return s1;
	else
		return begin;
}
int del_substr(char *str,char const *substr)
{
	char *before_sub;
	char *after_sub;	
	do
	{
		if((before_sub=str),((after_sub=judge(str,substr))==str))
			str++;
		else 
			break;
	}
	while((*str)!='\0');
	if((*str)=='\0')
		return 0;
	while((*after_sub)!='\0')
	{
		*(before_sub++)=*(after_sub++);
	}
	*(before_sub)='\0';
	return 1;

	
	
}
int main()
{
	char  a[]="abcdef";
	char *sub="cd";
	del_substr(a,sub);
	printf("%s\n",a);

	return 0;
}