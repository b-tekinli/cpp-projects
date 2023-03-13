#include <iostream>
#include <string>
using namespace std;


// heap'te tutulur.

struct Node {
    string data;
    Node* next;
};


void printList(Node* list) {
    while(list != NULL) {
        cout << list->data << "\n";
        list = list->next;
    }
}


int main() {

    Node* data1 = NULL;
    Node* data2 = NULL;
    Node* data3 = NULL;
    Node* data4 = NULL;
    Node* data5 = NULL;


    data1 = new Node();
    data2 = new Node();
    data3 = new Node();
    data4 = new Node();
    data5 = new Node();


    data1->data = "ilk node";
    data1->next = data2;

    data2->data = "ikinci node";
    data2->next = data3;

    data3->data = "ucuncu node";
    data3->next = data4;

    data4->data = "dorduncu node";
    data4->next = data5;

    data5->data = "besinci node";
    data5->next = NULL;

    printList(data1);

    return (0);
}
