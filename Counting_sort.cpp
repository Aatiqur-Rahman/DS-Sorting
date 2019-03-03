#include <iostream>

using namespace std;

int digit[10];

/*
void print_solution(int arr[],int n){
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
*/

void Counting_sort(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++)
        temp=arr[i];
        cout << temp << " " << endl;
        digit[temp]+=1;
    }
    for(int i=0;i<10;i++){
        cout << digit[i] << " ";
    }
    cout << endl;

    //  Cumulative sum //

    for(i=0;i<10-1;i++){
        digit[i+1]+=digit[i];
    }

    for(int i=0;i<10;i++){
        cout << digit[i] << " ";
    }
    cout << endl;

    int arr1[n+1];
    for(int i=0;i<n;i++){
        int t1,t2;
        t1=arr[i];
        t2=digit[t1];
        arr1[t2]=arr[i];
        digit[t1]--;
    }
    for(int i=0;i<n;i++){
        cout << arr1[0] << " ";
    }cout << endl;
}

int main() {
    int arr[]={2,4,7,5,8,9};
    int n=sizeof (arr) / sizeof (arr[0]);
    Counting_sort(arr,n);
    //print_solution(arr,n);
    return 0;
}