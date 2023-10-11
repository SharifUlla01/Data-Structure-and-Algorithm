#include<iostream>
using namespace std;
/*int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            cout<<"*";
        }
     cout<<endl;
    }

}
*/
int main(){
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row||j==1 || j==col){
                cout<<"*";
            }

            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
