#include<iostream>
using namespace std;
int main(){
    int n,r,temp,sum=0;
    cin>>n;
    temp=n;
    while(temp!=0){
        r = temp%10;
        sum = sum+r;
        temp = temp/10;
    }
   cout<<sum;
}

