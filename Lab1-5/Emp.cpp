#include <iostream>
using namespace std;

struct Employee{
	char employee_name[30];
	int employee_ID;
	char job_title[30];
	int hours_worked;
	int amount_of_pay;
	int monthly_salary;
};
int main ()
{
	Employee p;
	cout<<"Enter the employee's name: ";
	cin.get(p.employee_name, 30);
	cout<<"Enter the employee's id: ";
	cin>>p.employee_ID;
	cout<<"Enter the employee's job title: ";
	cin.get(p.job_title, 30);
	cout<<"Enter the employee's hours worked: ";
	cin>>p.hours_worked;
	cout<<"Enter the employee's amount of pay per hour: ";
	cin>>p.amount_of_pay;
	
	p.monthly_salary=p.hours_worked*p.amount_of_pay;
	cout<<"the employee's monthly salary is: "<<p.monthly_salary<<endl;
	
	return 0;
}
