#include<iostream>
#include<string>
using namespace std;

class Author
{
	private:int authorid;
	        string authorname;
	        int publishbook;
	        int totalsoldbook;
	public:Author()
	{
		this->authorid=12;
		this->authorname="Ayush";
		this->publishbook=12;
		this->totalsoldbook=7;
	}
	Author(int aid,string aname,int pbbook,int sldbook)
	{
		authorid=aid;
		authorname=aname;
		publishbook=pbbook;
		totalsoldbook=sldbook;
	}
	void display()
	{
	 
	 cout<<"Authorid is="<<authorid<<endl<<"Authorname is ="<<authorname<<endl<<"Published book"<<publishbook<<endl<<"Totalsoldbook is"<<totalsoldbook<<endl;	
	}
	void availablecopies(int pb,int soldbook)
	{
		int avlbook;
		avlbook=pb-soldbook;
		cout<<"Available copies is !"<<avlbook;
	}
};
