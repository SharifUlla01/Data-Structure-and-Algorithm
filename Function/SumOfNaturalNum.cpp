#include<iostream>
using namespace std;
int sum(int n){
    int totalsum = n*(n+1)/2;
    return totalsum;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}
