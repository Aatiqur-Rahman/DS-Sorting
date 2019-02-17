#include <iostream>
#include <algorithm>

using namespace std;

void print_solution(int arr[],int n){
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

void Merge(int arr[],int left,int mid, int right){

                // for debug //

                /*cout << "left == " << left << endl;
                cout << "right == " << right << endl;*/

    int n1=mid-left+1;
    int n2=right-mid;

                // for debug //

                /*cout << "n1== " <<  n1 << endl;
                cout << "n2== " <<  n2 << endl;*/


    /* Creating the 2 subArray for holding data */

    int L[n1],R[n2];


    /* Assigning value in those subArray */

                //cout << "In left array " << endl;
    for (int i=0;i<n1;i++) {
        L[i]=arr[left+i];
                //cout << L[i] << " ";
    }
                //cout << endl;


                //cout << "In right array " << endl;
    for (int i=0;i<n2;i++) {
        R[i]=arr[mid+1+i];
                //cout << R[i] << " ";
    }
                //cout << endl;


    int i=0;
    int j=0;
    int k=left;
    while (i<n1 && j<n2) {
        if (L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }

}

void Merge_sort(int arr[],int left,int right){
    if(left==right){
        return ;
    }
    int mid=(left+right)/2;
    Merge_sort(arr,left,mid);
    Merge_sort(arr,mid+1,right);
    Merge(arr,left,mid,right);

}
int main() {
    int arr[]={3,6,4,35,2,87,8,97,43};
    int n=(sizeof(arr)/sizeof(arr[0]));
    int left=0;
    int right=n-1;
    Merge_sort(arr,left,right);
    print_solution(arr,n);
    return 0;
}
