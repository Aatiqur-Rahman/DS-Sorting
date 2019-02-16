#include <iostream>

using namespace std;

print_solution(int arr[],int n){
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

void Bubble_sort(int arr[],int n){
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-1;j++) {
            if (arr[j+1]<arr[j]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[]={11,15,11,13,12};
    int n=5;
    Bubble_sort(arr,n);
    print_solution(arr,n);
    return 0;
}
