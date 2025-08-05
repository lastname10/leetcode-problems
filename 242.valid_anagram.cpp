class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> myMap1,myMap2;
        for(int i=0;i<s.length();i++){
            if(s.length()!=t.length())
               return false;
            myMap1[s[i]]++;
            myMap2[t[i]]++;
        }if(myMap2==myMap1)
          return true;
          else 
          return false;
    }
};
