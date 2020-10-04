# include<stdio.h>
int main()
{
	int a[100],n,i,j,t=0,d=0;
	printf("\n enter number of element");
	scanf("%d",&n);
	printf("\n enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
 			if(a[j]>a[j+1])
			{
				d++;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\n%d",d);
	printf("\n sorting element");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
