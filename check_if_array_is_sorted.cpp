class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        if(n==0||n==1){
            return  true;
        }
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                return false;
            }
        }
        return true;
    }
};
