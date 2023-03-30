#include "projekt.h"
#include <string>
#include <sstream>
using namespace std;


projekt::projekt(string name, string surname, int age)
{
	set_name(name);
	set_surname(surname);
	set_age(age);
}

string projekt::get_name()
{
	return name;
}

string projekt::get_surname()
{
	return surname;
}

int projekt::get_age()
{
	return age;
}

void projekt::set_name(string name)
{
	this->name = name;
}

void projekt::set_surname(string surname)
{
	this->surname = surname;
}

void projekt::set_age(int age)
{
	this->age = age;
}

string projekt::to_string()
{
	stringstream ss;
	ss << "Name: " << name << "Surname: " << surname;
	return ss.str();
}
