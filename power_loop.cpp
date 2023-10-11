#include<iostream>
using namespace std;
double power(double num,int exponent=2){
int i = abs(exponent);
double result = 1;
    
while (i){
 result *= num;
 i -=1;
}
if(exponent<0){
    result = 1/result;
}
return result;
}
int main(){
int num,exponent;
cout<<"enter a number : (Default exponent value is 2)"<<endl;
cin>>num;
cout<<num<<" ^ "<<"2"<<"= "<<power(num)<<endl;
cout<<"enter a number : "<<endl;
cin>>num;
cout<<"enter the exponent of number "<<endl;
cin>>exponent;
cout<<num<<" ^ "<<exponent<<"= "<<power(num,exponent)<<endl;
return 0;
}
