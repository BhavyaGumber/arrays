class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        
        long long max = a[n-1];
        v.push_back(max);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=max){
                 max=a[i];
                v.push_back(a[i]);
               
            }
        }
        reverse(v.begin(), v.end());
        return v;
        
        
    }
};
