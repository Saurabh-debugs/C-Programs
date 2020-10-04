// program to convert decimal to binary .....
# include<stdio.h>
# include<math.h>
void main()
{
	int n,a[30],i=0,r,j;
	printf("\n enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%2;
		i++;
		n=n/2;
	}
	for(j=i-1;j>=0;j--)
	{
	printf("%d",a[j]);
}
} 
