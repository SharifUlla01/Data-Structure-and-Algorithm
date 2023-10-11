#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
         int counter = 0;
         for(int j=i;j<n;j++){
         counter+=arr[j];
         cout<<counter;
         cout<<endl;
        }
    }
}
