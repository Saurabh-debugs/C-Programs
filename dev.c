# include<stdio.h>
# include<process.h>
# include<dos.h>
# include<stdlib.h>
# include<graphics.h>
void main()
{
	int i,j;
	gotoxy(1,1);
	for(i=1;i<50;i++)
	{
		for(j=1;j<50;j++)
		{
			printf(" ");
			delay(10);
		}
	}gotoxy(1,1);
	
	
	
}
