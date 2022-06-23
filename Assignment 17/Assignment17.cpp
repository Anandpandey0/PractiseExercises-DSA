#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    for(int i =0;i<A.size();i++){
        if(target== A[i]){
            cout<<"Yes";
            return true;
        }
        else{
            continue;
        }
    }
    cout<<"No";
    return false;
}

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    //returns true if target is present in A
    for(int i =0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            //cout<<A[i][j]<<endl;
            if(target==A[i][j]){
                cout<<"Yes";
                return true;
            }
            else{
                continue;
            }
        }    
    }
    cout<<"No";
    
    return false;
}
bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //Indexing of row is from 0 so choose efficiently.
    //Value of r is constant so , no need to use 2 for loops.
    for(int j =0;j<A.size();j++){
        cout<<A[r][j];
        if(A[r][j]==target){
            cout<<"Yes";
            return true;
        }
    }
    //returns true if target is present in row r of A then returns true else return false;
    cout<<"False";
    return false;
}

bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){
    //returns true if target is present in column c of A then returns true else return false;
    for(int i =0;i<A.size();i++){
        cout<<A[i][c];
        if(A[i][c]==target){
            cout<<"Yes";
            return true;
        }
        else{
            continue;
        }
    }
    cout<<"No";
    return false;
}


int main() {
    
    int r=1;
    vector<vector<int>> A
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
     
    int target =5;
    isTragetPresentInRow(A,target,r);
    
    
}