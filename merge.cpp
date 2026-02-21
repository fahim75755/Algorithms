#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v, int l,int mid,int r){
    vector<int>v1;
    int left=l;
    int right=mid+1;

    while(left<=mid && right<=r){
        if(v[left]<=v[right]) {
            v1.push_back(v[left]);
            left++;
        }
        else {
            v1.push_back(v[right]);
            right++; 
        }
    }
    while(left<=mid){
        v1.push_back(v[left]);
        left++;
    }
    while(right<=r){
        v1.push_back(v[right]);
        right++;
    }
    for(int i=l;i<=r;i++){
        v[i]=v1[i-l];//v1 values ber krte eta kora hoy..last step er age v1 v theke choto thake
    }
}
//ekdom last step e v1 r v same hoy..tkhn basically v1 ta cpy hye v te jay

void ms(vector<int> &v,int l,int r){
    if(l==r) return;

    int mid=(l+r)/2;
    ms(v,l,mid);
    ms(v,mid+1,r);
    merge(v,l,mid,r);
}

int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ms(v,0,n-1);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout <<endl;
}