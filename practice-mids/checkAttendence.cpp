#include <iostream>

using namespace std;

void checkAttendence()
{
  char attending_event, bring_guest;
  char checkAnotherAttendence;

  cout << "Will you be attending the event? (Y/N): ";
  cin >> attending_event;

  // Attending event
  if (attending_event == 'Y' || attending_event == 'y')
  {
    cout << "Will you be bringing a guest? (Y/N): ";
    cin >> bring_guest;

    // Bringing guest
    if (bring_guest == 'Y' || bring_guest == 'y')
    {
      cout << "You are bringing a guest and are allowed to attend the event." << endl;
    }
    else if (bring_guest == 'N' || bring_guest == 'n')
    {
      cout << "You are not bringing a guest and are allowed to attend the event." << endl;
    }
    else
    {
      cout << "Invalid input. Please enter Y or N." << endl;
    }
  }

  else if (attending_event == 'N' || attending_event == 'n')
  {
    cout << "You are not attending the event." << endl;
  }
  else
  {
    cout << "Invalid input. Please enter Y or N." << endl;
  }

  cout << "Do you want to check another attendence? (Y/N): ";

  cout << "Thank you for your response. 😊" << endl;
}

int main()
{
  checkAttendence();
  return 0;
}
