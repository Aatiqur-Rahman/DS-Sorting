#include <iostream>

using namespace std;

int digit[10];

 void Counting_sort(int arr[],int n){
    int temp[n+1];
    for(int i=0;i<n;i++){
        int temp;
        temp=arr[i];
        digit[temp]+=1;
    }

    //  Cumulative sum //

    for(int i=0;i<10-1;i++){
        digit[i+1]+=digit[i];
    }

    for(int i=0;i<n;i++){
        int t1,t2;
        t1=arr[i];
        t2=digit[t1];
        temp[t2]=arr[i];
        digit[t1]-=1;
    }

    for (int i=1;i<=n;i++) {
        cout << temp[i] << " ";
    }
    cout << endl;

}

int main() {
    int arr[]={2,4,7,5,8,9,5,8,3,2,8,9,6,0};
    int n=sizeof (arr) / sizeof (arr[0]);
    Counting_sort(arr,n);
    return 0;
}
