 # include<stdio.h>
 # include<stdlib.h>
 int add(int,int);
 int sub(int,int);
 int mul(int,int);
 int divi(int,int);
 void main()
 {
 	int a,b,n,A,B,C,D,ch=10;
 	while(ch==10)
 	{
 	printf("\n enter the value of a,b");
 	scanf("%d%d",&a,&b);
 	printf("\n enter the choice \n 1 for add \n 2 for sub \n 3 for mul \n 4 for div \n 5 for exit");
 	scanf("%d",&n);
 	switch(n)
 	{
 		case 1:
 			A=add(a,b);
 			printf("%d",A);
 			break;
 			case 2:
 				B=sub(a,b);
 				printf("%d",B);
 				break;
 				case 3:
 					C=mul(a,b);
 					printf("%d",C);
 					break;
					 case 4:
 						D=divi(a,b);
 						printf("%d",D);
 						break;
 						case 5:
 							exit(0);
 						default:
 							printf("enter the correct option");						
	 }
	 printf("\n to continoue please enter 10");
	 scanf("%d",&ch);
 }}
 int add(int p,int q)
 {
 	int r;
 	r=p+q;
 	return r;
 }
 int sub(int p,int q)
 {
 	int r;
 	r=p-q;
 	return r;
 }
 int mul(int p,int q)
 {
 	int r;
 	r=p*q;
 	return r;
 }
 int divi(int p,int q)
 {
 	int r;
 	r=p/q;
 	return r;
 }
