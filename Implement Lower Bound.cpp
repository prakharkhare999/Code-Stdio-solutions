
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int s=0;
	int e=n-1;
	
	int ans=n;
	while(s<=e){
		int mid=(s+e)/2;
	if(arr[mid]>=x){
		ans=mid;
		e=mid-1;
	}
	else{
		s=mid+1;
	}

	}
	return ans;
}
