/*
Step 1. Declare Variables
Step 2. output fixed setprecision
Step 3. Output angle in degrees statement 
Step 4. Input theta
Step 5. Output hypotenuse length statement
Step 6. Input hypotenuse
Step 7. Output unit of measure
Step 8. Input units
Step 9. Declare equation for oppositeLength
Step 10. Declare equation for adjacentLength
Step 11. Declare equation for area
Step 12. output adjacentLength
Step 13. output oppositeLength
Step 14. output area
*/

#include <iostream>
#include <iomanip> 
#include <math.h>
using namespace std;

int main()
{
    float theta, hypotenuse, adjacentLength, oppositeLength, area, PI = 3.1415;   
    string units; 
    
    cout << fixed << setprecision(4);   
    cout << "Enter the angle in degrees (less than 90): ";  
    cin >> theta;                                        
    cout << "Enter the length of hypotenuse: ";     
    cin >> hypotenuse;                              
    cout << "Enter the unit of measure (cm, m, in, ft): ";  
    cin >> units;                   

    oppositeLength = hypotenuse * sin(theta * PI/180);  
    adjacentLength = sqrt(pow(hypotenuse,2) - pow(oppositeLength,2));   
    area = (oppositeLength * adjacentLength) / 2;    
    
    cout << "The length of the adjacent side is: " << adjacentLength  << " " << units << endl; 
    cout << "The length of the opposite side is: " << oppositeLength << " " <<  units << endl; 
    cout << "The area of the triangle is: " << area  << " " << units  << " " << "squared" << endl; 
    
    return 0;
}