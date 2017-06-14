#include<iostream>
using namespace std;
int main(){
	int fact(int);
	int permutation ;
	int combination;
	int n;
	int r;
	cout<<"\n enter the value of (n,r) for finding permutation and combination \n";
	cin>>n;
	cin>>r;
	permutation = (fact(n))/(fact(n-r));
	combination = permutation/fact(r);
	cout<<"\n value of (n,r) permutation = "<<permutation<<endl;
	cout<<"\n value of (n,r) combination = "<<combination<<endl;
	cin.get();
	return 1;
}
int fact(int n){
	if(n==1)
	  return 1;
	else 
	return (n*fact(n-1));  
}
