#include <iostream>

using namespace std;

int Partition (int arr[],int left,int right) {
    int p=left;
    while(left<=right){
                                    // Another logic //

                                    /*

                                    if (arr[left] > arr[p]) {
                                        swap(arr[left],arr[p]);
                                        Partition (arr,left,right-1;p=left);
                                    }
                                    if (arr[right] < arr[p]) {
                                        swap(arr[right],arr[p]);
                                        Partiton (arr,left+1,right,p=right);
                                    }

                                    */

       bool flag=0;

       if (arr[right] < arr[p]) {
           swap (arr[right],arr[p]);
           left++;
           p=right;
           flag=1;
       }
       else if (arr[left] > arr[p]) {
           swap (arr[left],arr[p]);
           right--;
           p=left;
           flag=0;
       }
       else{
           if (flag==1){
              left++;
           }
           else {
              right--;
           }
       }

    }

    return p;

}

void Quick_sort(int arr[],int left,int right){

    if (right<=left){return ;}
    int pivot=Partition(arr,left,right);
    Quick_sort(arr,left,pivot-1);
    Quick_sort(arr,pivot+1,right);

}

void Print_solution(int arr[],int n){
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[]={2,81,79,87,91,101,4,1,0};
    int n=sizeof(arr)/sizeof (arr[0]);
    int left=n-n;
    int right=n-1;
    Quick_sort(arr,left,right);
    Print_solution(arr,n);

    return 0;
}
