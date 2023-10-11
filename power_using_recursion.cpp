#include<iostream>
#include<math.h>
using namespace std;
double recursive_power(double num,int exponent=2){
if(exponent==0){
    return 1;
}
if(exponent < 0){
    return (float)1/recursive_power( num,abs(exponent));
}
if(exponent ==1){
    return num;
}
    return num*recursive_power(num,--exponent);
}
int main(){
int num,exponent;
cout<<"enter a number : (Default exponent value is 2)"<<endl;
cin>>num;
cout<<num<<" ^ "<<"2"<<"= "<<recursive_power(num)<<endl;
cout<<"enter a number : "<<endl;
cin>>num;
cout<<"enter the exponent of number "<<endl;
cin>>exponent;
cout<<num<<" ^ "<<exponent<<"= "<<recursive_power(num,exponent)<<endl;
return 0;
}
