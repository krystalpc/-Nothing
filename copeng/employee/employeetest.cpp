#include<iostream>
#include"employee.h"

using namespace std;
using namespace Records;

int main()
{
	cout << "Test the Employee class " << endl;
	Employee emp;
	emp.setFirstName("zhangsan");
	emp.setLastName("lisi");
	emp.setEmployeeNumber(71);
	emp.setSalary(50000);
	emp.promote();
	emp.promote(50);
	emp.hire();
	emp.display();
	return 0;
}	
