#include <iostream>
#include <list>
#include <vector>
using namespace std; 

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr) {
    if (arr.size() == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }


    return head;
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

//insert head
Node* insertHead(Node* head, int val){
    return new Node(val, head);
}

//insert element to the last
Node* insertLast(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp= temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}


int main() {
    vector<int> arr = {12, 5, 8, 7};

    Node* head = convertArr2LL(arr);

    head = insertHead(head, 100);
    head = insertLast(head, 100);

    print(head);
}
