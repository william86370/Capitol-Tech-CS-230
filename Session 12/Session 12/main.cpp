
#include<iostream>
using namespace std;
#include "List.hpp"

int main()
{
    List myList;
    
    if (myList.IsEmpty())
        cout <<"List is empty!\n";
    
    myList.Insert(56.1);
    myList.Insert(20.8);
    myList.Insert(11.45);
    myList.Insert(16.3);
    myList.ResetList();
    if (myList.IsEmpty())
        cout <<"List is empty!\n";
    else
        cout <<"List is full!\n";
    
    while (myList.HasNext())
        cout <<"Item = "<<myList.GetNextItem()<<endl;
    myList.ResetList();
    
    myList.Delete(11.45);
    myList.ResetList();
    while (myList.HasNext())
        cout <<"Item = "<<myList.GetNextItem()<<endl;
    
    
    system("PAUSE");
    return 0;
}
