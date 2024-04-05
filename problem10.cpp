#include <iostream>

using namespace std;

class Node{
public:
    int value;
    Node *next;
    Node(){
        value=0;
        next=NULL;
    }
    Node(int val){
        value=val;
        next=NULL;
    }
};

class LinkedList{
    Node *head;
public:
    LinkedList(){
        head=NULL;
    }
    LinkedList(int val){
        head = new Node(val);
    }
    void printAll(){
        if(head==NULL){
            return;
        }
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
  
    void insertBack(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        }
        else{
            Node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    
    void deleteFront(){
        head=head->next;
    }
    
    
    int size(Node* current=NULL){
        if(!current){
            return 0;
        }
        return 1 + size(current->next);
    }
    
    int max(){
        if(head==NULL){
            return 0;
        }
        int max_val = head->value;
        Node *temp = head->next;
        while(temp!=NULL){
            if(temp->value>max_val){
                max_val=temp->value;
            }
            temp=temp->next;
        }
        return max_val;
    }
    
    int min(){
        if(head==NULL){
            return 0;
        }
        int min_val = head->value;
        Node *temp = head->next;
        while(temp!=NULL){
            if(temp->value<min_val){
                min_val=temp->value;
            }
            temp=temp->next;
        }
        return min_val;
    }
    
    int first(){
        if(head==NULL){
            return 0;
        }
        return head->value;
    }
    
    void insert_at_position(int val, int pos){
        Node *newNode = new Node(val);
        if(pos<=0){
            return;
        }
        else if(pos==1){
            newNode->next = head;
            head = newNode;
        }
        else{
            Node* temp = head;
            for(int i=1;i<pos-1;i++){
                temp=temp->next;
            }
            if(temp==NULL){
                return;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    
    void delete_at_position(int pos){
        if(pos<=0){
            return;
        }
        else if(pos==1){
            Node* temp=head;
            head = head->next;
            delete temp;
        }
        else{
            Node* temp = head;
            for(int i=1;i<pos-1;i++){
                temp=temp->next;
            }
            if(temp==NULL){
                return;
            }
            
            Node* to_delete=temp->next;
            temp->next=to_delete->next;
            delete to_delete;
        }
    }
    
    
    void delete_duplicates(Node* current=NULL){
        if(!current){
            current=head;
        }
        if(current->next){
            if(current->value==current->next->value){
                Node* temp=current->next;
                current->next=current->next->next;
                delete temp;
                delete_duplicates(current);
            }
            else{
                delete_duplicates(current->next);
            }
        }
    }
    
    int length(){
        return size(head);
    }
    
    void delete_all(Node* current=NULL){
        if(!current){
            current=head;
        }
        cout<<current->value<<" is deleted"<<endl;
        Node* next_node=current->next;
        
        
        if(current->next){
            current->next=NULL;
            delete current;
            delete_all(next_node);
        }
    }
    
};


int main() {
    LinkedList l1;
    int value;
    
    while(cin>>value){
        l1.insertBack(value);
    }
    l1.delete_all();
    return 0;
}
