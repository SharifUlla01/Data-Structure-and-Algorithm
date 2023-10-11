#include<iostream>
using namespace std;
int Binary_search(int arr[],int n,int key){
    int mid;
    int first = 0;
    int last = n-1;
    while(first<=last){

        mid=(first+last)/2;
        if(arr[mid]==key){
            return mid;                        //1,2 3 4,5,6    key=3
        }
        else if(arr[mid]<key){
            last = mid-1;
        }
        else{
            first = mid+1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    cout<<Binary_search(arr,n,key);
}
