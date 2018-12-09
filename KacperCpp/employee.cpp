#include "employee.h"


Employee::Employee(string _Name, string _Position, int _Age)
{
	Name = _Name;
	Position = _Position;
	Age = _Age;
}

ostream& operator<<(ostream& out, const Employee& e)
{
	out << e.Name << ", Age: " << e.Age << ", Position: " << e.Position;
	return out;
}