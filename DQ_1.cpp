#include<iostream>
using namespace std;
#include<conio.h>
#include<process.h>
int main()
{
void dublicaty(int a[],int n);
void search(int a[],int n);
void cardanility(int a[], int n);
void powerset(int a[],int n);
int arr[20],i,n,ch;
cout<<"\n enter the size of set";
cin>>n;
cout<<"\n enter the number of element in the set";
for(i=0;i<n;i++)
 cin>>arr[i];
 cout<<" \n ****MENU***";
 cout<<"\n 1. To find unique elements in the set";
 cout<<"\n 2. For checking an element member ship with value return";
 cout<<"\n 3. to determine the cardanality of the set";
 cout<<"\n 4.to find power set of given set";
 cout<<"\n 5. to exit from application";
 cout<"\n\n";
 cout<<"\n enter your choice";
 cin>>ch;
 switch(ch)
 {
	 case 1: dublicaty(arr,n);
				break;
	 case 2: search(arr,n);
				break;
	 case 3: cardanility(arr,n);
				break;
	 case 4: powerset(arr,n);
				break;
	 case 5: exit(2);
	 default : cout<<"\n INVALID CHOICE !!!!!!!!!!!";
 }
 cout<<"\n THANKS  FOR USING !!!!!";
 cin.get();
 return 1;
}
 void dublicaty(int a[],int n)
 {
	
	int i,j,k;
	for(i=0;i<n;i++)
	{
	 for(j=i+1;j<n;j++)
		{
		if(a[i]==a[j])
		{
			 for(k=j;k<n-1;k++)
				 {
				 a[k]=a[k+1];

				 }
				 n=n-1;
		 }

		 }
	  }
		 cout<<"\n descrete elements \n";
		 for(i=0;i<n;i++)
		 cout<<a[i];
 }
 void search(int a[],int n)
 {
	
	int i,num,ar[20],k=0;
	cout<<"\n enter the number whose memembersghip you want ton search";
	cin>>num;
	for(i=0;i<n;i++)
	{
	  if(a[i]==num)
	  {
		  ar[k]=i+1;
		  k++;
	  }
	 }
	 if(k!=0)
	 {
		cout<<"\n menber ship of "<<num<<"is present at places \n";
		for(i=0;i<k;i++)
		  cout<<ar[i]<<" ";
	 }
	 else
		cout<<"\n menpership of "<<num<<" not present";
 }
 void cardanility(int a[],int n)
 {
	

 }
 void powerset(int a[],int m)
 {
  int i,j;
  for(i=0;i<m;i++){
  	int sum=0,size = 0,q=1,n=0;
  	if(i>0){
  		for(j=1;j<m-i;j++)
  		  size = size + j;
	  }
	  else
	    size = m;
	  for(j=0;j<size;j++){
	  	if(j>0)
	  	  cout<<",";
	  	cout<<"{";
	int p=0,ind =0,Q=0;
	if(q==m){
		n++;
		q=n;
		q++;
	}
	if(i==0)
	  cout<<a[j];
	else
	  cout<<a[n];
	while(p<i){
		cout<<",";
		cout<<a[q++];
		if(p==0)
		 ind = q-1;
		p++;
		if(q==m)
		  Q=1;  
	}    	  
	if(Q==0)
	  for(int k=0;k<m;k++){
	  	if(a[ind]==a[k]){
	  		q=k+1;
	  		break;
		  }
	  }  
	  cout<<"}";
	  }
	  cout<<endl;
  }
 }
