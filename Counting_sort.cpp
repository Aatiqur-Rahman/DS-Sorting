#include <iostream>
#include <algorithm>

using namespace std;

void print(int arr[],int n){
    for (int i=0;i<n;i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void Counting_sort(int arr[],int n){
    int max=*max_element(arr,arr+n);
    int min=*min_element(arr,arr+n);
    int range=max-min+1;

    int index[range]={0};
    int output[n];

    for (int i=0;i<n;i++) {
        index[arr[i]-(min)]++;

    }

    for (int i=1;i<range;i++) {
        index[i]+=index[i-1];
    }

    for (int i=0;i<n;i++){
        output[index[arr[i]-min]-1]=arr[i];
        index[arr[i]-min]--;
    }

    for (int i=0;i<n;i++) {
        arr[i]=output[i];
    }

}

int main () {
    int arr[]={-5,-10,0,-4,9,6,-1,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    Counting_sort(arr,n);
    print(arr,n);
    return 0;
}
