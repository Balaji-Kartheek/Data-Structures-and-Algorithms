#include<iostream> 

#include<math.h> 

using namespace std; 

 
 
 

int top=-1; 

int arr[30]; 

int n=30;           // here n=10 represents the size of the array 

 
 

void push(int x){ 

    top++; 

    arr[top]=x; 

    cout<<"the push element is: "<<x<<endl; 

} 

 
 

void display(){ 

    for(int i=0;i<=top;i++){ 

        cout<<arr[i]<<" "; 

    }cout<<endl; 

} 

 
 

void pop(){ 

    cout<<"the pop element is: "<<arr[top]<<endl; 

    top--; 

} 

 
 

int peek(){ 

    return arr[top]; 

} 

 
 

void isempty(){ 

    if((top==-1)){ 

        cout<<"stack is empty"<<endl; 

    }else{ 

        cout<<"stack is not empty"<<endl; 

    } 

} 

 
 

void isfull(){ 

    if((top==n-1)){ 

        cout<<"stack is full"<<endl; 

    }else{ 

        cout<<"stack is not full"<<endl; 

    } 

} 

 
 
 

int postfixexp(string s){ 

    for(int i=0;i<s.length();i++){ 

        char c=s[i]; 

        if(c>='0' && c<='9'){ 

            push(c-'0'); 

        } 

        else{ 

            int op2 = peek(); 

            pop(); 

            int op1 = peek(); 

            pop(); 

 
 

            switch(c){ 

                case '+': 

                push(op1+op2); 

                break; 

 
 

                case '-': 

                push(op1-op2); 

                break; 

 
 

                case '*': 

                push(op1*op2); 

                break; 

 
 

                case '/': 

                push(op1/op2); 

                break; 

 
 

                case '^': 

                push(pow(op1,op2)); 

                break; 

 
 

                 

            } 

        } 

 
 

    } 

 
 

    return peek(); 

} 

 
 

// "4 6 + 2 / 5 * 7 +" 

 
 

int main(){ 

 
 

    cout<<"The value is: "<<postfixexp("46+2/5*7+")<<endl; 

    return 0; 

} 