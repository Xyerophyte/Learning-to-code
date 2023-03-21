#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

 // Upper Half of Diamond
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
  
  // Lower Half of Diamond
    for(int i=n;i>=1;i--){
        for(int j=(n-i);j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=i;j>=2;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
