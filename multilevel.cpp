#include<iostream>
using namespace std;
class base
{
	public:
		int x;
		
		void getdata()
		{
			cout<<"enter number of x :";
			cin>>x;
		}
};
class dereived1 : public base
{
	public:
		int y;
		
		void setdata()
		{
			cout<<"enter number of y : ";
			cin>>y;

		}
	
};
class derived2 : public dereived1
{
	public:
		int z;
		
			void indata()
		
		{
			cout<<"enter number  of z:";
			cin>>z;
		}
		void display()
		{
			cout<<"ans :"<<x*y*z;
		}
};
main()
{
	derived2 d;
	d.getdata();
	d.setdata();
	d.indata();
	d.display();
}
