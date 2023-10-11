#include<iostream>
using namespace std;
int fact(int n){
    int factorial = 1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        cout<<fact(i)/(fact(j)*fact(i-j));
        }
        cout<<endl;
    }
    return 0;




}


/*
1
11
121
1331
14641

*/
