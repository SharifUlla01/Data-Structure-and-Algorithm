#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
        int i,j,temp;
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    temp=a[j+1];
                }
            }
        }
    }

int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];

 }
 bubble_sort(a,n);


 for(int i=0;i<n;i++){
    cout<<a[i] <<" ";
 }
 cout<<endl;
}
