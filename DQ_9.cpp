#include<iostream>
using namespace std;
int main(){
	int a[10],i,j,k,n,temp,count=0,flag=0;
	cout<<"\n enter the size of array \n";
	cin>>n;
	cout<<"\n enter the elements in the array \n";
	for(i=0;i<n;i++)
	  cin>>a[i];
	  for(i=1;i<n;i++){
	  	k=i-1;
	  	temp = a[i];
	  	flag=0;
		  while(a[k]>=temp && k>=0){
		  	  a[k+1]=a[k];
			  k--;
			  flag++;
		  }
		  
		  a[k+1]= temp;
		  if(flag!=0)
		    count+=flag;
		    else 
		    count++;
	  }
	cout<<"\n: sorted array \n";
	for(i=0;i<n;i++)
	  cout<<a[i]<<endl;
	  cout<<"\n number of comparison ="<<count;
	  cin.get();
	  return 1;
}
