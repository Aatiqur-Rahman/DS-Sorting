#include <iostream>
#include <climits>

using namespace std;

void print_solution(int arr[],int n){
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

void insertion_srt(int arr[],int n){
    int min_inx;
    for (int i=0;i<n;i++){
         min_inx=i;
        for (int j=i+1;j<n;j++) {

            if (arr[j]<arr[i]){
                min_inx=j;
            }
        }
        swap(arr[i],arr[min_inx]);
    }
}

int main(){
    int arr[]={6,7,90,9,3};
    int n=5;
    insertion_srt(arr,n);
    print_solution(arr,n);
    return 0;
}
