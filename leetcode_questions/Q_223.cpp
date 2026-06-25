#include <iostream>
#include <algorithm>
using namespace std;

int computeArea(int ax1, int ay1, int ax2, int ay2,
                int bx1, int by1, int bx2, int by2) {

    int area1 = (ax2 - ax1) * (ay2 - ay1);
    int area2 = (bx2 - bx1) * (by2 - by1);

    int overlapWidth = max(0, min(ax2, bx2) - max(ax1, bx1));
    int overlapHeight = max(0, min(ay2, by2) - max(ay1, by1));

    int overlapArea = overlapWidth * overlapHeight;

    return area1 + area2 - overlapArea;
}

int main() {
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;

    cout << "Enter Rectangle A (ax1 ay1 ax2 ay2): ";
    cin >> ax1 >> ay1 >> ax2 >> ay2;

    cout << "Enter Rectangle B (bx1 by1 bx2 by2): ";
    cin >> bx1 >> by1 >> bx2 >> by2;

    cout << "Total Area = "
         << computeArea(ax1, ay1, ax2, ay2,
                        bx1, by1, bx2, by2)
         << endl;

    return 0;
}