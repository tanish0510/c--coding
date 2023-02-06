/*Employee Management system to demonstrate Class, Objects,Static Members and Friend Function
Author : Tanish Seth
Roll No. 104065
Div: 4
Batch: D4
DOI:- 23rd Jan 2023
*/
#include<iostream>
using namespace std;
class Employee
	{
	private:	
		string fname,lname,city;
		int empid;
		float TA,DA,basicsal,HRA,netsalary;

	public:
		void getdata();
		void showdata();
		void calsalary();
	};


	void Employee::getdata()

	{

		cout<<"\nEnter Employee Id:";
		cin>>empid;
		cout<<"\nEnter First Name:";
		cin>>fname;
		cout<<"\nEnter Last Name:";
		cin>>lname;
		cout<<"\nEnter Employee City:";
		cin>>city;
		cout<<"\nEnter Basic salary of an Employee:";
		cin>>basicsal;
	}

void Employee::calsalary()
	
	{
		TA=0.2*basicsal;
		DA=0.35*basicsal;
		HRA=0.25*basicsal;
		netsalary=basicsal+TA+DA+HRA;
		cout<<"\n Net Salary of an Employee is :"<<netsalary;
	}

void Employee::showdata()
	{
		cout<<"\nEnter Employee Id:"<<empid;
		cout<<"\nEnter Employee Name:"<<fname<<" "<<lname;
		cout<<"\nEnter Employee City:"<<city;
		cout<<"\n Basic Salary:"<<basicsal;
		cout<<"\n Travelling Allowance (TA):"<<TA;
		cout<<"\n Dearness Allowance (DA):"<<DA;
		cout<<"\n House Rent Allowance (HRA):"<<HRA;
		cout<<"\n Net Salary of an Employee is :"<<netsalary;
	}
int main()
	{
	cout<<"\n*******************************************";
	cout<<"\n EMPLOYEE INFORMATION MANAGEMENT SYSTEM";
	cout<<"\n*******************************************";
	cout<<"\n\n Enter Employee Information Below...";
	
	Employee emp1;
	emp1.getdata();
	emp1.calsalary();
	cout<<"\n Employee Information is as follows...";
	emp1.showdata();
	cout<<"\n End Of The Program";

	return 0;
	}

























