//Person.cpp
#include <iostream>
#include "Person.h"
#include "Faculty.h"

Person::Person()
{

    fname = "";
    lname = "";
    id = "";
    email = "";
    dob = "";
    date_hired = "";
    termination_date = "";
    title = "";
}
Person::Person(std::string pk)
{

    fname = "";
    lname = "";
    id = pk;
    email = "";
    dob = "";
    date_hired = "";
    termination_date = "";
    title = "";
}


void Person::setName(std::string f, std::string l)
{
    fname = f;
    lname = l;
}
void Person::setID(std::string pk) { id = pk; }
void Person::setEmail(std::string em) { email = em; }
void Person::setTitle(std::string t) { title = t; }
void Person::setStartDate(std::string dh) { date_hired = dh; }
void Person::setTerminationDate(std::string td) { termination_date = td; }
void Person::setDateOfBorth(std::string db) { dob = db; }

void Person::printPersonnelInfo()
{
    std::cout << "Name: " << fname << " " << lname << 
			     "\nID:   " << id << std::endl;
}
void Person::printPersonnelInfo(std::string newID)
{
	Person::setID(newID);
    std::cout << "Name: " << fname << " " << lname << 
			     "\nID:   " << id << std::endl;
}
void Person::printPersonnelInfo(std::string newFName, std::string newLName, std::string newID)
{
	Person::setName(newFName, newLName);
	Person::setID(newID);
    std::cout << "Name: " << fname << " " << lname << 
			     "\nID:   " << id << std::endl;
}
