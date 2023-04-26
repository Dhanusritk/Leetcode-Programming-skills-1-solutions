class Solution {
public:
    bool isHappy(int n) {
        set<int>myset;
        int ans=0;
        while(1){
            ans=0;
            while(n){
            int rem= n%10;
             ans+= rem*rem;
             n=n/10;
            }
            if(ans==1){
              return true;
            }
            else if(myset.find(ans)!=myset.end()){
                return false;
            }
            else{
              n=ans;
              myset.insert(ans);
            }

        }
        return false;
        
        
        
    }
};
