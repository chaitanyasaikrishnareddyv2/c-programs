#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 25;
    float salary = 50000.0;
    _Bool hasLicense = 1;

    printf("Initial Candidate Data:\n");
    printf("Age: %d, Salary: %.1f, Has License: %d\n\n", age, salary, hasLicense);

    // --- Initial Eligibility Checks ---
    printf("--- Initial Role Eligibility ---\n");
    // TODO: Calculate eligibility for three roles.
    
    _Bool eligible1 =  ( age >= 18 && age <= 65);// Your expression here
    
    _Bool eligible2 = (salary == 40000.0 || (age < 30 && hasLicense));// Your expression here
    
    _Bool eligible3 = (age >= 21 && salary >= 30000.0);// Your expression here

  

    printf("Role 1: Eligible = %d\n", eligible1);
    printf("Role 2: Eligible = %d\n", eligible2);
    printf("Role 3: Eligible = %d\n\n", eligible3);

    // --- Recalculation After Birthday ---
    // TODO: Increment the candidate's age by 1.
    int age1 = age + 1;
    

    printf("--- Eligibility After Birthday (Age: %d) ---\n", age1);
    // TODO: Recalculate all three boolean flags with the new age.
    eligible1 = (age1 >= 18 && age1 <= 65);// Your expression here
    eligible2 = (salary >= 40000.0 || (age1 <= 30 && hasLicense));// Your expression here
    eligible3 = (age1 >= 21 && salary >= 30000.0 );
    // Your expression here


    printf("Role 1: Eligible = %d\n", eligible1);
    printf("Role 2: Eligible = %d\n", eligible2);
    printf("Role 3: Eligible = %d\n", eligible3);

    return 0;
}