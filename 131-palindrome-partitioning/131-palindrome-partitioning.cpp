class Solution {
public:
    
    vector<vector<string>> res;
    vector<vector<string>> partition(string s) {
        find(0, s, "", {}); 
        return res;
    }
    
    void find(int i, string &s, string str, vector<string> v)
    {
        if(str!="") v.push_back(str);
        if(i>=s.size()) res.push_back(v);
        string st ;
        
        for(int j=i;j<s.size();j++)
        {
            st+=s[j];
            if(isPalin(st))
            find(j+1, s, st, v);
        }
        
    }
    
    bool isPalin(string str)
    {
        string s = str;
        reverse(s.begin(), s.end());
        return s==str;
    }
    
};