//
//  main.cpp
//  question1d
//
//  Created by Abhishek Raj on 02/02/18.
//  Copyright © 2018 Abhishek Raj. All rights reserved.
//
#include<iostream>
using namespace std;
class queue{//creation of class
    int arr[100];
    int top;
public:
    queue(){
        top = -1;
    }
    void push(int val){
        if(top>=100){
            cout<<"Stack overflow\n";
        }
        if(top == -1){
            top++;
            arr[top] == val;
        }
        else
            if(top>-1){
                int i = 0;
                for(i = top;i>=0;i--){
                    arr[i+1] = arr[i];
                }
                arr[0] = val;
                top++;
            }
    }
    void pop(){
        if(top = -1){
            cout<<"Stack underflow\n";
        }
        else
            top--;
    }
    void display(){//display of elements
        int i = 0;
        for(i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    queue ob;
    int val,j=0,i=0;
    while(j!=9){
        cout<<"Enter 1 for push,2 for pop,3 for display, 4 to exit\n";
        cin>>i;
        if(i==1){
            cout<<"Enter a value\n";
            cin>>val;
            ob.push(val);
        }
        if(i==2){
            ob.pop();
        }
        if(i==3){
            ob.display();
        }
        if(i==4){
            j = 9;
        }
        
    }
}
