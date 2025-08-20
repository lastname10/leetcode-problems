class Solution {
public:
    int cal(int n){
        int result=0;
        while(n>0){
            int p=n%10;
            result+=p*p;
            n=n/10;
        }
       return result;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        while(true){
            int x=cal(n);
            if(st.find(x)!= st.end())
              return false;
            if(x==1)
              return true;
            st.insert(x);
            n=x;
        }
    }
};
