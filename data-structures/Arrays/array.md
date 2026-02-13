# Arrays

### Definition
- Contigous memory structure

### Operations
- Access - O(1)
- Insert - O(n)
- Delete - O(n)

## Arrays and pointers
- In c++, an arra is a pointer to the first element of the contigous memory store
```c++
int a[] = {1,2,4,5};
cout << a << endl;
cout << &a[0] << endl;
```
> Output ->     
> 0x61ff00      
> 0x61ff00      
- Which is the location of a[0] in memory

### Array traversal using pointer
```c++
int* ptr_to_arr = a;

for (int i = 0; i < 4; i++){
    cout << *ptr_to_arr << endl;
    ptr_to_arr++;
}
```

## 2D Array

### Declaration and initialization
- `data_type name[num_rows][num_cols]`
```c++
int num_rows = 4;
int num_cols = 2;
int arr2d[num_rows][num_cols] = {
    {1,2},
    {3,4},
    {5,6},
    {7,8}
};
```

- Traversing 2D array
```c++  
for (int i = 0; i < num_rows; i++){
    for (int j = 0; j < num_cols; j++){
        cout << arr2d[i][j] << " ";
    }
    cout << endl;
}
```
Output
```
1 2       
3 4       
5 6       
7 8       
```