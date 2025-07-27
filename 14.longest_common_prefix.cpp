class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string s;
        int count=0;
        if (strs.empty()) return "";
        for(int i=0;;i++){
            if (strs[0][i]=='\0')
                return s;
            char c=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(c==strs[j][i])
                    count++;
                else if(strs[j][i]!=c)
                    return s;
            }if(count==strs.size())
                s+=c;
            count=0;
        }
        return s;
    }
};
