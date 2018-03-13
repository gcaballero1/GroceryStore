//Author: Gabriel Caballero
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> Lata;
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
  Lata.push_back(nameItem);
  }
}
  while (!(input == 'Q' || input == 'q'));
  
  if (Lata.size()>0)
  {
  cout<<"==ITEMS TO BUY==\n";
  for (int j=0; j<Lata.size(); j++)
    {
        cout<<j+1<<" "<<Lata.at(j)<<endl;
    }
  }  
  else
  {
  cout<<"No items to buy!\n";
  }

  return 0;
}
