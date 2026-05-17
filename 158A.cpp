#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    int say=0;
for(int j=1; j<=n; j++){
    if(arr[j]==0){
        say+=0;
    }
    else if(arr[k]<=arr[j]){
        say++;
    }
}
cout<<say;

}
