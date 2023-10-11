#include<iostream>
using namespace std;
int main(){
    int date;
    cin>>date;
    int pocket_money = 30000;
    for(date=1;date>=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocket_money==0){
            break;
        }

    }
    cout<<"go out today"<<endl;
    pocket_money = pocket_money-300;
   return 0;
}
