# include<stdio.h>
void bubble_sort(int a[],int );
 void main()
{
	int a[100],n,i,d=0;
	printf("\n enter number of element");
	scanf("%d",&n);
	printf("\n enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	printf("\n sorting element");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}
void bubble_sort(int a[],int n)
{ 
	int i,j,t,d=0;
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
}
