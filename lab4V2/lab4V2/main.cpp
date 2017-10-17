//
//  main.cpp
//  lab4V2
//
//  Created by william wright on 10/17/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#include <cstdlib>
#include <list>
#include <string>
#include <cctype>
#include "List.hpp"
using namespace std;

int main(int argc, char** argv){
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
    for (it=sortedList.begin(); it!=sortedList.end(); ++it)
        std::cout << "\n" << *it;
    std::cout << "\n";
    
    return 0;
}

