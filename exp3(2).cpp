//Shivangi Singh
//prn 24070123148
//B3
#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter X coordinate: ";
    cin >> x;

    cout << "Enter Y coordinate: ";
    cin >> y;

    if (x > 0 && y > 0)
        cout << "The point is in Quadrant I";
    else if (x < 0 && y > 0)
        cout << "The point is in Quadrant II";
    else if (x < 0 && y < 0)
        cout << "The point is in Quadrant III";
    else if (x > 0 && y < 0)
        cout << "The point is in Quadrant IV";
    else if (x == 0 && y == 0)
        cout << "The point is at the Origin";
    else if (x == 0)
        cout << "The point lies on the Y-axis";
    else if (y == 0)
        cout << "The point lies on the X-axis";
  
  return 0;
}
/*Output
Enter X coordinate: 21
Enter Y coordinate: -18
The point is in Quadrant IV
*/
