class Solution {
public:
    bool isPalindrome(int n) {
        int n1 = n, n2 = 0, a;
        while(n1>0) {
            a = n1%10;
            n2=n2*10+a;
            n1/=10;
        }
        return n2==n;
    }

    bool isPrime(int n) {
        if(n%2==0) return false;
        for(int i=3; i<=sqrt(n); i++) {
            if(n%i==0) {
                return false;
            }
        }
        return true;
    }
    int primePalindrome(int n) {
        if(n<=2)
            return 2;
        if(n>=1e7 && n<=1e8)
            return 100030001;
        while(true) {
            if(isPalindrome(n) && isPrime(n))
            {
                    return n;
            }    
            n++;
        }
    }
};
