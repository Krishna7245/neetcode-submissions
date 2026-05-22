class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= nums.size();
        vector<int> arr(2*n);
        for(int i=0; i<2*n; i++){
            if(i>=n){
                arr[i]=nums[i-n];
            }
            else{
                arr[i]=nums[i];
            }
        }
        return arr;
    }
};