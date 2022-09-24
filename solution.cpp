#include <iostream>
#include <vector>
class solution{
    using namespace std;
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            int index1 = -1;
            int index2 = -1;
            for(int i = 0;i<nums.length();i++){
                for(int j = i+1; j<nums.length();j++){
                    if(nums.at(i)+nums.at(j)==target){
                        index1 = i;
                        index2 = j;
                    }
                    if(index2!=-1){
                        break;
                    }
                }
                if(index2!=-1){
                        break;
                }
            }
            vector<int> res = [index1,index2];
            return res;
        }
}=
