#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin>>y;
    for(int i=0; i<y; i++){
    string n;
    cin>>n;
    int x=n.size()-2;
    if(n.size()>10){
        cout<<n[0];
        cout<<x<<n[n.size()-1]<<endl;
    }
    else{
            for(char x:n){
                cout<<x;
            }
            cout<<endl;
    }
    }
}
