#include<iostream>
using namespace std;
int main()
{
int n=0;
cout<< " enter the number of vertices "<<endl;
cin>>n;
cout<<endl<<" enter the name of vertices"<<endl;
char A[n];
for(int i=0;i<n;i++)
{
    cin>>A[i];
}

int C[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
                C[i][j]=0;
    }
}
    for(int i=0;i<n;i++)
    {
    cout<<endl<<" For vertix "<<A[i]<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<endl<<"Enter how many edges is pointed from "<<A[i]<<" to "<<A[k]<<endl;
        cin>>C[i][k];
    }

    }

    for(int i=0;i<n;i++)
    {
    cout<<endl<<endl<<"  FOR VERTIX "<<A[i]<<endl;
        int x=0,y=0;
        for(int j=0;j<n;j++)
        {
            y=y+C[i][j];
            x=x+C[j][i];
        }
        cout<<" outdegree is = "<<y;
        cout<<endl<<" indegree is = "<<x;

    }
}
