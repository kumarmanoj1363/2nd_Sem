#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<" enter the number of vertices present in graphs "<<endl;
    cin>>n;
    char A[n];
    int C[n][n];
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
        C[i][j]=0;
    }
    }
    cout<<" enter the name of vertices "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<n;i++)
    {
        int d=0;
        cout<< " how many vertices are connected with "<< A[i]<<endl;
        cin>>d;
        char B[d];
        cout<< " enter the name of vertices connected with "<<A[i]<<endl;
        for(int k=0;k<d;k++)
        {
            cin>>B[k];
        }


         for(int j=0;j<n;j++)
    {
        for(int l=0;l<d;l++)
        {
            if(A[j]==B[l])
            {
                C[i][j]=1;

            }
        }
    }
    }
    int D[n][n],E[n][n];
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
        D[i][j]=0;
    }
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
        E[i][j]=0;
    }
    }
    int x=0,y=0,z=0;
    char q,w;
    cout<<endl<<" enter the length of path "<<endl;
    cin>>z;
    cout<<endl<<" enter starting vertix "<<endl;
    cin>>q;
    cout<<endl<<" enter ending vertix "<<endl;
    cin>>w;

    for(int i=0;i<n;i++)
    {
        if(A[i]==q)
        {
            x=i;
        }
        if(A[i]==w)
        {
        y=i;
        }
    }
    for(int l=1;l<z;l++)
    {
        if(l==1)
        {
            for(int i=0;i<n;i++)
            {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)

                {
                    D[i][j]=D[i][j]+C[i][k]*C[k][j];
                }
            }

            }
        }
        if(l%2==0)
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
        {
            E[i][j]=0;
        }
        }
                    for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                {
                    for(int k=0;k<n;k++)
                {
                    E[i][j]=E[i][j]+D[i][k]*C[k][j];
                }
            }

            }
        }
        if(l%2!=0&&l>1)
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
        {
            D[i][j]=0;
        }
        }
         for(int i=0;i<n;i++)
            {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)

                {
                    D[i][j]=D[i][j]+E[i][k]*C[k][j];
                }
            }

            }

        }

    }

    if(z%2==0)
    {
    for(int i=0;i<n;i++)
    {

    for(int j=0;j<n;j++)
    {
    cout<<D[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl<<" Total paths between vertix "<<q<<" and "<<w<<" are = "<<D[x][y];
    }
    else
    {
     for(int i=0;i<n;i++)
    {

    for(int j=0;j<n;j++)
    {
    cout<<E[i][j]<<" ";
    }
    cout<<endl;
    }
     cout<<endl<<" Total paths between vertix "<<q<<" and "<<w<<" are = "<<E[x][y];
    }

}
