class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        cout<<"Enter the number: ";
        for (int i =0;i<= nums.size();i++){
            cin>>nums[i];
            nums.push_back();
        }
        for(int i=0;i<=nums.size();i++){
            if(nums[i] + nums[i+1] == target){
                cout<<"["<<nums[i]<<","<<nums[i+1]<<"]";
            }
        }
    }
};

int main(){
    Solution S;
   
}