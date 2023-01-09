#include<iostream>
#include<stack>
using namespace std;


void checkparanthesis(string exp){
    stack<char> stack;      // we use <char> bcoz we store charactors in the stack

    for(int i=0;i<exp.length();i++){
        char c = exp[i];
        if(c=='[' || c=='{' || c=='('){
            stack.push(c);
        }else if(c==')'){
            if(!(stack.empty()) && (stack.top()=='(')){
                stack.pop();
            }else{
                cout<<"Given expression is not paranthesized"<<endl;
                exit(0);
            }
        }else if(c=='}'){
            if(!(stack.empty()) && (stack.top()=='{')){
                stack.pop();
            }else{
                cout<<"Given expression is not paranthesized"<<endl;
                exit(0);
            }
        }else if(c==']'){
            if(!(stack.empty()) && (stack.top()=='[')){
                stack.pop();
            }else{
                cout<<"Given expression is not paranthesized"<<endl;
                exit(0);
            }
        }
    }
    if(stack.empty()){
        cout<<"Given expression is a paranthesized"<<endl;
    }else{
        cout<<"Given expression is not a paranthesized"<<endl;
    }
}

int main(){
    string exp;
    cout<<"Enter the paranthesized expression: "<<endl;
    cin>>exp;

    checkparanthesis(exp);
    return 0;
}



