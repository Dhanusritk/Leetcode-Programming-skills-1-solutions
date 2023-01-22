#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n>0){
            int rem= n%10;
            prod*=rem;
            sum+=rem;
            n=n/10;
        }
        int res= prod-sum;
        return res;
        
    }
};
int main(){
    Solution s;
    int n=234;
    int x= s. subtractProductAndSum(n);
    cout<<x<<endl;
    return 0;
}
