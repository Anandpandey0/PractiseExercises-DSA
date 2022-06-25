#include<bits/stdc++.h>
using namespace std;
void printPattern(vector<vector<char>>A,int n){
    while(n>0){
        int range = n %10;
        n = n/10;
        for(int i =0; i<1;i++){
            for(int j=0;j<range;j++ ){
                cout<<"#";
            }
            cout<<endl;
            
        }
    }
   
}



int main(){
    int n =123405;
    vector<vector<char>>A;
    printPattern(A,n);
    return 0;
}