#include<stdio.h>

char * find_char(char const *source, char const *chars)
{
	int i,j;
	if (NULL==source||NULL==chars)
		return NULL;
	for(i=0;*(source+i)!='\0';i++)
		{	
			for(j=0;*(chars+j)!='\0';j++)
				if(*(source+i) == *(chars+j))
				{
					return (source+i);
				}
		}
		if('\0'==*(source+i))
			return NULL;
}

int main()
{
	char *s1="cdefg";
	char *s2="iubevgf";
	printf("%c\n",*find_char(s1,s2));
	return 0;
}