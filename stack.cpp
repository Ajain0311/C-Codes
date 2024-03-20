#include<iostream>
#include<algorithm>
using namespace std;

#define max 5

class Stack{
public:
    int top = -1;
    int stack[max];

    void push(int n){
        if(top >= max - 1){
            cout<<"Stack overflow"<<endl;
        }
        else{
            top++;
            stack[top] = n;
        }
    }

    int pop(){
        if(top == -1){
            cout << "Stack underflow" << endl;
            return -1;
        }
        else{
            int n = top;
            top--;
            return stack[n];
        }
    }

    void display(){
        if (top == -1) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << "The stack contains: ";
            for(int i = 0; i <= top; i++){
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Stack obj;
    int n, opt;
    cout << "Performing Stack Operations: ";
    do{
        cout << endl;
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> opt;
        switch(opt){
            case 1: 
                cout << "Enter number: ";
                cin >> n;
                obj.push(n);
                break;
            case 2: 
                cout << obj.pop() << " popped" << endl;
                break;
            case 3: 
                obj.display();
                break;
        }
    }while(opt != 4);
    return 0;
}

