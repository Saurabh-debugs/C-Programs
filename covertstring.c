# include<stdio.h>
char lowercase(char );
char main()
{
	char s[10],m;
	int i,l;
	printf(" enter the string");
	scanf("%s",s);
	l=strlen(s);
	m=lowercase(s);
	printf(" \nthe entered string in lowercase");
	printf("\n%s",s);
	return 0;
}
char lowercase(char s)
{
	int i,l;
	for(i=0;i<=l;i++)
	{
		if(s [i]>=65&&s[i]<=92)
		{
			s[i]=s[i]+32;
		}
		
	}
	return s;
}
	
