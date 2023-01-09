#include<iostream>
#include<string.h>
using namespace std;



int arr[50];
int n = 50;
int top = -1;



void push(char t)
{
if(top >= n - 1)
{
cout<<"Stack overflow\n";
}
else{
arr[++top] = t;
}
}
char pop(){
if(top<0){
cout<<"Stack underflow"<<endl;
}
else{
char t = arr[top];
top--;
return t;
}
}
bool isEmpty(){
if(top<0){
return 1;
}
else{
return 0;
}
}



int prec(char c) {
if(c == '^')
return 3;
else if(c == '/' || c=='*')
return 2;
else if(c == '+' || c == '-')
return 1;
else
return -1;
}



void infixToPostfix(string s) {

string result;
int length = s.length();

for(int i = 0; i < length; i++) {
char c = s[i];
if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
result += c;
else if(c == '(')
push('(');

else if(c == ')') {
while(arr[top] != '(')
{
result += arr[top];
pop();
}
pop();  //to remove the '(' which is in the while condition
}

else {
while(!(isEmpty()) && prec(s[i]) <= prec(arr[top])) {
result += arr[top];
pop();
}
push(c);
}
}


// to add the remaining charactors which lasts upto '(1'
while(!(isEmpty())) {
result += arr[top];
pop();
}

cout << result << endl;
}

//Driver program to test above functions
int main() {

    string exp;
cout<<"Enter the Expression"<<endl;
cin>>exp;
infixToPostfix(exp);

return 0;
}