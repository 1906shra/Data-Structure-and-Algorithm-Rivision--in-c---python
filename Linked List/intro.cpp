#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insert(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    cout<<endl;
}
node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* nex;
    while(curr!=NULL){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return prev;
}
node* kreverse(node* &head,int val){
    int c=0;
    node* pre=NULL;
    node* cu=head;
    node* ne;
    while(cu!=NULL &&c<=val){
        ne=cu->next;
        cu->next=pre;
        pre=cu;
        cu=ne;
        c++;
    }
    if(ne!=NULL){
        
    
    head->next=kreverse(ne,val);
    }
    return pre;
}
int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    display(head);
    node* he=reverse(head);
    display(he);
    int k=2;
    node* kr=kreverse(head,k);
    display(kr);
    
}
