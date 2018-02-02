//
//  main.cpp
//  question1b
//
//  Created by Abhishek Raj on 02/02/18.
//  Copyright © 2018 Abhishek Raj. All rights reserved.
//


#include <iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
class queue{
    node*first;
    node*head;
public:
    queue(){
        first = NULL;
        head = NULL;
    }
    void push(int val){
        node*temp = new node;
        temp->data = val;
        if(first == NULL){
            first = temp;
            head = temp;
            head->next = NULL;
        }
        else{
            head->next = temp;
            head = temp;
            temp->next = NULL;
        }
    }
    void pop(){
        node*temp = new node;
        temp = first;
        first = first->next;
        delete temp;
    }
    void display(){//display the elements
        node*temp = new node;//create a temperory node
        temp = first;
        cout<<temp->data<<" ";
        while(temp->next!=NULL){
            temp = temp->next;
            cout<<temp->data<<" ";
            
        }
        cout<<endl;
    }
    
    
};
int main(){
    queue ob;//creation of an object of class
    int val,in,j=0;
    while(j!=9){
        cout<<"Enter 1 for push,2 for pop,3 for display,4 to exit\n";
        cin>>in;
        if(in==1){
            cout<<"Enter a value\n";
            cin>>val;
            ob.push(val);
        }
        if(in==2){
            ob.pop();
        }
        if(in==3){
            ob.display();
        }
        if(in==4){
            j=9;
        }
    }
}
