#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"\n enter the degree of polynomial \n";
	cin>>n;
	int *ptr;
	ptr = new int[n+1];
	int i;
	for(i=0;i<=n;i++){
		cout<<"\n enter the coffecient of "<<(n-i)<<" degree x \n";
		cin>>ptr[i];
	}
	cout<<"\n\n polynomial \n \n";
	for(i=0;i<=n;i++){
		cout<<ptr[i]<<"X^"<<(n-i);
		if((n-i)!=0)
		  cout<<"+";
	}
	cout<<"\n enter the value of X whose value you want ti find \n";
	int x;
	cin>>x;
	double value=0;
	for(i=0;i<=n;i++){
		value = value + ptr[i]*pow((double)x,(double)(n-i));
	}
	cout<<"\n value of function "<<value;
}

