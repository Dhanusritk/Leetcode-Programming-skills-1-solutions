#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        int n= salary.size();
        int max=salary[0];
        int min=salary[0];
        double sum=0,count=0;
        for(int i=0;i<n;i++){
            if(salary[i]<min){
                min=salary[i];
            }
            if(salary[i]>max){
                max=salary[i];
            }

        }
        for(int i=0;i<n;i++){
            if(salary[i]!=min && salary[i]!=max){
                sum+=salary[i];
                count++;
            }
        }
        double ans= sum/count;
        return ans;
    }
};
int main(){
    Solution s;
    vector<int>salary={4000,3000,1000,2000};
    double ans= s.average(salary);
    cout<<ans;
    return 0;
}
