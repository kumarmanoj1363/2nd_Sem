#include<iostream>
using namespace std;
int main(){
	void towers(int,char,char,char);
	int n;
	char a,b,c;
	cout<<"\n enter the number of disk \n";
	cin>>n;
	cout<<"\n enter the source \n";
	cin>>a;
	cout<<"\n enter the destination \n";
	cin>>b;
	cout<<"\n enter the auxilary \n";
	cin>>c;
	towers(n,a,b,c);
	cin.get();
	return 1;
}
void towers(int numDisks,char source,char dest,char auxiliary){
	static int step =0;
	if(numDisks == 1)
	    cout<<"\t\t\t\tStep "<<++step<<":Move from "<<source<<" to "<<dest<<endl;
	else
	  {
	  	 towers(numDisks-1,source,auxiliary,dest);
	  	 cout<<"\t\t\t\tSteps "<<++step<<": Move from "<<source<<" to "<<dest<<endl;
	  	   towers(numDisks-1,auxiliary,dest,source);
	  	   
		  } 
		  return ;  
}
