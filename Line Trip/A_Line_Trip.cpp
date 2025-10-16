#include <bits/stdc++.h>
using namespace std;
int lineTrip(vector<int>arr,int x,int n){
    int pumpDist=arr[0];
    
    for(int i=1;i<n;i++){
        pumpDist= max(pumpDist,arr[i]-arr[i-1]);
    }
    int returnDist = 2*(x-arr[n-1]);
    int ans= max(pumpDist,returnDist);
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<lineTrip(arr,x,n)<<endl;
    }
    return 0;
}