#include<iostream>
using namespace std;
class Complex
{
int a;
int b;
public:
Complex(int x,int y)
{
a=x;
b=y;
}
void display()
{
cout<<"Real"<<a<<endl;
cout<<"Img"<<b<<endl;
}
};
int main()
{
cout<<"\n";
Complex c1(10,20);
//complex c1,c2;
//c1.complex(10,20);
Complex c2=Complex(40,10);
c1.display();
c2.display();

}

