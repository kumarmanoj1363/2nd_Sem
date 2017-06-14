#include<iostream.h>
#include<conio.h>

void main ()
{	clrscr();
	int n,f=1;
	char arr[10];int a[10][10];
	cout<<"Enter the total no.of vertices(maximum 10): "<<endl;
	cin>>n;
	cout<<"\n Enter the name of vertices in alphabets... "<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"You've Entered the following vertices: "<<endl;
	for(i=0;i<n;i++)
	{ cout<<arr[i]<<"  ";
	 }
	 cout<<"\n";
	 for(int j=0;j<n;j++)
	 { cout<<arr[j]<<" \n";
	 }

	 cout<<"\n Now Enter the details of the graph"<<endl;
	 cout<<"\n Connect the graph by entering 1 or 0 wherever required..:"<<endl;
	 for(i=0;i<n;i++)
	 {
	 for(j=0;j<n;j++)
	 {
	 cout<<"For the vertex "<<arr[i]<<" and "<<arr[j]<<endl;
	 cin>>a[i][j];
	 }
	 }
	cout<<"your is graph is like as follows..."<<endl;
	 for(i=0;i<n;i++)
	 {cout<<arr[i]<<"  ";
	 }
	 cout<<endl;
	 for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	  {
	  cout<<a[i][j]<<"  ";
	  }
	  cout<<arr[i]<<endl;
	  }
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	  { if(i!=j&&a[i][j]!=1)
	    {  f=0;
	       break;
	    }
	  }
	}
	if(f==1)
	cout<<"the graph is a complete one....!"<<endl;
	else
	cout<<"the graph is incomplete!!!!!!!!";
	getch();
}


