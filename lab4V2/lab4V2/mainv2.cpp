//mainV2.cpp
//Lab 4 part 2
//using the C++ standard library, URL-> http://www.cplusplus.com/reference/list/list/sort/
//names: Lukas Fuller, Alan Morrison, William Wright, Sharon Blankenship, & Will Varner
#include <cstdlib>
#include <list>
#include <string>
#include <cctype>
#include "Listv2.hpp"
using namespace std;

int main(int argc, char **argv)
{
    //Creating the list
    List People;
    //creating a list for sorting
    std::list<std::string> sortedList;
    std::list<std::string>::iterator it;
    
    //Adding names to the list
    People.AddPerson("Bonny", "Johana");
    People.AddPerson("Bob", "Joe");
    People.AddPerson("Bill", "Walton");
    People.AddPerson("Francis", "Waldo");
    
    //Displaying the names in the list
    People.PrintList();
    //Displaying the error when the name isn't in the list
    People.DeletePerson("Generic", "Name");
    
    //Edit a person and display the result
    People.EditPerson("Bob", "Joe", "Max", "Scott");
    People.PrintList();
    
    //Deleting a current name and Displaying the list
    People.DeletePerson("Bob", "Joe");
    People.PrintList();
    
    People.AddPerson("Bob", "Joe");
    People.PrintList();
    
    //Adding the last names to be sorted (adding joe back as well)
    sortedList.push_back("Johana");
    sortedList.push_back("Joe");
    sortedList.push_back("Walton");
    sortedList.push_back("Waldo");
    
    //Sort and Display
    sortedList.sort();
    std::cout << "Sorted by last names:";
    for (it = sortedList.begin(); it != sortedList.end(); ++it)
        std::cout << "\n"
        << *it;
    std::cout << "\n";
    
    return 0;
}
