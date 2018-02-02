//
//  main.cpp
//  question1a
//
//  Created by Abhishek Raj on 02/02/18.
//  Copyright © 2018 Abhishek Raj. All rights reserved.
//
#include <iostream>
using namespace std;
struct node{//declaring data structure of node type. Each element of stack will be of this data type
    int data;
    node*next;
};
class stackLL{
    node*top;//keeps track of latest element to enter stack
public:
    stackLL(){
        top = NULL;//default constructor that intialises empty stack
    }
    void push(int val){
        node*temp = new node;
        temp->data = val;//data is stored in node temp
        if(top == NULL){
            temp->next = NULL;
            top = temp;//temp is part of stack
        }
        else
        {
            temp->next = top;
            top = temp;//top is equal to the last element to be added to stack
        }
    }
    void pop(){
        if(top == NULL){
            cout<<"Stack is empty\n";
        }
        node*temp = new node;
        temp = top;
        top = top->next;//top moves down to next element in stack
        delete temp;//last element of stack is deleted without losing any links in the linked list
    }
    void display(){//displays the element
        if(top == NULL){
            cout<<"No elements exist in the stack\n";
        }
        node*temp = new node;
        temp = top;
        while(temp!= NULL){
            cout<<temp->data<<"->";
            temp = temp->next;//temp keeps moving down stack
        }
        cout<<"->NULL"<<endl;
    }
};
int main(){
    stackLL ob;
    int val,i,j = 0;//val = the value of data stored in element of stack, i is to choose which function is to be performed on stack, j lets you have a condition to exit while loop
    while(j!=9){
        cout<<"For push press 1, for pop press 2, for display pree 3, to exit press 9\n";
        cin>>i;
        if(i == 1){
            cout<<"Enter a value\n";
            cin>>val;
            ob.push(val);
        }
        if(i == 2){
            ob.pop();
        }
        if(i == 3){
            ob.display();
        }
        if(i == 9){
            j = 9;
        }
    }
    }
