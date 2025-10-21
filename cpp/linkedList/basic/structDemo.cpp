#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* nxtNode = nullptr;
};

int main(){

Node* head = new Node;
head->value = 10;
Node* temp = new Node;
head->nxtNode = temp;
temp->value = 20;
Node* temp1 = new Node;
temp->nxtNode = temp1; 
temp1->value = 30;
temp1->nxtNode = head;

cout << head->nxtNode->nxtNode->nxtNode->value;
}