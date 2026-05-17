#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int say=0;
    for(int i=0; i<n; i++){
            string s;
        cin>>s;
     if(s[1]=='+'){
        say++;
     }
     else if(s[1]=='-'){
        say--;
     }
    }

    cout<<say;
}
