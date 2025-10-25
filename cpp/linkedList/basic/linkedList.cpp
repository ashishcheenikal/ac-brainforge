#include <climits>
#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *nxtNode;

  Node(int val) {
    data = val;
    nxtNode = nullptr;
  }

  Node(int val, Node *newNode) {
    data = val;
    nxtNode = newNode;
  }
};

struct LinkedList {
private:
  Node *head;
  Node *tail;
  int size;

public:
  LinkedList() {
    size = 0;
    head = tail = nullptr;
  }

public:
  void unshift(int val) {
    Node *newNode = new Node(val);
    if ((head == nullptr) && (tail == nullptr)) {
      head = tail = newNode;
      size++;
      return;
    }
    newNode->nxtNode = head;
    head = newNode;
    size++;
    return;
  }

  void push(int val) {
    Node *newNode = new Node(val);

    if ((head == nullptr) && (tail == nullptr)) {
      head = tail = newNode;
      size++;
      return;
    }

    tail->nxtNode = newNode;
    tail = newNode;
    size++;
    return;
  }

  Node *getAtIndex(int index) {
    cout << "Get node at index "<< index << " of size "<<size<< endl;
    if (index < 0 or index > size - 1) {
      return nullptr;
    }
    if (index == 0) {
      cout << "Returning the Node value at index " << index << " is "
           << head->data << endl;
      return head;
    }
    if (index == size - 1) {
      cout << "Returning the Node value at index " << index << " is "
           << tail->data << endl;
      return tail;
    }
    Node *temp = head;
    for (int i = 0; i < index; i++) {
      temp = temp->nxtNode;
    }
    cout << "Returning the Node value at index " << index << " is "
         << temp->data << endl;
    return temp;
  }

  int shift() {
    cout << "SHIFT" << endl;
    if ((head == nullptr) && (tail == nullptr)) {
      return INT_MIN;
    }
    Node *temp = head;
    head = head->nxtNode;
    size--;
    int deletedVal = temp->data;
    delete (temp);
    return deletedVal;
  }

  int pop() {
    cout << "POP" << endl;
    if ((head == nullptr) && (tail == nullptr)) {
      return INT_MIN;
    }
    Node *temp = tail;
    tail = getAtIndex(size - 2);
    tail->nxtNode = nullptr;
    size--;
    int deletedVal = temp->data;
    delete (temp);
    return deletedVal;
  }

  int deleteAtIndex(int index) {
    cout << "DELETE AT INDEX " << index << " of size "<<size<< endl;
    if ((index < 0) or (index > (size - 1))) {
      return INT_MIN;
    }
    if ((head == nullptr) && (tail == nullptr)) {
      return INT_MIN;
    }
    if (index == 0) {
      return this->shift();
    }
    if (index == size - 1) {
      return this->pop();
    }
    Node *temp = getAtIndex(index - 1);
    Node *deleteNode = temp->nxtNode;
    temp->nxtNode = deleteNode->nxtNode;
    int deletedVal = deleteNode->data;
    delete (deleteNode);
    size--;
    return deletedVal;
  }

  void displayLinkedList() {
    Node *temp = head;
    while (temp) {
      cout << temp->data << "->";
      temp = temp->nxtNode;
    }
    cout << "--" << endl;
  }
};

int main() {
  LinkedList *list = new LinkedList();
  list->unshift(0);
  list->unshift(1);
  list->unshift(2);
  list->unshift(3);
  list->unshift(4);
  list->unshift(5);
  list->unshift(6);
  list->unshift(7);
  list->unshift(8);
  list->unshift(9);
  list->unshift(10);
  list->push(11);
  list->push(12);
  list->push(13);
  list->push(14);
  list->push(15);
  list->push(16);
  list->push(17);
  list->push(18);
  list->push(19);
  list->push(20);
  list->displayLinkedList();
  cout<< list->shift() << endl;
  list->displayLinkedList();
  cout << list->pop()  << endl;;
  list->displayLinkedList();
  cout<< list->deleteAtIndex(0) << endl;
  list->displayLinkedList();
  cout<< list->deleteAtIndex(5) << endl;
  list->displayLinkedList();
  cout<< list->deleteAtIndex(10) << endl;
  list->displayLinkedList();
  cout<< list->deleteAtIndex(15) << endl;
  list->displayLinkedList();
  cout<< list->deleteAtIndex(20) << endl;
  list->displayLinkedList();
}