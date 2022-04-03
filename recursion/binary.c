//binary search using reccursion

int search(int high,int low,int key){
    int mid=(low+high)/2;
    if(a[mid]==key){
        return mid+1;
    }
    else if(a[mid]<key)
        return(mid-1,low,key)
    else
        return(high,mid+1,key)
}

void main(){
    int low,high,a[100],n,key;
    printf("Enter the number of elements :";
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    high=a[n-1];
    low=a[0];
    int loc=-1;
    loc= search(high,low,key);
    if(loc==-1){
        printf("\n The element is not found\n ");
    }
    elsse
    printf("\n The element is found in the loc %d",loc);
}

