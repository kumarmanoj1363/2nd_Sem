#include<iostream>
using namespace std;
int main(){
	int a[10],i,j,temp,count=0,n;
	cout<<"\n enter the size of array";
	cin>>n;
	cout<<"\n enter the elements in the array :\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			count++;
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"\n your sorted array : \n";
	for(i=0;i<n;i++)
	  cout<<a[i]<<endl;
	  cout<<"\n number of comparisions ="<<count;
	cin.get();
	return 1;
	  
 }

