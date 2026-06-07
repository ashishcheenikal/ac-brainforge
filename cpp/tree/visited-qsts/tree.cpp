#include <iostream>
#include <queue>
using namespace std;

struct Node {
  int val;
  Node *left;
  Node *right;

  Node(int data) {
    val = data;
    left = right = nullptr;
  }
};

Node *buildBT() {
  int val;
  cin >> val;
  if (val == -1)
    return nullptr;

  Node *node = new Node(val);

  cout << "Enter the value to left of " << node->val << endl;
  node->left = buildBT();

  cout << "Enter the value to right of " << node->val << endl;
  node->right = buildBT();

  return node;
}

void inorder(Node *root) {
  if (!root)
    return;
  inorder(root->left);
  cout << root->val << " ";
  inorder(root->right);
}

void displayTree(Node *root) {
  if (!root) {
    cout << "Tree is empty!" << endl;
    return;
  }

  queue<Node *> q;
  q.push(root);
  int level = 0;

  while (!q.empty()) {
    int size = q.size();
    cout << "Level " << level++ << ": ";

    for (int i = 0; i < size; i++) {
      Node *node = q.front();
      q.pop();

      if (node) {
        cout << node->val << " ";
        q.push(node->left);
        q.push(node->right);
      } else {
        cout << "null ";
      }
    }
    cout << endl;
  }
}

int main() {
  cout << "Enter the root Node:" << endl;
  cout << "Enter the root Node:" << endl;
  cout << "Enter the root Node:" << endl;
  Node *root = buildBT();
  cout << "\n DisplayTree Traversal: ";
  displayTree(root);
}
