# include<stdio.h>
# include<conio.h>
void main()
{
	float c1=0.5,c2=0.75,c3=1.20,c4=1.50,u;
	float bill, add;
	char s[15];
	int n,ed,a;
	long long int dn,pn,phn,fn;
	printf("\n *******  welcome to uttar pradesh power corporation limited *******");
	printf("\n Enter your electricity unit");
	scanf("%f",&u);
	if(u<=50)
	{
		bill= (u*c1);
		add=(bill*20)/100;
		bill=add+bill;
		printf("\n Your bill is %f",bill);
	}
	else if(u<=150)
	{
		bill=(u*c2);
		add=(bill*20)/100;
		bill=bill+add;
		printf("\n Your bill is %f",bill);
	}
	else if(u<=250)
	{
		bill=(u*c3);
		add=(bill*20)/100;
		bill=bill+add;
			printf("\n Your bill is %f",bill);
	
	}
	else 
	{
		bill=(u*c4);
		add=(bill*20)/100;
		bill=bill+add;
		printf("\n Your bill is %f",bill);
	}
   printf("\n For payment please chooose the option given bellow");
   printf("\n 1 for debit card \n 2 for online banking \n 3 for online walllet");
   scanf("%d",&n);
   switch(n)
   {
   	case 1:
   		printf("\n Enter your debit card number");
   		scanf("%lld",&dn);
		   printf("\n Enter your expiry motnth");
		   scanf("%d",&ed);
		      printf("\n Your bill is %f",bill);
		      printf("\n your tranaction is successfull");
		break;	  }
   case 2:
   	  // char s[15];
	   printf("\n Enter your online bank");
   	scanf("%s",&s[15]);
   	printf("\n your bill is %d",bill);
   	printf("\n your tranasaction is seccussfull");
   break;
   case 3:
   printf("\n Plese select your online walllet \n 1 for paytm \n 2 for phonepe \n 3 for freecharge");
   scanf("%d",&a);
   if(a==1)
   {
   	printf("\n Enter your paytm number");
   	scanf("%lld",&pn);
   	printf("\n your bill is %f",bill);
   	printf("\n your tranasaction is seccussfull");
   }
   else if(a==2)
   {
   	printf("\n Enter your phonepe number");
   	scanf("%lld",&phn);
   	printf("\n your bill is %f",bill);
   	printf("\n your tranasaction is seccussfull");
   }
     	else 
     	{
     		printf("\n Enter your freecharge number");
   	scanf("%lld",&fn);
   	printf("\n your bill is %d",bill);
   	printf("\n your tranasaction is seccussfull");
		 }
   break;
}
