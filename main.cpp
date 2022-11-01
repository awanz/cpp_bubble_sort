#include <iostream>

using namespace std;
void BubbleSort(int A[100], int n);
void printArray(int A[100], int n);

int main()
{
    int A[10] = {9,2,7,4,8};
    BubbleSort(A, 5);
    return 0;
}

void BubbleSort(int A[100], int n){
    printArray(A, n);
    for(int i=0; i < n - 1; i++){
        for(int j=i+1; j < n; j++){
            if(A[j] < A[i]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printArray(A, n);
}

void printArray(int A[100], int n){
    for(int i=0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}
