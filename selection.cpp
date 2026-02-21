#include<bits/stdc++.h>
using namespace std;


//selection sort (by finding smallest value)
int main(){
    int n,min;
    cin>>n;
    
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        min=i;

        for(int j=i+1;j<n;j++){
            if(v[j]<v[min]) min=j;
        }
        swap(v[min],v[i]);
    }

    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;
}
