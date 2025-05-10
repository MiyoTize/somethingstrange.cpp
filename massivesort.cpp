#include <iostream>
#include <cstdlib>

int main() {

    system ("chcp 1251>nul");

    cout << "Укажите вместимость массива: ";
    cin >> n;
    srand (2);
    int nums [n];
    int i, j, k, s;
    cout << "Массив до сортировки:\n| ";

    for ( k=0; k<n; k++ ) {
        nums [k]=rand()%10;
        cout<<nums[k]<<" | ";
    }

    cout << "\nМассив до сортировки:\n| ";
    for ( i=1; i<= n-1; i++ ) {
        for ( j=0; j < n-1; j++ ) {
            if ( nums[j] > nums[j+1] ) {
                s = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = s;
            }
        }
    }

    for ( k=0; k<n; k++ ) {
        cout << nums[k] << " | ";
    }

    cout << endl;
    system ("pause>nul");
    return 0;
}
