#include<iostream>
using namespace std;

void merge(int *arr, int start , int end){
    int mid = (start + end)/2;
    int len1 = mid - start +1;
    int len2 = end - mid;
    int *arr1 = new int [len1];   // this array is created in heap memory so
    int *arr2 = new int [len2];  // it will be deleted & not included in space complexicity

    // copying the values
    int k = start;
    for(int i =0; i < len1; i++){
        arr1[i] = arr[k++];
    }
    k = mid + 1; 
    for(int i =0; i < len2; i++){
        arr2[i] = arr[k++];
    }
    //merge two sorted array
    int index1 = 0;
    int index2 = 0;
    k = start;
    while (index1 < len1 && index2 < len2){
        if(arr1[index1] > arr2[index2]){
            arr[k++] = arr1[index1++];
        }
        else{
            arr[k++] = arr2[index2++];
        }
    }   
    while(index1 < len1){
        arr[k++] = arr1[index1++];
    } 
    while(index2 < len2){
        arr[k++] = arr2[index2++];
    } 
        delete[] arr1;
        delete[] arr2;
}

void mergeSort(int * arr, int start, int end){
    if(start >= end){
        return;
    }
    int mid = (start + end)/2;
    //left part sort
    mergeSort(arr,start,mid);
    //right part sort
    mergeSort(arr , mid + 1 , end);
    //merge
    merge(arr, start, end);
}

int main(){
    int arr[] = {38,27,43,3,9,83,10};
    int size = 7;
    mergeSort(arr, 0, size-1);
    for(int i = 0; i < size; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}