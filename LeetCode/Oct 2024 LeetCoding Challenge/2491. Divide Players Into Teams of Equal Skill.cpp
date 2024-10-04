class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        int teams = n/2;
        long long totalSkill = 0;
        unordered_map<int, int> m;
        for(int& s : skill) {
            totalSkill += s;
            m[s]++;
        }
        cout << totalSkill << " | " << teams << endl;
        if(totalSkill%teams)
            return -1;

        totalSkill /= teams;
        cout << totalSkill << endl;
        long long res = 0, cnt = 0;
        for(int& e : skill) {
            int rem = totalSkill-e;
            if(m[e] && m[rem]) {
                res += e*rem;
                m[rem]--;
                m[e]--;
                cnt++;
            }
        }
        return  cnt==n/2 ? res : -1;
    }
};
