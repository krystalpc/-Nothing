#include<iostream>
#include "employee.h"

using namespace std;
namespace Records {
	Employee::Employee(const std::string& firstName, const std::string& lastName)
		:mFirstName(firstName), mLastName(lastName)
	{
	}

	void Employee::promote(int raiseAmount)
	{
		setSalary(getSalary() + raiseAmount);
	}

	void Employee::demote(int demeritAmount)
	{
		setSalary(getSalary() - demeritAmount);
	}
	void Employee::setSalary(int newSalary)
	{
		mSalary = newSalary;
	}
	void Employee::fire()
	{
		mHired = false;
	}
	void Employee::hire()
	{
		mHired = true;
	}
	void Employee::display() const
	{
		cout << "Employee:" << getLastName() << "," << getFirstName() << endl;
		cout << "-------------------" << endl;
		cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
		cout << "Employee Number:" << getEmployeeNumber() << endl;
		cout << "Salary: $" << getSalary() << endl;
		cout << endl;
	}
	void Employee::setEmployeeNumber(int empolyeeNumber)
	{
		mEmployeeNumber = empolyeeNumber;
	}
	void Employee::setFirstName(const string& firstName)
	{
		mFirstName = firstName;
	}
	void Employee::setLastName(const string& LastName)
	{
		mLastName = LastName;
	}
	const string& Employee::getFirstName() const
	{
		return mFirstName;
	}
	const string& Employee::getLastName() const
	{
		return mLastName;
	}
	int Employee::getEmployeeNumber() const
	{
		return mEmployeeNumber;
	}
	int Employee::getSalary() const
	{
		return mSalary;
	}
	bool Employee::isHired() const
	{
		return mHired;
	}



}
