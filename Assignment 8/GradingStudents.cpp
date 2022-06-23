#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
    int n,a , temp;
    cin >> n;
    vector<int>A;
    vector<int>B;
    for(int i=0; i<n;i++){
        cin>>a;
        A.push_back(a);
        if(a < 38 || a%5==0 || a%5<=2){
            B.push_back(a);
        }
        else {
            temp = a + (5- (a%5));
            B.push_back(temp);
        }
        
        
    }
    for(int i =0;i<A.size();i++){
        cout<<B[i]<<endl;
    }
    
    
    return 0;
    
    
}
