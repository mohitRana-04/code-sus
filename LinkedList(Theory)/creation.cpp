#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    // address = NULL
    Node* next;
};
int main()
{
    // setting address to NULL
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* third1 = NULL;
    Node* third2 = NULL;

    // now creating nodes so that they get Null address
    head = new Node();
    second = new Node();
    third = new Node();
    third1 = new Node();
    third2 = new Node();

    // head data = 1 and its storing address is address of second
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    third1->data = 3;
    third1->next = NULL;


    third2->data = 3;
    third2->next = NULL;


    // here head is th address not the data
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }


return 0;
}