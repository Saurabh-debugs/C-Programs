# include<iostream>
using namespace std;
int add(int ,int);
int add(int*,int*);
int main()
{
	int a,b,c,d;
	cout<<"\n enter the vaus of a,b";
	cin>>a>>b;
	c=add(a,b);
	cout<<"sum is:"<<c<<endl;
	d=add(&a,&b);
	
	cout<<"sum is:"<<d<<endl;
}
int add(int x,int y)
 {
 return x+y; }
int add(int *x,int*y)
 {
 return *x+*y;  }
