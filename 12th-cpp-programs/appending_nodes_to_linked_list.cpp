/*
    Write a C++ program to create linked list and append nodes into the linked list.
*/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class linklist
{
private:
    struct node
    {
        int data;
        node *link;
    } *start;

public:
    linklist();
    void put();
    void append(int item);
    void ct();
};

linklist::linklist()
{
    start = NULL;
}

void linklist::put()
{
    if (start == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    cout << "List contains: ";
    node *temp = start;
    while (temp != NULL)
    {
        cout << temp->data << setw(4);
        temp = temp->link;
    }
    cout << endl;
}

void linklist::append(int item)
{
    node *n;
    n = new node;
    n->data = item;
    n->link = NULL;

    if (start == NULL)
    {
        start = n;
        cout << item << " is inserted as the first node." << endl;
        return;
    }
    else
    {
        node *temp = start;
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = n;
        cout << item << " is inserted." << endl;
    }
}

void linklist::ct()
{
    int c = 0;
    node *temp;
    for (temp = start; temp != NULL; temp = temp->link)
        c++;
    cout << "The number of nodes in the linked list is: " << c << endl;
}

int main()
{
    linklist *ob = new linklist();
    ob->put();
    ob->append(10);
    ob->put();
    ob->ct();
    ob->append(20);
    ob->put();
    ob->ct();
    ob->append(30);
    ob->put();
    ob->ct();
    return 0;
}

/*
    Output:
        Linked list is empty
        10 is inserted as the first node.
        List contains: 10
        The number of nodes in the linked list is: 1
        20 is inserted.
        List contains: 10   20
        The number of nodes in the linked list is: 2
        30 is inserted.
        List contains: 10   20   30
        The number of nodes in the linked list is: 3
*/