//
//  main.cpp
//  lab4
//Lukas Fuller, William Wright, Sharon Blankenship, Alan Morrison, Will Varner

//main.cpp
#include<cstdlib>
#include "list.hpp"
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
    return 0;
}


