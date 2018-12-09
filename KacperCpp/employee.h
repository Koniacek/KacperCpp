#pragma once
#include <string>
using namespace std;

class Employee
{
public:

	string Name;
	string Position;
	int Age;

	Employee(string _Name, string _Position, int _Age);

	friend ostream& operator<<(ostream&, const Employee);
};