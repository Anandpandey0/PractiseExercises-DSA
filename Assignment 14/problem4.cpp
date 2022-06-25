#include<bits/stdc++.h>
using namespace std;
void printPattern(vector<vector<char>>A,int n){
   while(n>=1){
       for(int i =0;i<1;i++){
           for(int j=0;j<n;j++){
               cout<<"#";
           }
           cout<<endl;
       }
       n = n/2;
   }
   
}



int main(){
    int n =16;
    vector<vector<char>>A;
    printPattern(A,n);
    return 0;
}