class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded ="";
        for(string & str : strs){
            encoded += to_string(str.length()) + "#" + str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int i =0;
        vector<string> ans;
        while(i<s.length()){

                int j = i;
                while(s[j] != '#')
                    j++;
                
                int len = stoi(s.substr(i,j-i));
                j++;

                string str = s.substr(j,len);
                ans.push_back(str);

                i=j+len;


        }
        return ans;
    }
};
