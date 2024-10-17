class Solution {
public:
    int maximumSwap(int num) {
        string num1=to_string(num);
        string num2=num1;
        sort(num2.rbegin(),num2.rend());
        unordered_map<char,int>mp;
        int n=num1.size();
        for(int i=0;i<n;i++){
            mp[num1[i]]=i;
        }
        int i=0;
        while(i<n){
            if(num1[i]!=num2[i]){
                swap(num1[i],num1[mp[num2[i]]]);
                break;
            }
            i++;
        }
        return stoi(num1);
    }
};
