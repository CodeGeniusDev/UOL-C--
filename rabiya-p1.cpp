#include<iostream>
using namespace std;
int main()
{
  int marks;
  cout<<"enter marks ";
  cin>>marks;
  if(marks>=0 && marks<=100)
  {
    if(marks<=90)
    {
      cout<<"garde A";
    }

    else if (marks>=80 && marks<=89)
    {
      cout<<"grade B";
    }
    else if (marks>=70&& marks<=79)
    {
      cout<<"grade C";
    }
    else if (marks>=60 && marks<=69)
    {
      cout<<"grade D";
    }
    else
    {
      cout<<"grade F";
    }
  }
  else
  {
    cout<<"invalid marks";
  }
  return 0;
}