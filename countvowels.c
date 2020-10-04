# include<stdio.h>
void main()
{
	char a[10];
	int i,vowels,consonants;
	vowels=consonants=0;
	printf(" enter the name");
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
     if((a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U')||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			vowels++;
		}
		else 
		consonants++;		
	}
	printf("vowels=%d\n consonants=%d",vowels,consonants);

}

