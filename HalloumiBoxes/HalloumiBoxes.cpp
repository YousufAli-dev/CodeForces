#include<bits/stdc++.h>
using namespace std;
void halloumi(vector<int> &arr,int k,int n){
    if(k==1){
        bool sorted = is_sorted(arr.begin(),arr.end());
        cout<< (sorted? "YES\n" : "NO\n");
    }
    else{
        cout<<"YES"<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        halloumi(arr,k,n);
    }
}
