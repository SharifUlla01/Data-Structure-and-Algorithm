#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num){
    for(int i =0;i<= sqrt(num);i++){
        if(num%2==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i;
        }
        cout<<endl;
    }
   return 0;
}
