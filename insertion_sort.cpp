#include <iostream>

using namespace std;

void Print_solution(int arr[],int n){
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

void  Insertion_sort(int arr[],int n){
    int key,j;
    for (int i=1;i<n;i++){
        key=arr[i];
        j=i-1;

        while(arr[j]>key){
            swap(key,arr[j]);
            cout << "after swap"<<endl;
            cout << "j==" << j<< endl;
            cout << "arr[j]"<<arr[j]<<endl;
            cout << "key " << key <<endl;
            j--;
            cout << "j==" << j << endl;
        }
    }
}

int main(){
    int arr[]={11,15,14,13,12};
    int n=5;
    Insertion_sort(arr,n);
    Print_solution(arr,n);
    return 0;
}
