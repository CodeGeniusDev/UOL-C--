#include <iostream>
using namespace std;

void calculateFamilyBudget()
{
    // Daily budgets for each person
    const double person1_daily = 986.0;
    const double person2_daily = 798.0;
    const double person3_daily = 389.0;
    const double person4_daily = 287.0;
    const double person5_daily = 300.0;
    const double person6_daily = 120.0;
    const double person7_daily = 333.0;

    // Calculate total daily budget
    double total_daily = person1_daily + person2_daily + person3_daily + 
                        person4_daily + person5_daily + person6_daily + person7_daily;

    // Calculate yearly budget (assuming 365 days)
    double yearly_budget = total_daily * 365;

    // Display individual daily budgets
    cout << "\nDaily Budget Breakdown:" << endl;
    cout << "Person 1: Rs. " << person1_daily << endl;
    cout << "Person 2: Rs. " << person2_daily << endl;
    cout << "Person 3: Rs. " << person3_daily << endl;
    cout << "Person 4: Rs. " << person4_daily << endl;
    cout << "Person 5: Rs. " << person5_daily << endl;
    cout << "Person 6: Rs. " << person6_daily << endl;
    cout << "Person 7: Rs. " << person7_daily << endl;

    // Display total daily and yearly budgets
    cout << "\nTotal Daily Budget: Rs. " << total_daily << endl;
    cout << "Total Yearly Budget: Rs. " << yearly_budget << endl;

    // Calculate and display monthly budget
    double monthly_budget = yearly_budget / 12;
    cout << "Average Monthly Budget: Rs. " << monthly_budget << endl;
}

int main()
{
    cout << "Family Budget Calculator for 7 Members" << endl;
    cout << "=====================================" << endl;
    
    calculateFamilyBudget();
    
    return 0;
}
