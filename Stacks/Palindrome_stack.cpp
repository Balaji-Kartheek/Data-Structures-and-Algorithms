#include<iostream>
using namespace std;

char arr[50];
int top = -1,front=0;

void push(char c){
	top++;
	arr[top] = c;
}

void pop(){
	top--;
}



int main(){
	int flag;
	cout<<"My name is Balaji Kartheek (200968080) \n";
	cout<<"Flag -> 1 implies execute the program"<<endl;
	cout<<"Flag -> 0 implies exit the program"<<endl;
	
	
	string s;
	int n=0;
	char b;
	
	while(true){
		
		cout<<"Enter the Flag value: ";
		cin>>flag;
		n=0;
		top=-1;
		front=0;
		
		switch(flag){
			case 1:
				cout<<"Enter the string : "<<endl;
				cin>>s;
				for(int i=0;s[i]!='\0';i++){
					n++;
					b = s[i];
					push(b);
				}
				cout<<"size of string "<<s<<" : "<<n<<endl;
				
				for(int i=0;i<n/2;i++){
					
					if(arr[top]==arr[front]){
						pop();
						front++;
						
					}else{
						cout<<"The string is not a pallindrone "<<endl;
						break;
					}	
				}
				
				if(front==(n/2)){
					cout<<"The string is pallindrone"<<endl;
					top=-1;
					front=0;
					break;
				}
				
			 	break;
			case 2:
				cout<<"End of the program "<<endl;
				exit(0);
			default:
				cout<<"Enter the valid Input: "<<endl;
				break;	
		
		}
	}
	
	
	
	return 0;
}


