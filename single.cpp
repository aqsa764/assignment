#include<iostream>
using namespace std;
class base
{
	public:
		int x;
	
		void getdata()
		{
			cout<<"enter number :";
			cin>>x;
		}
	
};

class derived: public base
{
	public:
		int y;
		
		void setdata()
		{
			cout<<"enter number :";
			cin>>y;
		}
		void display()
		{
			cout<<"ans: "<<x+y;
		}
};
main()
{
derived obj;
obj.getdata();
obj.setdata();
obj.display();
}
