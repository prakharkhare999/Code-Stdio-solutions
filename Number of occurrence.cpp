

int lastoccurence(int p[],int n,int target){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(p[mid]==target){
        ans=mid;
        s=mid+1;
    }
    else if(p[mid]>target){
        e=mid-1;
    }
    else if(p[mid]<target){
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
return ans;
}


int  firstoccurence(int p[],int n,int target){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(p[mid]==target){
        ans=mid;
        e=mid-1;
    }
    else if(p[mid]>target){
        e=mid-1;
    }
    else if(p[mid]<target){
        s=mid+1;
    }
    mid=s+(e-s)/2;
}
return ans;
}

int countOccurences(int arr[], int n, int X) {

int total=lastoccurence(arr,n,X)-firstoccurence(arr,n,X)+1;
return total;
}




