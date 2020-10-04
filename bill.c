# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
long long int digit(long long int);
void main()
{
	float c1=0.5,c2=0.75,c3=1.20,c4=1.50,u;
	float bill, add;
	char s[15];
	int n,ed,a,cv,de,pay;
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
		printf("\n Your  bill is %f",bill);
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
   printf("\n 1 for debit card \n 2 for online banking \n 3 for online walllet \n 4 for exit");
   scanf("%d",&n);
   switch(n)
   {
   	case 1:
   		printf("\n Enter your debit card number");
   		scanf("%lld",&dn);
   		de=digit(dn);
   		printf("%d",de);
   		if(de!=5)
   		{ 
   		printf("\n plese enter 5 digit number");	
		  break;
		   } 
		   printf("\n Enter your expiry year");
		   scanf("%d",&ed);
		   de=digit(ed);
		   if(de!=4)
		  {
		    printf("\n enter correct year");
	         break;   }
		/*   if(ed!=ed>0&&ed<13)
		   {
		   printf("\n please enter correct month");
		   break;
	}  */
		   printf("\n please enter cvv");
		   scanf("%d",&cv); 
		   de=digit(cv);
		   if(de!=3)
		   {
		   	printf(" please enter correct cvv");
		   	break;
			} 
		      printf("\n Your bill is %f",bill);
		      printf("\n your tranaction is successfull");
		printf("\n ****** tranasaction invoice ******");
   	printf("\n Unit is %f bill is %f",u,bill);
		break;	  
   case 2:
   	  //char s[15];
	   printf("\n please select your online bank");
	   printf("\n 1 for SBI \n2 for HDFC \n3 for ICICI \n4 for OBC \n5 for Indian Bank \n6 for exit");
	   scanf("%d",&n1);
	   switch(n1)
	   {
	   	case 1:
	   		printf("/n welcome to SBI online banking");
	   		
	   }
	    
   	  
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
   	de=digit(pn);
   	printf("%d",de);}
   	if(de==10)
   	{

		   printf("\n your bill is %f",bill);
		   printf("\t to pay please enter 1");
		   scanf("%d",&pay);
		   if(pay==1)
		   {
		   	printf("\n ***** processing *****");
   	printf("\n your tranasaction is seccussfull");
	   	printf("\n ****** tranasaction invoice ******");
   	printf("\nUnit is %f bill is %f",u,bill);
}
	     else 
	  break;
	   
	   if(de!=10)
	   {
	   printf(" \n enter 10 digit mobile number");
   } 
   }
   else if(a==2)
   {
   	printf("\n Enter your phonepe number");
   	scanf("%lld",&phn);
   	de=digit(phn);
   	printf("%d",de);}
   	if(de==10)
   	{

		   printf("\n your bill is %f",bill);
		   printf("\t to pay please enter 1");
		   scanf("%d",&pay);
		   if(pay==1)
		   {
		   	printf("\n ***** processing *****");
   	printf("\n your tranasaction is seccussfull");
	   	printf("\n ****** tranasaction invoice ******");
   	printf("Unit is %f bill is %f",u,bill);
	   }
	   
	   else 
	   break;
	   if(de!=10)
	   {
	   printf(" \n please enter 10 digit mobile number");
   }
   }
     	else 
     	{
     		printf("\n Enter your freecharge number");
   	scanf("%lld",&fn);
   	de=digit(fn);
   	printf("%d",de);}
   	if(de==10)
   	{

		   printf("\n your bill is %f",bill);
		   printf("\t to pay please enter 1");
		   scanf("%d",&pay);
		   if(pay==1)
		   {
		   	printf("\n ***** processing *****");
   	printf("\n your tranasaction is seccussfull");
	   	printf("\n ****** tranasaction invoice ******");
   	printf("Unit is %f bill is %f",u,bill);
	   }
	   	   else 
	   break;
	   if(de!=10)
	   {
	   printf(" \n enter 10 digit mobile number");
   }
		 }
   break;
   case 4:
   	exit(0);
   	default:
   		printf("\n please enter correct option");
}}
long long int digit(long long int dn)
{
long long int j=0;
	while(dn!=0)
	{
	   dn=dn/10;
		j++;	  
	}
	return j;
 }
