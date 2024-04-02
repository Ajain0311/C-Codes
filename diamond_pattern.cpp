#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

void delay(int milliseconds){
    this_thread::sleep_for(chrono::milliseconds(milliseconds));
}
void pattern(int n)
{
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        for(int j=n-i;j<n;j++){
            cout<<"  ";
        }
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
        delay(300);
    }
    for(int i=0;i<n/2;i++){
        for(int j=n/2-i;j<=n;j++){
            cout<<"*";
        }
        for(int j=i;j<n/2-1;j++){
            cout<<"  ";
        }
        for(int j=n/2-i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
        delay(300);
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
