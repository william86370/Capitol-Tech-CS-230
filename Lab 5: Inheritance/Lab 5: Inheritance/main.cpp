//testApp.cpp
//using the C++ standard library for sorting, URL-> http://www.cplusplus.com/reference/list/list/sort/
//names: Lukas Fuller, Alan Morrison, William Wright, Sharon Blankenship, & Will Varner

#include <cstdlib>
#include <iostream>
#include <string>
#include <list>
#include <cctype>
#include "Faculty.h"
#include "Staff.h"
#include "Student.h"
#include "Person.h"
#include "Person.cpp"

int main(int argc, char *argv[])
{
	//Creating a list for sorting
	std::list<std::string> sortedList;
    std::list<std::string>::iterator it;
	
	//Creating 3 students, staff, and faculty with 1 student included as a faculty
	Student *stu1 = new Student();
	Student *stu2 = new Student();
	Student *stu3 = new Student();
	Staff *staf1 = new Staff();
	Staff *staf2 = new Staff();
	Staff *staf3 = new Staff();
    Faculty *prof1 = new Faculty();
	Faculty *prof2 = new Faculty();
	Faculty *prof3 = new Faculty();
    
	//Students are done the slow way 
	stu1->setName("jiyn", "Williams");
    stu1->setID("1");
    stu2->setName("Harry", "Potter");
    stu2->setID("2");
    stu3->setName("turber", "Jones");
    stu3->setID("3");
	stu1->printPersonnelInfo();
	stu2->printPersonnelInfo();
	stu3->printPersonnelInfo();
	
	//Staff is done by Overriding the constructor
	staf1->setName("Barry", "Tucker");
	staf1->printPersonnelInfo("01");
	staf2->setName("Jennifer", "Catto");
	staf2->printPersonnelInfo("02");
	staf3->setName("Harry", "Potter");
	staf3->printPersonnelInfo("03"); //stu2 is also a member of staff, as set in the requirements
	
	
	//The rest are done by Overloading the constructor 
	//with each value to save the most space
	prof1->printPersonnelInfo("Drew", "Mehri", "001");
    prof2->printPersonnelInfo("Bob","Joe", "002");
    prof3->printPersonnelInfo("Joseph", "Snow", "003");
	
	//Add Items to Sorted List, Sort & Display
	sortedList.push_back("Mehri");
    sortedList.push_back("Bob");
    sortedList.push_back("Snow");
    sortedList.push_back("Tucker");
    sortedList.push_back("Catto");
    sortedList.push_back("Williams");
    sortedList.push_back("Potter");
    sortedList.push_back("Jones");
	sortedList.sort();
	
	std::cout << "\nSorted by last names:";
	for (it=sortedList.begin(); it!=sortedList.end(); ++it)
		std::cout << "\n" << *it;
	std::cout << "\n";
	
	//Remove records
	sortedList.remove("Tucker");
	sortedList.remove("Catto");
	sortedList.remove("Jones");
	std::cout << "\nAfter removing Tucker, Catto, and Jones" << std::endl;
	sortedList.sort();
	std::cout << "\nSorted by last names:";
	for (it=sortedList.begin(); it!=sortedList.end(); ++it)
		std::cout << "\n" << *it;
	std::cout << "\n";
	
    system("PAUSE");
    return EXIT_SUCCESS;
}
