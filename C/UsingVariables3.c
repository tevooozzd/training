#include <stdio.h>


// In this case i understand how to use one or more INT variables and using mathematical operations

int main () {

    int MyAge = 17; 
    int MyBrotherAge = 15;

    int TotalAgesSum = MyAge + MyBrotherAge;
    int TotalAgesSub = MyAge - MyBrotherAge;
    int TotalAgesMultiplied = MyAge * MyBrotherAge;
    int TotalAgesDivided = MyAge / MyBrotherAge;
    
    printf("The two ages sum is = %i\nThe two ages sub is = %i\nThe two ages multiplied is = %i\nAnd the two ages divided is = %i\n", 
    TotalAgesSum, TotalAgesSub, TotalAgesMultiplied, TotalAgesDivided);
    return 0;
}


//  Exit:
//  The two ages sum is = 32
//  The two ages sub is = 2
//  The two ages multiplied is = 255
//  And the two ages divided is = 1
