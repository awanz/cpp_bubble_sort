#include <iostream>

using namespace std;
void BubbleSort(int A[100], int n);
void printArray(int A[100], int n);

int main()
{
    int A[10] = {9,2,7,4,8};
    BubbleSort(A, 5);
    printArray(A, 5);
    return 0;
}

void BubbleSort(int A[100], int n){
    for(int i=0; i < n - 1; i++){
        for(int j=n; j > i; j--){
            if(A[j] < A[j-1]){
                int temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;
            }
        }
    }
}

void printArray(int A[100], int n){
    for(int i=0; i < n; i++){
        cout << A[i] << " ";
    }
}
