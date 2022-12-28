 //Tower of Hanoi for n disks(Recursion application)
 
 
 #include<iostream>
 using namespace std;
 
 
 void towerOfHanoii(int n,char frompillar,char topillar,char auxpillar){
 	
 	if(n==1){
 		cout<<"Move Disk 1 from "<<frompillar<<" to "<<topillar<<endl;
 		return;
 				
	 }
	 towerOfHanoii(n-1,frompillar,auxpillar,topillar);
	
 	cout<<"Move Disk "<<n<<" from "<<frompillar<<" to "<<topillar<<endl;
 	towerOfHanoii(n-1,auxpillar,topillar,frompillar);
 }
 
 int main(){
 	
 	cout<<"My name is Balaji Kartheek (200968080) \n";
 	
 	
 	int n;  			// n is the number of disks
 	cout<<"Enter the number of disks: "<<endl;
 	cin>>n;
 	
 	
 	towerOfHanoii(n,'A','C','B');
 	
 	return 0;
 }
 
