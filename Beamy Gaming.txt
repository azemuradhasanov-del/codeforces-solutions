#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int say1=0;
int arr[100];
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>1){
            say1++;
        }
    }
    cout<<say1;
}
