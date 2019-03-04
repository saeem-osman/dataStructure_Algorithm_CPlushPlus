//selection sorting - time complexity O(n)^2

#include<iostream>
using namespace std;
#define size 100

int selectionSort(int *a, int n){

int min_index, temp;

    for(int i = 0; i<n-1; i++){
            min_index = i;
        for(int j = i+1; j<n; j++){
            if(a[j]<a[min_index])
                min_index = j;
        }
        if(min_index != i){
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
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

selectionSort(arr,n);

return 0;

}
