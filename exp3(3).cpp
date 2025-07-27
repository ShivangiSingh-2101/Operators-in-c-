#include <iostream>
using namespace std;

int main() {
    float mark1;float mark2; float mark3;float sum;

    cout << "Enter marks sub1: ";
    cin >> mark1;
     cout << "Enter marks sub2: ";
    cin >> mark2;
 cout << "Enter marks sub3: ";
    cin >> mark3;  
    sum=mark1+mark2+mark3;
    if (sum>90) {
        cout << "The Grade is A+" << endl;
    } 
    else if (sum>80) {
        cout << "The Grade is B+" << endl;
    } 
    else if (sum>75) {
        cout << "The Grade is B" << endl;
    } 
    else if (sum>60) {
        cout << "The Grade is C" << endl;
    } 
  else{
        cout << "The Grade is F" << endl;
    } 
    return 0;
}
/*Output
Enter marks sub1: 97
Enter marks sub2: 88
Enter marks sub3: 99
The Grade is A+
*/
