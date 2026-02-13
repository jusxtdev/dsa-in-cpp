#include <bits/stdc++.h>

using namespace std;

// declaration and initialization
int declare_initialize(){
    // data_type name[num_rows][num_columns]
    int num_rows = 4;
    int num_cols = 2;
    int arr2d[num_rows][num_cols] = {
        {1,2},
        {3,4},
        {5,6},
        {7,8}
    };

    for (int i = 0; i < num_rows; i++){
        for (int j = 0; j < num_cols; j++){
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    declare_initialize();
    return 0;
}