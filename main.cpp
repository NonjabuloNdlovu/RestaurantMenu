#include <iostream>

using namespace std;
int choice;
int option;
double total;
void pie()
{
    cout<<"you have chosen to buy a pie for R26"<<endl;
    total = total+26;
    cout<<"******************************"<<endl;
    cout<<"your total is "<<total<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}
void sushi()
{
  cout<<"you have chosen to buy a sushi for R66"<<endl;
    total = total+66;
    cout<<"******************************"<<endl;
    cout<<"your total is "<<total<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}
void burger()
{
  cout<<"you have chosen to buy a burger for R36"<<endl;
    total = total+36;
    cout<<"******************************"<<endl;
    cout<<"your total is "<<total<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}
void kota()
{
  cout<<"you have chosen to buy a kota for R25"<<endl;
    total = total+25;
    cout<<"******************************"<<endl;
    cout<<"your total is "<<total<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}
void pizza()
{
  cout<<"you have chosen to buy a pizza for R40"<<endl;
    total = total+40;
    cout<<"******************************"<<endl;
    cout<<"your total is "<<total<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}
void ribs()
{
  cout<<"you have chosen to buy ribs for R69"<<endl;
    total = total+69;
    cout<<"******************************"<<endl;
    cout<<"your total is "<<total<<endl;
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}
void capture()
{
    cout<<"WELCOME TO NONJABULO'S RESTAURANT"<<endl;
    cout<<"MENU"<<endl;
    cout<<"Enter 1 for pie R26"<<endl;
    cout<<"Enter 2 for sushi R66"<<endl;
    cout<<"Enter 3 for burger R36"<<endl;
    cout<<"Enter 4 for kota R25"<<endl;
    cout<<"Enter 5 for pizza R40"<<endl;
    cout<<"Enter 6 for ribs R69"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        pie();
        break;
    case 2:
        sushi();
        break;
    case 3:
        burger();
        break;
    case 4:
        kota();
        break;
    case 5:
        pizza();
        break;
    case 6:
        ribs();
        break;
    default:
        cout<<"out of bound"<<endl;
        break;
    }
}
int main()
{
   do{
      capture();
   }
   while(option !=70);
    return 0;
}
