# include<stdio.h>
void main()
{
	char a[10];
	int digit,alphabet,space,specialsymbol,i;
	digit=alphabet=space=specialsymbol=0;
	printf("\n enter the string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		digit++;
		else if(a[i]>='A'&& a[i]<='z')
		alphabet++;
		else if(a[i]==' ')
		space++;
		else
		specialsymbol++;
		
	}
    printf("\n digits=%d \n alphabet =%d \n space=%d \n special symbol=%d",digit,alphabet,space,specialsymbol);
    
}
