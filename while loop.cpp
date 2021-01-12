#include<iostream>
using namespace std;
int main()
{ 
	int marks[5],sum=0;
	int j=1;
  while(j<=5)
  {  
    cin>>marks[j];
    cout<<"each multiplied by 5="<<marks[j]*5<<endl;
    sum=sum+marks[j];
	j++;
     
  }cout<<"sum of number="<<sum<<endl;
  cout<<"average of numbers="<<sum/5<<endl;
  
   
	
}
