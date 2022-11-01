#include <iostream>

using namespace std;
void BubbleSort(int ArrayNumber[100], int n);
void printArray(int ArrayNumber[100], int n);

int main()
{
    int ArrayNumber[10] = {9,2,7,4,8};
    BubbleSort(ArrayNumber, 5);
    return 0;
}

void BubbleSort(int ArrayNumber[100], int n){
    printArray(ArrayNumber, n);
    for(int i=0; i < n - 1; i++){
        for(int j=i+1; j < n; j++){
            if(ArrayNumber[j] < ArrayNumber[i]){
                int temp = ArrayNumber[i];
                ArrayNumber[i] = ArrayNumber[j];
                ArrayNumber[j] = temp;
            }
        }
    }
    printArray(ArrayNumber, n);
}

void printArray(int ArrayNumber[100], int n){
    for(int i=0; i < n; i++){
        cout << ArrayNumber[i] << " ";
    }
    cout << endl;
}
