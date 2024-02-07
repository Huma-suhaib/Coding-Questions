#include<iostream>
using namespace std;

int partition(int * arr, int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot)
        count++;
    }
    //place pivot to right position
    int pIndex = count + s;
    // swap(arr[pIndex],arr[s]);
    int temp = arr[s];
    arr[s] = arr[pIndex];
    arr[pIndex] = temp; 

    // maintaining left right sides of pivot

    int i = s , j = e;
    while(i < pIndex && pIndex < j){
        while( arr[i] < pivot){
            i++;
        }
        while( arr[j] > pivot){
            j--;
        }

        if(i < pIndex && pIndex < j){  //arr[i] > pivot && arr[j] < pivot

        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp; 
        i++;
        j--;
        }
    }
    return pIndex;
}

void quickSort(int *arr, int s, int e){

    //base case
    if(s >= e){
        return;
    }
    //partition
    int p = partition(arr, s, e);  // pivot index will be returned
    //left side sort
    quickSort(arr, s, p-1); quickSort(arr, p+1, e); 
    // right side sort
    quickSort(arr, p+1, e);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quickSort( arr, 0, n-1);

    cout <<"\nThe sorted array is as follows :"<<endl;
    for(int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}