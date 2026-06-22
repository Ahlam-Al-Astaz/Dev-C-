#include<iostream>
using namespace std;
int main(){
int absolute;
cout<<"please enter the numder"<<endl;
cin>>absolute;
//cout<<((absolute>=0)?absolute:absolute*-1);
if(absolute>=0)
cout<<absolute;
else 
cout<<absolute*-1;
return 0;
} 
