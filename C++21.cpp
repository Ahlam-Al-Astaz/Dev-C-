#include<iostream>
using namespace std;
int main(){
int x,y;
char sign;
cout<<"please enter number of x"<<endl;
cin>>x;
cout<<"please enter number of y"<<endl;
cin>>y;
cout<<"please enter sign"<<endl;
cin>>sign;
switch(sign){
case '+':cout<<x+y;
break;
case '-':cout<<x-y;
break;
case '*':cout<<x*y;
};
return 0;
}
