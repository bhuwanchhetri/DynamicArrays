
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Size:";
    cin >> size;
    int* myArray = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "]";
        cin >> myArray[i];

    }
    for (int i = 0; i < size; i++) {
       // cout << myArray[i] << " ";   //dereferencing
        cout << *(myArray + i) << " ";
    }
    delete[]myArray;  //deleting array memory alocation
    myArray = NULL; 
    
    system("pause>0");
}
