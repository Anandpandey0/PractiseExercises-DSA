#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>A {1, 1, 1, 3};
    vector<int>B;
    reverse(A.begin(), A.end());
    int decimal = 1;
    int total = 0;
    for (auto& it : A)
    {
    total += it * decimal;
    decimal *= 10;
    }
    int sum = total +1;
    while(sum!=0){
    B.push_back(sum%10);
        sum /= 10;
    }
    reverse(B.begin(), B.end());
    for(int i =0;i<B.size();i++){
        cout<<B[i]<<endl;
    }
    return 0;
   
}