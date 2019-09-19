// Jordan Cole
// CO SCI_802_26188FA19V
// Chap. 2 Basketball Player Height Program
// Given the height in inches, write a program to compute/display the height in feet/inches form.
// Mandatory: use the modulus and integer divide operations.


#include <iostream>

using namespace std;

int main()
{
    
    auto heightInches = 74;                         // Total height in inches
    auto heightFeet = heightInches / 12;            // Subtotal height in feet, not including inches
    auto heightFeetRemainder = heightInches % 12;   // Subtotal remaining inches (after calculating feet)
    
    // Display the results in both inches and feet/inches
    cout << "The star player of the high school basketball team is " << heightInches << "\" tall." << endl;
    cout << "This is " << heightFeet << "\'" << heightFeetRemainder << "\".";
    
    return 0;
}
