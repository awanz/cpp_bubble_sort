#include <iostream>

using namespace std;
void BubbleSort(int A[100], int n);

int main()
{
    int[10] A = [9,2,7,4,8];
    A = BubbleSort(A);
    cout << A;
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
