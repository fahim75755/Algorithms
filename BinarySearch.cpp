#include<bits/stdc++.h>
using namespace std;

//coder army 
//ascending order sorted , 0 base index
void binary (vector<int>&ar,int n,int key){

    int start =0; 
    int end =n;
    int mid;

    while(start<=end){
        mid =start + (end-start)/2;
        if(ar[mid]==key){
            cout<<mid<<endl;
            exit(0);
        }
        else if(ar[mid]<key){
            start = mid+1;
        }
        else 
            end=mid-1;
    }

    cout<<"-1"<<endl;
}

int main(){
    int n,key;

    cout<<"Enter size : ";
    cin>>n;

    vector<int>ar(n);

    cout<<"Enter elements ";
    for(int i=0;i<n;i++) cin>>ar[i];

    cout<<"Enter wanted element ";
    cin>>key;

    binary(ar,n-1,key);
    return 0;
}