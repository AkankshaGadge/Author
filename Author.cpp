#include<iostream>
#include "Author.h"
using namespace std;

int main()
{
	Author a1;
	a1.display();
	a1.availablecopies(12,7);
	
      cout<<"--------------------";
	
	Author a2(13,"Das",10,7);
	a2.display();
	a2.availablecopies(10,7);
	
}

