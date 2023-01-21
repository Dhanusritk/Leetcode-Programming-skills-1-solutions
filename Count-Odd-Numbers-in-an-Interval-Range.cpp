#include<iostream>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        for(low;low<=high;low++){
            if(low%2!=0){
                count++;
            }
        }
        return count;
    }
};
int main(){
int high=7,low=3;
Solution s;
int x= s.countOdds(low,high);
cout<<x<<endl;
}
