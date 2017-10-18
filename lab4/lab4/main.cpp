//main.cpp
//Lab 4 part 1
//helpful tutorial used: https://www.youtube.com/watch?v=psJtcFpoUdY
//names: Lukas Fuller, Alan Morrison, William Wright, Sharon Blankenship, Will Varner
#include <cstdlib>
#include "List.hpp"
using namespace std;
int main(int argc, char **argv)
{
    //Creating the object Person
    List People;
    
    //Adding names
    People.AddPerson("Bob", "Joe");
    People.AddPerson("Joe", "Bob");
    People.AddPerson("Bill", "Walton");
    
    //Displaying the names in the list
    People.PrintList();
    
    //Displaying the error when the name isn't in the list
    People.DeletePerson("Generic", "Name");
    
    //Edit a person and display the result
    People.EditPerson("Bob", "Joe", "Max", "Scott");
    People.PrintList();
    
    
    //Deleting a current name and Displaying the list
    People.DeletePerson("Joe", "Bob");
    People.PrintList();
    return 0;
}
