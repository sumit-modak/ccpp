#include<iostream>
using namespace std;
class Media
{
	protected:
	string title;
	float price;
	public:
	virtual void getdata()
	{
	}
	virtual void putdata()
	{
	}
};
class Book : public Media
{
	int pages;
	public:
	void getdata()
	{
	cout<<"Enter the title,price & page numbers";
	cin>>title>>price>>pages;
	}
	void putdata()
	{
	cout<<title<<" "<<price<<" "<<pages<<endl;
	}
};
class Tape: public Media
{
	float duration;
	public:
	void getdata()
	{
	cout<<"Enter title,price & duration"<<endl;
	cin>>title>>price>>duration;
	}
	void putdata()
	{
		cout<<title<<" "<<price<<" "<<duration;
	}
};
int main()
{
    Book B;
    Tape T;
    Media *p1,*p2;
	p1=&B;
	p2=&T;
	cout<<"Enter the book input"<<endl;
	p1->getdata();
	cout<<"Enter the tape input"<<endl;
	p2->getdata();
	cout<<"Book information"<<endl;
	p1->putdata();
	cout<<"Tape information"<<endl;
	p2->putdata();
	return 0;
}
