#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rno;
	char name;
	double fee;
	public:
	student(int x,char y,double z)
	{
		rno=x;
		name=y;
		fee=z;
		
	}
	student(student &t)	 //copy constructor
	{
		rno=t.rno;
		name=t.name;
		fee=t.fee;
	}
	void display(){
			cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	}
	
};




//	student::student(int no,char n[],double f)
//	{
//		rno=no;
//		strcpy(name,n);
//		fee=f;
//	}
//
//void student::display()
//	{
//		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
//	}
//	
int main()
{
	student s(1001,'Manjeet',10000);
	s.display();
	
	student manjeet(s); //copy constructor called
	manjeet.display();
	
	return 0;
}

