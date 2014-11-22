#include<stdio.h>

char * find_char(char const *source, char const *chars)
{
	int i=0;
	int j=0;
	if (NULL==source||NULL==chars)
		return NULL;
	for(;*(source+i)!='\0';i++)
		{	
			for(;*(chars+j)!=NULL;j++)
				if(*(source+i) == *(chars+j))
				{
					return (source+i);
				}
		}
	if(NULL==*(source+i))
		return NULL;
}//////////////////////////////////////line 6 and 10 loop variables  j

int main()
{
	char *s1="cdefg";
	char *s2="iubevgf";
	printf("%c\n",*find_char(s1,s2));
	return 0;
}