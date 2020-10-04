// program of conversion by using function .....
# include<stdio.h>
# include<math.h>
void dec2bin(int );
int bin2dec(long int);
void main()
{
	int x,v,y,n,ch=1;
    while(ch==1)
{
	  printf("\n coversion");
	  printf("\n 1 for covert decimal to binary \n 2 for covert binary to decinal \n 3 for exit");
	scanf("%d",&x);
	    switch(x)
    {
    	case 1:
    		printf("\n enter the number");
	scanf("%d",&n);
    		dec2bin(n);
    		break;
    		case 2:
    			printf("\n enter the number");
	scanf("%ld",&y);
				v=bin2dec(y);
    			printf("%d",v);
    			break;
    			case 3:
    				exit(0);
    		}	ch++;
				printf("\n to continoue please enter 1 ");
				scanf("%d",&ch);}	

}
      void dec2bin(int n)
      {
      	int a[30],i=0,r,j;
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
     int bin2dec(long int y)
     {
     	int s=0,k=0,t,u;
     	 while(y!=0)
	{
		u=y%10;
		t=pow(2,k);
		s=s+(u*t);
		k++;
        y=y/10;
	}
	   return s;
	 }
