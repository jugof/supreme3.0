#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int x[3][5]= {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
    };
    int *a = &x[0][0];
    
    cout<<x<<endl;
}