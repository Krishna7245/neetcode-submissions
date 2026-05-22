class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int max;
        for(int i=0; i<n-1;i++){
            vector<int> brr=arr;
           sort(brr.begin()+i+1, brr.end());
            arr[i]=brr[n-1];
        }
        arr[n-1]=-1;
        return arr;
    }
};