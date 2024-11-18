class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
       int n=code.size();
        vector<int>v(n*2);
        if(k==0){
           return  vector<int>(n,0);
        }
        vector<int>res(n,0);
        
        for(int i=0;i<n*2;i++){
            v[i]=code[i%(n)];
        }
        if(k>0){
            for(int i=0;i<n;i++){
                for(int j=i+1;j<(k+i+1);j++){
                    res[i]+=v[j];
                }
            }
        }
        else {
           for(int i=n;i<n*2;i++){
                for(int j=i-1;j>=(i+k);j--){
                    res[i%n]+=v[j];
                }
            }
        }
        return res;
    }
};
