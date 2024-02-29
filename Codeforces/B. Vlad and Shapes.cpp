    #include <iostream>
    #include <vector>
    #define nl "\n"
     
    using namespace std;
    int n, ones;
    bool check;
    int main() {
        int t;
        cin >> t; 
        while(t--) {
     
            cin >> n;
            vector<string> meow(n);
            string s;
            for(int i=0; i<n; i++)  {
                cin >> s;
                meow[i] = s;
            }
            //
            check = true;
            for(int i = 0; i<n; i++) {
                ones = 0;
                for(int j=0; j<n; j++) {
                    if(meow[i][j] == '1')
                        ones++;
                }
                if(ones == 1) {
                    check = false;
                    
                    break;
                }
            }
     
            !check ? cout << "TRIANGLE" <<nl: cout << "SQUARE" << nl;
        }
        return 0;
    }
