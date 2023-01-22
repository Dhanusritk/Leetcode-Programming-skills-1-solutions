#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(int i=0;i<32;i++){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};
int main(){
    Solution s;
    long unsigned int n=00000000000000000000000000001011;
    int x= s.hammingWeight(n);
    cout<<x<<endl;
    return 0;
}
