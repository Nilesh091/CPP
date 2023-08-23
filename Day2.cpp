#include<iostream>
#include<algorithm>
using namespace std;
int triplet(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
        int check= -arr[i];
        while(left<right){
            int sum=arr[right]+arr[left];
            if(sum==check)
            return 1;
            else if (sum<check)
            left++;
            else
            right--;
        }
    }
    return 0;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    if(triplet(arr,size)==1)
    cout<<"The array contains triplet";
    else
    cout<<"The array doesn't contains triplet";
    return 0;
}
