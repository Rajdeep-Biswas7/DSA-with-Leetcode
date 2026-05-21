class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        unordered_set<string> st;

    
        for(auto x : arr1)
        {
            string s = to_string(x);

            for(int i = 1; i <= s.length(); i++)
            {
                st.insert(s.substr(0, i));
            }
        }

        int ans = 0;

        for(auto x : arr2)
        {
            string s = to_string(x);

            for(int i = 1; i <= s.length(); i++)
            {
                string prefix = s.substr(0, i);

                if(st.count(prefix))
                {
                    ans = max(ans, i);
                }
            }
        }

        return ans;
    }
};