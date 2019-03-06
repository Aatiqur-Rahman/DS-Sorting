#include <iostream>
#include <cstdio>

using namespace std;



/*void print(int arr[],int n){
    cout << n << endl;
    for (int i=1;i<=n;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}*/



void Counting_sort(int arr[],int n){
    int digit[10]={0};
    int temp[n+1];

    for(int i=0;i<n;i++){
        int temp;
        temp=arr[i];
        digit[temp]+=1;
    }


    //  Cumulative sum //

    for(int i=1;i<10;i++){
        digit[i]+=digit[i-1];
    }

    int x=digit[0];

    for(int i=0;i<n;i++){
        int t1,t2;
        t1=arr[i];
        t2=digit[t1];
        temp[t2]=arr[i];
        digit[t1]--;
    }
    int ne=sizeof(temp)/sizeof(temp[0]);
    for (int i=x;i<ne;i++) {
        cout << temp[i] << " ";
    }cout << endl;

}

int main() {
    int arr[]={2,4,7,5,8,9,5,8,3,2,8,9,6,0};
    int n=sizeof (arr) / sizeof (arr[0]);
    Counting_sort(arr,n);
    return 0;
}
