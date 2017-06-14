#include<iostream>
using namespace std;
class Set
{
public:
    bool Subset(int *t,int y,int *l,int p)
    {
        int k=0;
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(l[i]==t[j])
                    k++;
            }
        }
        if(k==p)
            return true;
        else
            return false;
    }
    void uniona(int *t,int y,int *l,int p,int *g)
    {
        int m=0;
       for(int i=0;i<y;i++)
       {
           g[i]=t[i];
           m++;
       }

       for(int i=0;i<p;i++)
       {
           g[m]=l[i];
           m++;
       }
       for(int i=0;i<m;i++)
       {
           for(int j=i+1;j<m;)
           {
               if(g[i]==g[j])
               {
                   for(int k=j;k<m;k++)
                   {
                       g[k]=g[k+1];
                   }
                   m=m-1;
               }
               else
                j++;
           }
       }
       for(int i=0;i<m;i++)
       {
           cout<<g[i]<<" ";
       }
    }
    void intersection(int *t,int y,int *l,int p)
    {
        for(int i=0;i<y;i++)
        {
            for(int j=0;j<p;j++)
            {
                if(t[i]==l[j])
                   {
                   cout<<t[i]<<" ";
                   }
            }
        }

    }
    void complement(int *t,int y,int *l,int p)
    {
        int k;
        for(int i=0;i<y;i++)
        {
            k=0;
            for(int j=0;j<p;j++)
            {
                if(t[i]==l[j])
                {
                   k++;
                }
            }
            if(k==0)
                cout<<t[i]<<" ";
    }
    }
    void setdifference(int *t,int y,int *l,int p)
    {
       int k;
        for(int i=0;i<y;i++)
        {
            k=0;
            for(int j=0;j<p;j++)
            {
                if(t[i]==l[j])
                {
                   k++;
                }
            }
            if(k==0)
                cout<<t[i]<<" ";
    }
    }
    void symmetric(int *t,int y,int *l,int p)
    {
        int k;
        for(int i=0;i<y;i++)
        {
            k=0;
            for(int j=0;j<p;j++)
            {
                if(t[i]==l[j])
                {
                   k++;
                }
            }
            if(k==0)
                cout<<t[i]<<" ";
    }

        for(int i=0;i<p;i++)
        {
            k=0;
            for(int j=0;j<y;j++)
            {
                if(l[i]==t[j])
                {
                   k++;
                }
            }
            if(k==0)
                cout<<l[i]<<" ";
    }

    }
    void cartesian(int *t,int y,int *l,int p)
    {
        cout<< " { ";
        for(int i=0;i<y;i++)
        {
            for(int j=0;j<p;j++)
            {
                cout<<" ( "<<t[i]<<" , "<<l[j]<<" ) "<< "  , ";
           }
           cout<<endl;
        }
        cout<<endl<<" } ";
    }
};
int main()
{
    Set s;
    char g;
    bool x,y,z,w;
    int n,c;
    cout<<" enter the size of universal set "<<endl;
    cin>>n;
    int U[n];
    cout<<endl<<" enter the elements in universal set"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>U[i];
    }
    int m;
    cout<<endl<<" enter the size of set A "<<endl;
    cin>>m;
    int A[m];
        cout<<endl<<" enter the elemnts in SET A"<<endl;
        for(int i=0;i<m;i++)
        {
            cin>>A[i];
        }
        int o;
    cout<<endl<<" enter the size of set B "<<endl;
    cin>>o;
    int B[o];
        cout<<endl<<" enter the elemnts in SET B"<<endl;
        for(int i=0;i<o;i++)
        {
            cin>>B[i];
        }
        int un[m+o];
    do
    {
        cout<<endl<<" press 1 TO USE SUBSET ";
        cout<<endl<<" press 2 to get union OF A and B";
        cout<<endl<<" press 3 to get intersection of A and B";
        cout<<endl<<" press 4 to get Complement of A and B ";
        cout<<endl<<" press 5 to get Set Difference of A and B";
        cout<<endl<<" press 6 to get Symmetric difference of A and B";
        cout<<endl<<" press 7 to get Cartesian Product of A and B";
        cout<<endl;
        cin>>c;
        cout<<endl;
        switch(c)
        {
        case 1:
           x=s.Subset(U,n,A,m);
           y=s.Subset(U,n,B,o);
           z=s.Subset(A,m,B,o);
           w=s.Subset(B,o,A,m);
           if(x==true)
            cout<<endl<<" yes A is subset of U ";
           else
            cout<<endl<<" no A is not a SUBSET OF U";
           if(y==true)
            cout<<endl<<" yes B is subset of U ";
           else
            cout<<endl<<" no B is not a SUBSET OF U";
            if(z==true)
            cout<<endl<<" yes B is subset of A ";
           else
            cout<<endl<<" no B is not a SUBSET OF A";
            if(w==true)
            cout<<endl<<" yes A is subset of B ";
           else
            cout<<endl<<" no A is not a SUBSET OF B";
            break;
        case 2:
            cout<<endl<<" union of SET A and B is "<<endl;
            s.uniona(A,m,B,o,un);
            break;
        case 3:
            cout<<endl<<" intersection of A and B is "<<endl;
            s.intersection(A,m,B,o);
            break;
        case 4:
            cout<<endl<<" complement of SET A is "<<endl;
            s.complement(U,n,A,m);
            cout<<endl<<" complement of SET B is "<<endl;
            s.complement(U,n,B,o);
            break;
        case 5:
            cout<<endl<<" set difference of A is " <<endl;
            s.setdifference(A,m,B,o);
            cout<<endl<<" set difference of B is "<<endl;
            s.setdifference(B,o,A,m);
            break;
        case 6:
            cout<<" Symmetric difference of A andB is "<<endl;
            s.symmetric(A,m,B,o);
            break;
        case 7:
            cout<<" cartesian product of A to B is "<<endl;
            s.cartesian(A,m,B,o);
            cout<<endl<<" cartesian product of B to A is "<<endl;
            s.cartesian(B,o,A,m);
            break;
        default:
            cout<<" choose correct option"<<endl;
        }
        cout<<endl<<"to continue press c"<<endl;
        cin>>g;
    }
    while(g=='c'||g=='C');
}
