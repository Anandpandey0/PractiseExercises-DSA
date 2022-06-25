#include<bits/stdc++.h>
using namespace std;
void printPattern(vector<vector<char>>A,int n){
    for(int i =0;i<=n;i++){
        for(int j =0;j<i;j++){
            cout<<"#";
        }
        cout<<endl;
    }
}



int main(){
    int n =3;
    vector<vector<char>>A(n);
    printPattern(A,n);
    return 0;
}