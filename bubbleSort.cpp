//bubble Sort - time complexity O(n)^2

#include<iostream>
using namespace std;
#define size 100

int bubbleSort(int *a, int n){

    int temp;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1-i; j++){
            if(a[j+1]<a[j]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }


    cout<<"After sorting: ";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }

}


int main(){
int arr[size],n;

cout<<"Enter size: ";
cin>>n;
cout<<"Enter values: ";
for(int i = 0; i<n; i++)
    cin>>arr[i];

bubbleSort(arr,n);

return 0;

}
