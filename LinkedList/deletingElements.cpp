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
//removing head of ll
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* removeHead(Node* head) {
    if (head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

//removing the tail of a ll
Node* removeTail(Node* head){
    if(head == NULL && head -> next == NULL){
        return NULL; //it means the ll is empty
    }
    Node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = nullptr;

    return head;
}

//remove any element from the node
Node* removeK(Node* head, int k){
    if(head->data = k){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* previous = NULL;
    while(temp != NULL){
        if(temp->data == k){
            previous -> next = previous -> next -> next;
            delete temp;
            break;
        }
        previous = temp;
        temp = temp->next;
    }
    return head;
}

//remove element


int main() {
    vector<int> arr = {12, 5, 8, 7};

    Node* head = convertArr2LL(arr);

    head = removeHead(head);
    head = removeTail(head);

    print(head);
}
