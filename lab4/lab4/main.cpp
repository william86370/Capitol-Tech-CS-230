//
//  main.cpp
//  lab4
//
//  Created by william wright on 10/17/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

//main.cpp
#include<cstdlib>
#include "list.cpp"
using namespace std;

int main(int argc, char** argv){
    //Creating the list
    List People;
    
    //Adding names to the list
    People.AddPerson("Bob", "Joe");
    People.AddPerson("Joe", "Bob");
    People.AddPerson("Bill", "Walton");
    
    //Displaying the names in the list
    People.PrintList();
    cout << "\n";
    
    //Displaying the error when the name isn't in the list
    People.DeletePerson("Generic", "Name");
    cout << "\n";
    
    //Deleting a current name and Displaying the list
    People.DeletePerson("Joe", "Bob");
    cout << "\n";
    People.PrintList();
    return 0;
}


