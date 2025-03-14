Question_1 :  
https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401

// TC=O(logn), SC=O(1)

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int st=0,end=n-1;
	// floor
	int floor=-1;
	while(st<=end){
		int mid=st+(end-st)/2;
		if(a[mid]==x){
			floor=a[mid];
			break;
		}
		else if(a[mid]<x){
			floor=a[mid];
			st=mid+1;
		}
		else{
			
			end=mid-1;
		}
	}

	// ceiling
	int cel=-1;
	st=0,end=n-1;
	while(st<=end){
		int mid=st+(end-st)/2;
		if(a[mid]==x){
			cel=a[mid];
			break;
		}
		else if(a[mid]<x){
			
			st=mid+1;
		}
		else{
			cel=a[mid];
			end=mid-1;
		}
	}
	return {floor,cel};
}
