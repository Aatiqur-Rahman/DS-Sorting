#include <iostream>

using namespace std;

void print_solution(int arr[],int n){
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

void selection_sort(int arr[],int n){
    for (int i=1;i<n;i++) {
        int j=i;
        while (arr[j-1]>arr[j] && j>0)
        {
           swap(arr[j-1],arr[j]);
           j--;
        }
    }
}

int main(){
    int arr[]={9,8,7,6,29,9,10,1};
    int n=sizeof (arr) / sizeof arr[0];
    selection_sort (arr,n);
    print_solution(arr,n);
    return 0;
}
