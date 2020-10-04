# include<stdio.h>
int check(int,int,int,int,int,int,int,int);
void main()
{
	int a,b,c,d,e,f,g,h,i;
	printf("enter the number");
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
	i=change(a,b,c,d,e,f,h);
	printf("%d",d);
	if(i==a)
	printf("a is larger");
	else if(i==b)
	printf(" b is larger");
	else if(i==c)
	printf("\n c is larger");
	else if(i==d)
	printf("\n d is larger");
	else if(i==e)
	printf("\n e is larger");
	else if(i==f)
	printf("\n f is larger");
	else if(i==g)
	printf("\n g is larger");
	else if(i==h)
	printf("\n h is larger");
}
int change(int a,int b,int c,int d,int e,int f,int g,int h)
{
	int i,j,k,l;
    i=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("\n%d",i);
    j=(d>e)?((d>f)?d:f):((e>f)?e:f);
    printf("\n%d",j);
    k=(g>h)?g:h;
    printf("\n%d",k);
    l=(i>j)?((i>k)?i:k):((j>k)?j:k);
	return l;
	
}
