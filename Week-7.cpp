#include<iostream>
using namespace std;
#define SIZE 5

class stack
{
    private : 
        int top;
        int st[SIZE];
    public :
        stack() {
            top = -1;
        }
    void push(int value)
    {
        if(isFull())
        {
            cout << "stack overflow" <<endl;
            return;
        }
        top++;
        st[top]=value;
        cout<<"Element pushed"<<endl;
        return;
    }
    void pop()
    {
        if(isEmpty())
        {
            cout << "stack underflow" << endl;
            return;
        }
        cout << "popped element: " << st[top] << endl;
        top--;
    }
    void peek()
    {
        if(isEmpty())
        {
            cout<<"stack underflow"<<endl;
            return;
        }
        cout<<"top element: "<<st[top];
        return;
    }
    bool isFull()
    {
        return (top == SIZE-1);
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    void display()
    {
        int i;
        if(isEmpty())
        {
            cout <<"stack is empty"<<endl;
            return;
        }
        cout <<"stack elements are: "<<endl;
        for(i=top;i>=0;i--)
        {
            cout << st[i]<<endl;
        }
        return;
    }
};

int main(){

    stack s;
    int choice, value;

    do{
        cout<<"\n----- STACK MENU -----"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peek"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            cout<<"Enter value: ";
            cin>>value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout<<"Exiting program..."<<endl;
            break;

        default:
            cout<<"Invalid choice"<<endl;
        }

    }while(choice != 5);

    return 0;
}