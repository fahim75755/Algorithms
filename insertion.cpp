#include<bits/stdc++.h>
using namespace std;

//insertion sort (backward steps)
int main(){
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){

        for(int j=i;j>0;j--){

            if(v[j-1]>v[j]) swap(v[j-1],v[j]);
            else break;
        }
    }

    for(auto u:v)
    cout<<u<<" ";
    cout<<endl;

}