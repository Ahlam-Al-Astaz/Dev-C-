#include<iostream>
using namespace std;
int main(){
int gender;
cout<<"please enter gender"<<endl;
cin>>gender;
switch(gender)
{
case 1:cout<<"male"<<endl;
break;
case 2:cout<<"female"<<endl;
break;
default:cout<<"error"<<endl;
};
return 0;
}
