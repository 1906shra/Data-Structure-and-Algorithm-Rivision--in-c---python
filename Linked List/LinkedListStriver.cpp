#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
void insert(Node* &head ,int val){
   if(head == nullptr){
    head = new Node(val);
    
   }
   Node* temp = head;
   while(temp->next){
     temp = temp->next;
   }
   temp->next = new Node(val);
}

void display(Node* head){
    Node* temp = head;
    while(temp){
        cout<< temp->data << " ";
        temp = temp->next;

    }
}

void deleteAt(Node* &head,int c){
    if(head == nullptr)return;
       //insert at head
    if(head->data == c){
        Node* temp = head;
        head= head->next;
        delete temp;
        return;
    }
    Node* curr = head;
    Node* prev = nullptr;
    while(curr && curr->data!= c){
        prev = curr;
        curr = curr->next;
    }
    if(curr == nullptr){
        return;
    }
         //delete at tail
    if(curr->next == nullptr){
        prev->next = nullptr;
        delete curr;
        return; 
    }
    //delete at middle
    prev->next = curr->next;
    delete curr;
    return;
}
    
int main(){
    int n;
    
    int i =0;
    Node* head = nullptr;
    while(i!=-1){
          int a; 
          cin>>a;
          i = a;
          if(i == -1) break;
          insert(head,i);
    }

    cout << "Linked List: ";
    int c;
    cin>>c;
    deleteAt(head,c);
    display(head);

}
