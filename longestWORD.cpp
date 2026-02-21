#include<bits/stdc++.h>
using namespace std;
string LongestWord(string sen){
int i,number=0;
int l=sen.length();

string s1,longest="";
for(i=0;i<l;i++){
    if( !isalpha(sen[i])){
        if(number<s1.length()){
            number=s1.length();
            longest=s1;
        }
     s1="";
    }
    else s1+=sen[i];
}
if(number<s1.length()){
    number = s1.length();
    longest =s1;
}
  return longest;
}
int main(){
string str;
getline(cin,str);

cout<<LongestWord(str)<<endl;

}