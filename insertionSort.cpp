//insertion sorting


#include<iostream>
using namespace std;
#define size 100

int insertionSort(int *a, int x){
int item,j;
    for(int i = 1; i<x; i++){
        item = a[i];
        j = i-1;
        while(j>=0 && a[j]>item){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = item;
    }
    cout<<"After insertion sort: ";
    for(int i = 0; i<x; i++)
            cout<<a[i]<<" ";


}

int main(){
int n, arr[size];
cout<<"Enter array size: ";
cin>>n;
cout<<"Enter values: ";
for(int i = 0; i<n; i++)
    cin>>arr[i];


insertionSort(arr,n);

}
