#include<iostream>
using namespace std;

void printPairs(int arr[], int n){
    for(int i=0; i<n; ++i){
        for(int j=n-1; j>i; --j)
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<"  ";
        cout<<endl;
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int n=5;
    printPairs(arr,n);

}