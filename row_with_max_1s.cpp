class Solution{
    int binarySearch(vector<vector<int> > arr, int r){
        int low = 0;
   
        int high = arr[0].size()-1;
        int fco = arr[0].size();
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[r][mid]==1){
                fco=mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        int count = arr[0].size()-fco;
        return count;
    }
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int omax=0;
	    int r=-1;
	    int i=0;
	    for(int i=0;i<arr.size();i++){
	    int coir=binarySearch(arr,i); //count of 1s in ith row
	    if(coir>omax){
	        omax=coir;
	        r=i;
	    }
	    }
	    return r;
	  
	}

};
