#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&v , int start ,int end){
    int pivot=v[start];
    int l=start;
    int r=end;
    while(l<r){
        while(v[l]<=pivot && l<end){//is -1 or +1 needed
            l++;
        }
        while(v[r]>pivot && r>start){
            r--;
        }
        if(l<r) swap(v[l],v[r]);
    }
    swap(v[start],v[r]);
    return r;
}
void qs(vector<int>&v, int start ,int end){
    if(start<end){
        int Index=partition(v,start,end);
        qs(v,start,Index-1);
        qs(v,Index+1, end);
    }
}
int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    qs(v,0,n-1);
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}