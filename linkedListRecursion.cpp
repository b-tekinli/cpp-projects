#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printList(Node *list)
{
    if (list != NULL)
    {
        cout << list->data << "\n";
        printList(list->next);
    }
}

int main()
{
    Node *data1 = NULL;
    Node *data2 = NULL;
    Node *data3 = NULL;

    data1 = new Node();
    data2 = new Node();
    data3 = new Node();

    data1->data = 1;
    data1->next = data2;

    data2->data = 2;
    data2->next = data3;

    data3->data = 3;
    data3->next = NULL;

    printList(data1);

    return (0);
}