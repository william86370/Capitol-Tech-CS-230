//
//  main.cpp
//  lab4
//
//  Created by william wright on 10/17/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

//main.cpp
#include<cstdlib>
#include "List.hpp"
using namespace std;

int main(int argc, char** argv){
    //Creating the list
    List People;
    
    //Adding names to the list
    People.addPerson("Bob", "Joe");
    People.addPerson("Joe", "Bob");
    People.addPerson("Bill", "Walton");
    
    //Displaying the names in the list
    People.printList();
    cout << "\n";
    
    //Displaying the error when the name isn't in the list
    People.deletePerson("Generic", "Name");
    cout << "\n";
    
    //Deleting a current name and Displaying the list
    People.deletePerson("Joe", "Bob");
    cout << "\n";
    People.printList();
    
    //Edit a person and display the result
    People.EditPerson("Bob", "Joe", "Max", "Scott");
    People.printList();

    return 0;
}


