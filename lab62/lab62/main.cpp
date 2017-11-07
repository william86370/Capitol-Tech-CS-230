#include "StackType.hpp"
#include "implementation.cpp"
#include <iostream>
//helpful YouTube video used for FIFO: https://www.youtube.com/watch?v=Tivs0ZjEgsw
//names: Lukas Fuller, Alan Morrison, William Wright, Sharon Blankenship, & Will Varner


int main()
{
    //LIFO
    StackType<int> stacc;
    
    stacc.Push(1);
    stacc.Push(2);
    stacc.Push(3);
    std::cout << stacc.Pop() << std::endl;
    
    //FIFO
    FIFO new_tail;
    string label;
    Node new_node;
    Node * aux;
    Node * getNode = new Node;
    int sel;
    
    do
    {
        cout << "Choose one of the following operations:\n\n";
        cout << "1 - Add an element to your TAIL;\n";
        cout << "2 - Print your queue;\n";
        cout << "3 - Get the last element;\n";
        cout << "4 - Remove the last element.\n";
        cout << "5 - Exit the Loop\n\n>>";
        
        cin >> sel;
        
        switch(sel)
        {
            case 1:
                cout << "Enter a label: ";
                cin >> label;
                new_node.label = label;
                new_tail.enqueue(new_node);
                cout << endl << endl;
                break;
            case 2:
                new_tail.print();
                cout << endl << endl;
                break;
            case 3:
                new_tail.getNode(getNode);
                cout << getNode -> label << endl << endl;
                break;
            case 4:
                new_tail.dequeue(getNode);
                cout << getNode -> label << endl << endl;
                break;
            case 5:
                cout << "\nBye!\n";
                break;
            default:cout << "ERROR! Invalid option\n";;
        }
    }while (sel != 5);
    
    system("PAUSE");
    return 0;
}

