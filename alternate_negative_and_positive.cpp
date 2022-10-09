void rearrange(int arr[], int n) {
	    // code here
	    int index1 = 0;
	    int index2 = 0;
	    int arr1[n];
	    int arr2[n];
	    int cnt1 = 0;
	    int cnt2 = 0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            arr1[index1++]=arr[i];
	            cnt1++;
	        }
	        else{
	            arr2[index2++]=arr[i];
	            cnt2++;
	        }
	    }
	        int i=0;
	        int j=0;
	        int k=0;
	        while(i<cnt1 && j<cnt2){
	            arr[k++]=arr1[i++];
	            arr[k++]=arr2[j++];
	            
	        }
	        while(i<cnt1){
	            arr[k++]=arr1[i++];
	            
	        }
	        while(j<cnt2){
	            arr[k++]=arr2[j++];
	        }
	    }
	
};
