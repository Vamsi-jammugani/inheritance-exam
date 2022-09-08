#include<iostream>
using namespace std;
class degree
{
	public:
		void getdegree()
		{
			cout<<"i got a degree"<<endl;
		}
};
class undergraduate:public degree
{
	public:
	void printdegree()
	{
		cout<<"i am an graduate"<<endl;
	}
};
class postgraduate:public degree
{
	public:
		void printdegree()
		{
			cout<<"i am an postgraduate"<<endl;
		}
};
int main()
{
	undergraduate obj1;
	postgraduate obj2;
	obj1.getdegree();
	obj1.printdegree();
	obj2.getdegree();
	obj2.printdegree();
	return 0;
}
