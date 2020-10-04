# include<iostream>
using namespace std;
class bank
{
	private:
		int acc;
		char name[20];
		int age;
		public:
		void getdata();
		void display();
		};
		void bank::getdata()
		{
		//	cout<<"\n"<<" Enter the account number :: Enter the name of the customer :: Enter the age" ;
		//	cin>>acc>>name>>age;
		acc=x;
		age=y;
		}
		void bank::display()
		{
		   cout<<"account number:"<<acc<<"Name:"<<name<<"age:"<<age;
	
		}
int main()
{
	bank b;
	b.getdata();
	b.display();
}
