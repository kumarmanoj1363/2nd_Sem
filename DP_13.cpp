#include<iostream>
#include<cstdlib>
using namespace std;


int Conjunction(int a,int b,int c,int d,int e,int f,int g,int h);
int Disjunction(int a,int b,int c,int d,int e,int f,int g,int h);
int Exclusive_OR(int a,int b,int c,int d,int e,int f,int g,int h);
int Conditional(int a,int b,int c,int d,int e,int f,int g,int h);
int Bi_Conditional(int a,int b,int c,int d,int e,int f,int g,int h);
int Exclusive_NOR(int a,int b,int c,int d,int e,int f,int g,int h);
int Negation(int a,int b,int c,int d,int e,int f,int g,int h);
int NAND(int a,int b,int c,int d,int e,int f,int g,int h);
int NOR(int a,int b,int c,int d,int e,int f,int g,int h);



int main()
{
    int a,b,c,d,e,f,g,h, n;
    cout<<"        CHOOSE THE OPTION :- ";
    cout<<"      \n1.Conjunction :";
    cout<<"      \n2.Disjunction :";
    cout<<"      \n3.Exclusive_OR :";
    cout<<"      \n4.Conditional :";
    cout<<"      \n5.Bi_Conditional :";
    cout<<"      \n6.Exclusive_NOR :";
    cout<<"      \n7.Negation :";
    cout<< "     \n8.NAND ";
    cout<<"      \n9.NOR ";
    cout<<"\n";
    //TRUTH VALUE IS TO BE ENTERED IN THE FORM OF 0 AND 1
    cout<<"====================================================================================";
    cout<<"\n";
     cin>>n;
    cout<<"\n";
     cout<<"\nEnter the TRUTH value  of x and y:";
    cout<<"\n FALSE=0 and  TRUE=1\n";
    cout<<"\n Enter the first combination:\n";
    cin>>a>>b;
    cout<<"\nEnter the second combination:\n";
    cin>>c>>d;
    cout<<"\nEnter the third combination: \n";
    cin>>e>>f;
    cout<<"\nEnter the fourth combination: \n";
    cin>>g>>h;
    cout<<endl;
    cout<<"========================================================================\n";
    if((a&&b&&c&&d&&e&&f&&g&&h)!=0||1)
    {

        cout<<"Invalid entry";
        exit(1);
    }
    else
    switch(n)
    {
    case 1:
        Conjunction(a,b,c,d,e,f,g,h);
        break;
    case 2:
        Disjunction(a,b,c,d,e,f,g,h);
        break;
    case 3:
        Exclusive_OR(a,b,c,d,e,f,g,h);
        break;
    case 4:
        Conditional(a,b,c,d,e,f,g,h);
        break;
    case 5:
            Bi_Conditional(a,b,c,d,e,f,g,h);
            break;
    case 6:
            Exclusive_NOR(a,b,c,d,e,f,g,h);
            break;
    case 7:
            Negation(a,b,c,d,e,f,g,h);
            break;
    case 8:
            NAND(a,b,c,d,e,f,g,h);
            break;
    case 9:
            NOR(a,b,c,d,e,f,g,h);
            break;
        default:
            cout<<"\nWrong choice entered ";
    }
   return 0;
}


int Conjunction(int a,int b,int c,int d,int e,int f,int g,int h)
{
    cout<<"Conjunction Table:\n";
    if(a==1 && b==1)

        cout<<a<<" "<<b<<" "<< "\n1";

    else
        cout<<a<<" "<<b<<" "<<"0"<<endl;



        if(c==1 &&d==1)


            cout<<c<<" "<<d<< " " <<"1";

        else
            cout<<c<<" "<<d<< " " <<"0"<<endl;





           if(e==1 && f==1)

        cout<< e<<" "<<f<<" "<<"1";

    else
        cout<<e<<" "<<f<<" "<<"0"<<endl;


        if(g==1 &&h==1)


            cout<<g<<" "<<h<<" "<<"1";

    else
            cout<<g<<" "<<h<<" "<<"0"<<endl;

}



int Disjunction(int a,int b,int c,int d,int e,int f,int g,int h)
{
     cout<<"Disjunction Table:\n";
 if(a==0 && b==0)

        cout<<a<<" "<<b<<" "<<"\n0";

    else
        cout<<a<<" " <<b<<" " <<"1"<<endl;



        if(c==0 &&d==0)


            cout<<c<<" " <<d<<" "<<"\n0";

        else
            cout<<c<<" "<<d<<" "<<"\n1"<<endl;


           if(e==0 && f==0)

        cout<<e<<" "<<f<<" "<<"\n0";

    else
        cout<<e<<" "<<f<<" "<<"\n1"<<endl;



        if(g==0 &&h==0)


            cout<<g<<" "<<h<<" "<<"\n0";

        else
            cout<<g<<" "<<h<<" "<<"\n1"<<endl;



}


int Exclusive_OR(int a,int b,int c,int d,int e,int f,int g,int h )
{
 cout<<"Exclusive_OR Table:\n";

      if((a==0 && b==0) && ( a==1 && b==1))

        cout<<a<<" "<<b<<" "<<"\n0";


    else
         cout<<a<<" " <<b<<" " <<"1"<<endl;



        if((c==0 && d==0) && ( c==1 && d==1))


             cout<<c<<" " <<d<<" "<<"\n0";

        else
             cout<<c<<" " <<d<<" "<<"\n1"<<endl;


           if((e==0 && f==0) && ( e==1 && f==1))

        cout<<e<<" "<<f<<" "<<"\n0";

    else
         cout<<e<<" "<<f<<" "<<"\n1"<<endl;



        if((g==0 && h==0) && ( g==1 && h==1))


             cout<<g<<" "<<h<<" "<<"\n0";

        else
             cout<<g<<" "<<h<<" "<<"\n1"<<endl;


}



