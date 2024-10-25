#include <iostream>

using namespace std;






//домашнє завдання 2


// завдання 1
void copyArray(int* src, int* dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }
}





//завдання 2
void reverseArray(int* array, int size) {
    int* start = array;
    int* end = array + size - 1;

    while (start < end) {
        swap(*start, *end);
        start++;
        end--;
    }
}





// завдання 3
void copyArrayReversed(int* src, int* dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + size - 1 - i);
    }
}

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int* array = new int[size];
    int* copiedArray = new int[size];
    int* reversedArray = new int[size];

    
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> *(array + i);
    }





    // завдання 1
    copyArray(array, copiedArray, size);
    cout << "Copied array: ";
    for (int i = 0; i < size; i++) {
        cout << *(copiedArray + i) << " ";
    }
    cout << endl;





    // завдання 2
    reverseArray(array, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << *(array + i) << " ";
    }
    cout << endl;




    // завдання 3
    copyArrayReversed(copiedArray, reversedArray, size);
    cout << "Array copied in reverse order: ";
    for (int i = 0; i < size; i++) {
        cout << *(reversedArray + i) << " ";
    }
    cout << endl;

    


    delete[] array;
    delete[] copiedArray;
    delete[] reversedArray;

}

