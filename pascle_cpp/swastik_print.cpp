#include <iostream>
using namespace std;

int main() {
    int n = 7;   // must be odd number
    int mid = n/2;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            if(i == mid || j == mid ||   // middle lines
              (i < mid && j == 0) ||     // left top
              (i == 0 && j > mid) ||     // top right
              (i > mid && j == n-1) ||   // right bottom
              (i == n-1 && j < mid))     // bottom left
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
