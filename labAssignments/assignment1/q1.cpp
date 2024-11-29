// 1) Developa Menudrivenprogramtodemonstrate the followingoperations of Arrays
// ——MENU——-
// 1.CREATE
// 2.DISPLAY
// 3.INSERT
// 4.DELETE
// 5.LINEAR SEARCH
// 6.EXIT

#include <bits/stdc++.h>
using namespace std;

class ArrayOperations {
private:
    int arr[100];  // Maximum array size
    int size;      // Current number of elements

public:
    // Constructor to initialize the array
    ArrayOperations() {
        size = 0;
    }

    // 1. CREATE Array
    void create() {
        cout << "Enter the number of elements: ";
        cin >> size;

        // Input validation
        if (size <= 0 || size > 100) {
            cout << "Invalid size! Size must be between 1 and 100." << endl;
            size = 0;
            return;
        }

        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << "Array created successfully!" << endl;
    }

    // 2. DISPLAY Array
    void display() {
        if (size == 0) {
            cout << "Array is empty!" << endl;
            return;
        }

        cout << "Array elements are:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // 3. INSERT Element
    void insert() {
        if (size >= 100) {
            cout << "Array is full. Cannot insert more elements!" << endl;
            return;
        }

        int position, element;
        cout << "Enter the position to insert (0-" << size << "): ";
        cin >> position;

        // Input validation
        if (position < 0 || position > size) {
            cout << "Invalid position!" << endl;
            return;
        }

        cout << "Enter the element to insert: ";
        cin >> element;

        // Shift elements to make space for new element
        for (int i = size; i > position; i--) {
            arr[i] = arr[i-1];
        }

        arr[position] = element;
        size++;
        cout << "Element inserted successfully!" << endl;
    }

    // 4. DELETE Element
    void deleteElement() {
        if (size == 0) {
            cout << "Array is empty. Nothing to delete!" << endl;
            return;
        }

        int position;
        cout << "Enter the position to delete (0-" << size-1 << "): ";
        cin >> position;

        // Input validation
        if (position < 0 || position >= size) {
            cout << "Invalid position!" << endl;
            return;
        }

        // Shift elements to fill the gap
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i+1];
        }

        size--;
        cout << "Element deleted successfully!" << endl;
    }

    // 5. LINEAR SEARCH
    void linearSearch() {
        if (size == 0) {
            cout << "Array is empty!" << endl;
            return;
        }

        int searchElement;
        cout << "Enter the element to search: ";
        cin >> searchElement;

        for (int i = 0; i < size; i++) {
            if (arr[i] == searchElement) {
                cout << "Element " << searchElement 
                     << " found at position " << i << endl;
                return;
            }
        }

        cout << "Element " << searchElement << " not found!" << endl;
    }
};

int main() {
    ArrayOperations ao;
    int choice;

    while (true) {
        // MENU
        cout << "\n--- ARRAY OPERATIONS MENU ---" << endl;
        cout << "1. CREATE" << endl;
        cout << "2. DISPLAY" << endl;
        cout << "3. INSERT" << endl;
        cout << "4. DELETE" << endl;
        cout << "5. LINEAR SEARCH" << endl;
        cout << "6. EXIT" << endl;
        cout << "Enter your choice: ";
        
        cin >> choice;

        // Handle user choice
        switch (choice) {
            case 1:
                ao.create();
                break;
            case 2:
                ao.display();
                break;
            case 3:
                ao.insert();
                break;
            case 4:
                ao.deleteElement();
                break;
            case 5:
                ao.linearSearch();
                break;
            case 6:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}