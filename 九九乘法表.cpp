#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        cout << i << " ";
        for (int j = 1; j <= i; j++) {
            cout << j << "×" << i << "= " << j*i << " ";
        }
        cout << endl; 
    }
    
	int i = 1;
    while (i <= 9) {
        cout << i << " ";
        int j = 1;
        while (j <= i) {
            cout << j << "×" << i << "= " << j*i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
