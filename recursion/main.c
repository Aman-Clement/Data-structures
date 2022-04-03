//binary search using reccursion

#include<stdio.h>

int a[100];
int search(int high,int low,int key){
    int mid=(low+high)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]<key)
        return(mid-1,low,key);
    else
        return(high,mid+1,key);
}

void main(){
    int low,high,n,key;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    high=n-1;
    low=0;
    int loc=-1;
    loc= search(high,low,key);
    if(loc==-1){
        printf("\n The element is not found\n ");
    }
    else
    printf("\n The element is found in the loc %d",loc);
}

