#include<bits\stdc++.h>
using namespace std;

class Shapes
{
	protected:
	int a,b,c;
	public:
	virtual void getdata()
	{
    }
    virtual void putdata()
    {
	}
};
class Circle: public Shapes
{
	int a;
	float s;
	public:
	void getdata()
	{
	   cout<<"Enter the radius in cm "<<endl;
	   cin>>a;
	}
	s=3.141*(a*a);
	void putdata()
	{
	   cout<<s<<endl;
	}
};
class Rectangle: public Shapes
{
	int a,b;
	float s=0;
	public:
    void getdata()
	{
	   cout<<"enter the length and breadth unit in cm"<<endl;
	   cin>>a>>b;
    }
	s=0.5*(a+b);
    void putdata()
    {
    	cout<<s<<endl;
	}
};
class Triangle: public Shapes
{
	int a,b,c;
	float s=0,t;
	public:
	void getdata()
	{
		cout<<"Enter the length of three sides of triangle in cm"<<endl;
		cin>>a>>b>>c;
    }
    s=0.5(a+b+c);
    t=sqrt(s*(s-a)(s-b)(s-c));
    void putdata()
    {
    	cout<<t<<endl;
	}
};
int main()
{
   Circle C;
   Rectangle R;
   Triangle T;
   Shapes *p1,*p2,*p3;
   p1=&C;
   p2=&R;
   p3=&T;
   cout<<"Circle Input"<<endl;
   p1->getdata();
   cout<<"Rectangle Input"<<endl;
   p2->getdata();
   cout<<"Triangle Input"<<endl;
   p3->getdata();
   cout<<"Circle Information"<<endl;
   p1->putdata();
   cout<<"Rectangle Information"<<endl;
   p2->putdata();
   cout<<"Triangle Information"<<endl;
   p3->putdata();
   return 0;
}