int Conditional(int a,int b,int c,int d,int e,int f,int g,int h)
{
 cout<<"Conditional Table:\n";


        if(a==1 && b==0)

         cout<<a<<" "<<b<<" "<<"\n0";

    else
          cout<<a<<" " <<b<<" " <<"1"<<endl;


        if(c==1 &&d==0)


          cout<<c<<" " <<d<<" "<<"\n0";

        else
            cout<<c<<" " <<d<<" "<<"\n1"<<endl;


           if(e==1 && f==0)

        cout<<e<<" "<<f<<" "<<"\n0";

    else
        cout<<e<<" "<<f<<" "<<"\n1"<<endl;




        if(g==1 &&h==0)

           cout<<g<<" "<<h<<" "<<"\n0";


        else
             cout<<g<<" "<<h<<" "<<"\n1"<<endl;




}



int Bi_Conditional(int a,int b,int c,int d,int e,int f,int g,int h)
{
 cout<<"Biconditional Table:\n";


      if((a==0 && b==0) && ( a==1 && b==1))

          cout<<a<<" "<<b<<" "<<"\n1";

    else
         cout<<a<<" " <<b<<" " <<"0"<<endl;




        if((c==0 && d==0) && ( c==1 && d==1))


             cout<<c<<" " <<d<<" "<<"\n1";

        else
             cout<<c<<" " <<d<<" "<<"\n0"<<endl;



           if((e==0 && f==0) && ( e==1 && f==1))

         cout<<e<<" "<<f<<" "<<"\n1";


    else
        cout<<e<<" "<<f<<" "<<"\n0"<<endl;



        if((g==0 && h==0) && ( g==1 && h==1))


            cout<<g<<" "<<h<<" "<<"\n1";

        else
              cout<<g<<" "<<h<<" "<<"\n0"<<endl;

}



int Exclusive_NOR(int a,int b,int c,int d,int e,int f,int g,int h)
{

    cout<<"\nExclusive_NOR table\n";

 if((a==0 && b==0) && ( a==1 && b==1))

          cout<<a<<" "<<b<<" "<<"\n1";

    else
         cout<<a<<" " <<b<<" " <<"0"<<endl;




        if((c==0 && d==0) && ( c==1 && d==1))


             cout<<c<<" " <<d<<" "<<"\n1";

        else
             cout<<c<<" " <<d<<" "<<"\n0"<<endl;



           if((e==0 && f==0) && ( e==1 && f==1))

         cout<<e<<" "<<f<<" "<<"\n1";


    else
        cout<<e<<" "<<f<<" "<<"\n0"<<endl;



        if((g==0 && h==0) && ( g==1 && h==1))


            cout<<g<<" "<<h<<" "<<"\n1";

        else
              cout<<g<<" "<<h<<" "<<"\n0"<<endl;

}



int Negation(int a,int b,int c,int d,int e,int f,int g,int h)
{
     cout<<"Negation Table:\n";

    if (a==0)
        cout<<a<<" "<<"\n1";
        else
            cout<<a<<" "<<"\n0";

             if (b==0)
        cout<<b<<" "<<"\n1";
        else
            cout<<b<<" "<<"\n0";


             if (c==0)
        cout<<c<<" "<<"\n1";
        else
            cout<<c<<" "<<"\n0";


             if (d==0)
        cout<<d<<" "<<"\n1";
        else
            cout<<d<<" "<<"\n0";


             if (e==0)
        cout<<e<<" "<<"\n1";
        else
            cout<<e<<" "<<"\n0";


             if (f==0)
        cout<<f<<" "<<"\n1";
        else
            cout<<f<<" "<<"\n0";


             if (g==0)
        cout<<g<<" "<<"\n1";
        else
            cout<<g<<" "<<"\n0";


             if (h==0)
        cout<<h<<" "<<"\n1";
        else
            cout<<h<<" "<<"\n0";



}



int NAND(int a,int b,int c,int d,int e,int f,int g,int h)
{
 cout<<"NAND Table:\n";

 if(a==1 && b==1)

        cout<<a<<" "<<b<<" "<< "\n0";

    else
        cout<<a<<" "<<b<<" "<<"1"<<endl;



        if(c==1 &&d==1)


            cout<<c<<" "<<d<< " " <<"0";

        else
            cout<<c<<" "<<d<< " " <<"1"<<endl;





           if(e==1 && f==1)

        cout<< e<<" "<<f<<" "<<"0";

    else
        cout<<e<<" "<<f<<" "<<"1"<<endl;


        if(g==1 &&h==1)


            cout<<g<<" "<<h<<" "<<"0";

    else
            cout<<g<<" "<<h<<" "<<"1"<<endl;
}



int NOR(int a,int b,int c,int d,int e,int f,int g,int h)
{
 cout<<"NOR Table:\n";
if(a==0 && b==0)

        cout<<a<<" "<<b<<" "<<"\n1";

    else
        cout<<a<<" " <<b<<" " <<"0"<<endl;



        if(c==0 &&d==0)


            cout<<c<<" " <<d<<" "<<"\n1";

        else
            cout<<c<<" "<<d<<" "<<"\n0"<<endl;


           if(e==0 && f==0)

        cout<<e<<" "<<f<<" "<<"\n1";

    else
        cout<<e<<" "<<f<<" "<<"\n0"<<endl;



        if(g==0 &&h==0)


            cout<<g<<" "<<h<<" "<<"\n1";

        else
            cout<<g<<" "<<h<<" "<<"\n0"<<endl;


}
