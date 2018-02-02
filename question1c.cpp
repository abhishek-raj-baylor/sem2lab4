//
//  main.cpp
//  question1c
//
//  Created by Abhishek Raj on 02/02/18.
//  Copyright © 2018 Abhishek Raj. All rights reserved.
//

#include <iostream>
using namespace std;
class stackLL{
    int arr[100];
    int top;
public:
    stackLL(){
        top = -1;
    }
    void push(int val){
        if(top>=100){
            cout<<"Stack overflow\n";
        }
        else{
            top++;
            arr[top] = val;
        }
    }
    void pop()
    {
        if(top == -1){
            cout<<"Stack underflow\n";
        }
        else{
            top--;
        }
    }
    void display()
    {
        int n = 0;
        while(arr[n]<=arr[top]){
            cout<<arr[n]<<" ";
            n++;
        }
        cout<<endl;
    }
};
int main(){
    stackLL ob;
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
            j = 9;
        }
    }
}
