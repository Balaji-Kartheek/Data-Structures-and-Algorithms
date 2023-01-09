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
cout<<"The Pop element is: "<<t<<endl;
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



void infixToPrefix(string s) {

string result;
int length = s.length();

for(int i = length-1; i >=0; i--) {
char c = s[i];
if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
result += c;
else if(c == ')')
push(')');

else if(c == '(') {
while(arr[top] != ')')
{
result += arr[top];
pop();
}
pop();
}

else {
while(!(isEmpty()) && prec(s[i]) < prec(arr[top])) {
result += arr[top];
pop();
}
push(c);
}
}



while(!(isEmpty())) {
result += arr[top];
pop();
}

cout<<"The prefix Expression is: ";
for(int i=length-1;i>=0;i--){
    cout<<result[i];
}cout<<endl;
}

//Driver program to test above functions
int main() {

string exp;
cout<<"enter the Expression: "<<endl;
cin>>exp;

infixToPrefix(exp);

return 0;
}
