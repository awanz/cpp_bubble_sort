#include <iostream>

using namespace std;
void BubbleSort(int arrayNumber[100], int n);
void printArray(int arrayNumber[100], int n);

int main()
{
    int arrayNumber[10] = {9,2,7,4,8};
    BubbleSort(arrayNumber, 5);
    return 0;
}

void BubbleSort(int arrayNumber[100], int n){
    printArray(arrayNumber, n);
    for(int i=0; i < n - 1; i++){
        for(int j=i+1; j < n; j++){
            if(arrayNumber[j] < arrayNumber[i]){
                int temp = arrayNumber[i];
                arrayNumber[i] = arrayNumber[j];
                arrayNumber[j] = temp;
            }
        }
    }
    printArray(arrayNumber, n);
}

void printArray(int arrayNumber[100], int n){
    for(int i=0; i < n; i++){
        cout << arrayNumber[i] << " ";
    }
    cout << endl;
}
