#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9,11,13,15,17};
    int brr[10];
    int crr[5];
    int drr[2];
    int j=0;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<' ';
       if(i%2!=0){
        brr[j]=arr[i];
        j++;
       }
    }
    cout<<endl;
    int k=0;
    for(int i=0;i<j;i++){
        cout<<brr[i]<<' ';
        if(i%2!=0){
        crr[k]=brr[i];
        k++;
       }
    }
    cout<<endl;
    int l=0;
    for(int i=0;i<k;i++){
        cout<<crr[i]<<' ';
        if(i%2!=0){
            drr[l]=crr[i];
            l++;
        }
         
    }
    cout<<endl;
    for(int i=0;i<l;i++){
        cout<<drr[i]<<' ';
    }
    return 0;
}
