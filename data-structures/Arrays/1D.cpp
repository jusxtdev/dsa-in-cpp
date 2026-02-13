#include <bits/stdc++.h>

using namespace std;


/// CREATE
int declaration_Initialization(){
    // declaration
    int a1[5];   // array which will contain 5 integers

    //initialization
    int a2[3] = {1,2,4};

    int a3[] = {1,9};    // array will be of size 2

    int a4[4] = {0};      // a = [0,0,0,0]
}

/// READ
int access_elements(){
    int a1[5] = {1,4,6,3,8};
    
    // indexing
    cout << a1[0] << " " << a1[4] << endl;

    // for loop - Traversing an array
    for (int i = 0; i < 5; i++){
        cout << a1[i] << " ";
    }
}


/// UPDATE
int update_arr(){
    int a2[] = {7,8,4,3,2};

    cout << "Before: " << a2[1] << endl;
    a2[1] = 88;
    cout << "After: " << a2[1] << endl;
}

/// Size of array
int sizeof_arr(){
    int a2[] = {7,8,4,3,2};

    //# size of one element
    cout << "Size of one element " << sizeof(a2[0]) << endl;
        // 4 (int is of 4bytes)

    //# size of array
    cout << "Size of array " << sizeof(a2) << endl;
        // 20 (5 elements, each one is int therefore 4x5 == 20)

    //# length of array
    int length = sizeof(a2)/sizeof(a2[0]);

    cout << "Length of array " << length << endl;
        // 5  (20 / 4 == 5) 
}


/// Array and pointers
int arr_and_pointers(){
    int a[] = {1,2,4,5};

    // cout << a << endl;
    // cout << &a[0] << endl;

    int* ptr_to_arr = a;

    for (int i = 0; i < 4; i++){
        cout << *ptr_to_arr << endl;
        ptr_to_arr++;
    }
}


int main(){
    arr_and_pointers();

    return 0;
}