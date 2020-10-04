# include<stdio.h>
# include<string.h>
void main()
{
	char a[10],b[10];
	int i,l;
	printf(" enter your name");
    gets(a);
   //  scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	b[i]=a[i];
	}
    b[i]='\0';
  //scanf("after copy %s",b);
  puts(b);
}

