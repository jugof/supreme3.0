#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    
    for(int i=1; i<n; ++i) {
        int j = i - 1;
        int key = arr[i];
        while(j>= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int arr[] = {55 ,4,33, 2,11,};
    int n = 5;
    insertionSort(arr, n);
    for(int i=0; i<n; ++i) {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}