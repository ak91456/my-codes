#include<iostream>
using namespace std;
class stack{
    private:
    int top;
    int *arr;
    int n;
    public:
    stack(){
        n=10;
        top=-1;
        arr=new int[n];
    }
    ~stack(){
        delete arr;
    }
    bool isfull(){
        if(top>=n){
            return true;
        }
        return false;
    }
    bool isempty(){
        if(top<0){
            return true;
        }
        return false;
    }
    bool push(int val){
        top+=1;
        if(isfull()){
            cout<<"the stack is full"<<endl;
            return false;
        }
        arr[top]=val;
        return true;
    }
    
    int pop(){
        if(isempty()){
            cout<<"stack empty"<<endl;
        }
        int x=arr[top--];
        return x;
    }
    int attop(){
        if(isempty()){
            cout<<"stack empty"<<endl;
            return 0;
        }
        return arr[top];
    }
    int size(){
        return top;
    }
};
int main(){
    stack a;
    a.push(1);
    a.pop();
    a.pop();
    a.pop();
    cout<<a.attop();
}