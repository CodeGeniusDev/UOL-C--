#include <iostream>
using namespace std;

void checkInsuranceEligibility()
{
    int age;
    char preExistingConditions;
    char checkAnotherApplication;
    cout << "Enter applicant's age: ";
    cin >> age;
    
    cout << "Does the applicant have any pre-existing conditions? (Y/N): ";
    cin >> preExistingConditions;

    if (age >= 50 && (preExistingConditions == 'N' || preExistingConditions == 'n'))
    {
        cout << "Application Status: APPROVED" << endl;
        cout << "Applicant meets age requirement and has no pre-existing conditions." << endl;
    }
    else if ((age < 50 && (preExistingConditions == 'N' || preExistingConditions == 'n')) || 
             (age >= 50 && (preExistingConditions == 'Y' || preExistingConditions == 'y')))
    {
        cout << "Application Status: UNDER REVIEW" << endl;
        cout << "Further assessment of application required." << endl;
    }
    else
    {
        cout << "Application Status: DENIED" << endl;
        cout << "Applicant does not meet eligibility criteria." << endl;
    }

    cout << "Do you want to check another application? (Y/N): ";
    cin >> checkAnotherApplication;

    if (checkAnotherApplication == 'Y' || checkAnotherApplication == 'y')
    {
        checkInsuranceEligibility();
    }
    else
    {
        cout << "Thank you for using the insurance eligibility checker." << endl;
    }
}

int main()
{
    checkInsuranceEligibility();
    return 0;
}
