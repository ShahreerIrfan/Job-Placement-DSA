#include<bits/stdc++.h>
using namespace std;
void solve (int n,int arr[]){
    int max = 0;
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i =0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<(max-min)<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++)cin>>arr[i];
        solve(n,arr);
    }
}