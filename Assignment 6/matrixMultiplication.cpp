#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> multiplication(vector<vector<int>> a, vector<vector<int>> b){
    int s1 = a.size();
    int column1 = a[0].size();
    int column2 = b.size();
    int s2 = b[0].size();
    vector<vector<int>> result;
    if(column1!=column2){
        cout<<"0";
    }
    for(int i=0;i<s1;i++){
        vector<int> arr;
        for(int j=0;j<s2;j++){
            int num = 0;
            for(int k=0;k<column1;k++){
                num += a[i][k]*b[k][j];
            }
                arr.push_back(num);
        }
        result.push_back(arr);
    }
    return result;
}


vector<vector<int>> Input(int n,int m){
    vector<vector<int>> outputVector;
    for(int i=0;i<n;i++){
        vector<int> arr;
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        outputVector.push_back(arr);
    }
    return outputVector;
}

void print(vector<vector<int>> matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a = Input(n,m);
    int n1,m1;
    cin>>n1>>m1;
    vector<vector<int>> b = Input(n1,m1);

    vector<vector<int>> c = multiplication(a,b);
    print(c);
    
}