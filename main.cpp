//Author: Gabriel Caballero
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string nameItem;
    do
    {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  
  if (input == 'A' || input == 'a')
  {
  cout<<"What is the item?\n";
  cin>>nameItem;

  if (numItems > 4)
  {
  cout<<"You'll need a bigger list!\n";
  }
  else
  {
  list[numItems]=nameItem;
  numItems = numItems + 1;
  }
  
  }
}
  while (!(input == 'Q' || input == 'q'));

  return 0;
}
