vector<int> primeFactorSum;

 void primeFactor(){
    int n = 1e3+5;
    vector<int> arr(n+5,0);
      for(long long i=2;i<=n;i++){
        arr[i] = i;
    }

    for(long long i=2;i<=n;i++){
        if(arr[i]==i){
            for(long long j = i*i;j<=n;j+=i){
                if(arr[j]%i==0)
                    arr[j] = i;
            }
        }
    }
    for(long long i=1;i<n;i++){

        int result=0;
        int k = i;
        while(k>1 && arr[k]!=k){
            result+= arr[k];
            k /= arr[k];
        }
        result+=arr[k];
        primeFactorSum.push_back(result);
    }
}

class Solution {
public:
   
    
    int minSteps(int n) {
        if(primeFactorSum.size()==0) primeFactor();
        return primeFactorSum[n-1];
    }
};