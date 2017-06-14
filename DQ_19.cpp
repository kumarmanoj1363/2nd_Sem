#include<iostream>
using namespace std;
int main(){
	int arr[10][10];
	int i,j;
	char a[10];
	int n;
	cout<<"\n enter the number of vertex \n";
	cin>>n;
	cout<<"\n enter the vertex in alphabets \n";
	for(i=0;i<n;i++)
	  cin>>a[i];
	cout<<"\n connect graph's vertex wit no of edges \n";
	int num;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
		{
			cout<<"\n enter number of edges to connect vertex "<<a[i]<<" and "
			 <<a[j];
			 cin>>num;
			 arr[i][j]=num;
			 arr[j][i]= num;
		}
	}  
	for(i=0;i<n;i++){
		arr[i][i]=0;
	}
	int count,flag=0 ;
	for(i=0;i<n;i++){
		count =0;
		for(j=0;j<n;j++){
			if(i!=j){
				count = count+arr[i][j];
			}
		}
		if(count%2==1)
		   flag++;
	}
	count/=2;
	if(flag == 0)
	   cout<<"\n graph has eulars circit \n";
	else if(flag==2)  
	   cout<<"\n graph has eular path \n";
	else
	   cout<<"\n graph nither has eular circle nor eular path \n it is a tree";    
	
}

