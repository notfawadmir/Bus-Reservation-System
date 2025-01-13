#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const int max_bus = 5;
const int seats_mini = 30;
const int seats_big = 50;
const int pltno_length = 5;
void addbus()
{
  ofstream outfile("bus data.txt", ios::app);
  outfile << " BUS INFORMATION " << endl;
  string pltno;
  int seats;
  cout << "Adding bus information !" << endl;
   cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
  int opt;
  for (size_t i = 0; i < max_bus; i++)
  {
    int j = i + 1;

    cout << "Bus no " << j << " information ! " << endl;
  start:
    cout << "Enter plate no of bus " << j << " :";
    cin >> pltno;
    if (pltno.length() != pltno_length)
    {
      cout << "Enter 5 character plate number!! " << endl;
      goto start;
    }
    else
    seats:
      cout << "Enter no of seats : ";
    cin >> seats;
    if (seats != seats_big && seats != seats_mini)
    {
      cout << "Enter valid number of seats (50 or 30) !!!! " << endl;
      goto seats;
    }
    else

      
    outfile << "Plate number of bus " << j << " is : " << pltno << endl;
    if (seats == seats_big)
    {
      outfile << "Number of seats for bus " << j << " are : " << seats << "(Big bus)" << endl;
    }
    else
    {
      outfile << "Number of seats for bus " << j << " are : " << seats << "(mini bus)" << endl;
    }
 cout << "Bus added successfully ! " << endl;
  opt:
  cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
    cout << "Do you want to add another bus ? " << endl;
    cout << "1- YES " << endl;
    cout << "2- NO " << endl;
    cout << "Option : ";
    cin >> opt;
    if (opt != 1 && opt != 2)
    {
      cout << "Enter valid option!!! " << endl;
      goto opt;
    }
    else if (opt == 2)
    {
      goto out;
    }

    else
      cout << "Add another bus ." << endl;
  }
out:
  cout << "Entering into main menu ! " << endl;

  outfile.close();
}
void reserveseats()
{
  string name;
  ofstream outfile("seat.txt", ios::app);
  outfile << "SEAT INFORMATION " << endl;
  int chs2;
  int opt;
  int seat;
  int seats;
  int chs;
chs:
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
  cout << "Do you want to reserve a seat. " << endl;
  cout << "1- YES " << endl;
  cout << "2- NO " << endl;
  cout << "Choose : ";
  cin >> chs;
  if (chs != 1 && chs != 2)
  {
    cout << "Enter valid option!!! " << endl;
    goto chs;
  }
  else if (chs == 2)
  {
    goto out;
  }
  else

  cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
  seat:
  
    cout << "Select your bus. " << endl;
  cout << "1- MINI BUS " << endl;
  cout << "2- BIG BUS " << endl;
  cout << "Choose : " ;
  cin >> seat;
  cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
  if (seat != 1 && seat != 2)
  {
    cout << "Enter valid option!!! " << endl;
    goto seat;
  }
  else if (seat == 2)
  {
    for (size_t i = 50; i > 0; --i)
    {
    opt3:
      cout << "You have " << i << " seats availble . " << endl;
      cout << "Want to book seats." << endl;
      cout << "1- YES " << endl;
      cout << "2- NO " << endl;
      cout << "Choose : " ;
      cin >> opt;
      cin.ignore();
      if (opt != 2 && opt != 1)
      {

        cout << "Enter valid option!!! " << endl;
        goto opt3;
      }
      else if (opt == 1)
      {
        cout << "Enter your name : " ;
        getline(cin, name);
        cout << "Your seat has been booked successfully !" << endl;

        outfile << "Name of passanger :" << name << endl;
        outfile << "Seat booked! (bigbus)" << endl;
      }
      else
        goto out;
    chs2:
    cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
      cout << "Do you want book anther seat or change bus." << endl;
      cout << "1- change bus " << endl;
      cout << "2- New seat  " << endl;
      cout << "0- Exit " << endl;
      cout << "Choose : " ;
      cin >> chs2;
      cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
      if (chs2 != 1 && chs2 != 2 && chs2 != 0)
      {
        cout << "Enter valid option!!! " << endl;
        goto chs2;
      }
      else if (chs2 == 2)
      {
        cout << "Book another seat ." << endl;
      }
      else if (chs2 == 1)
      {
        goto seat;
      }
      else
        goto out;
    }
  }
  else
  {
    for (size_t i = 30; i > 0; --i)
    {
      cout << "You have " << i << " seats availble . " << endl;
    opt4:
      cout << "Want to book seats." << endl;
      cout << "1- YES " << endl;
      cout << "2- NO " << endl;
      cout << "Choose : " ;
      cin >> opt;
      cin.ignore();
      if (opt != 2 && opt != 1)
      {
        cout << "Enter valid option!!! " << endl;
        goto opt4;
      }
      else if (opt == 1)
      {
        cout << "Enter your name : " ;
        getline(cin, name);
        cout << "Your seat has been booked successfully !" << endl;

        outfile << "Name of passanger :" << name << endl;
        outfile << "Seat booked! (mini bus)" << endl;
      }
      else
        goto out;
    chs5:
    cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
      cout << "Do you want book anther seat or change bus." << endl;
      cout << "1- change bus " << endl;
      cout << "2- New seat  " << endl;
      cout << "0-Exit " << endl;
      cout << "Choose : " ;
      cin >> chs2;
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
      if (chs2 != 1 && chs2 != 2 && chs2 != 0)
      {
        cout << "Enter valid option!!! " << endl;
        goto chs5;
      }
      else if (chs2 == 2)
      {
        cout << "Book another seat ." << endl;
      }
      else if (chs2 == 1)
      {
        goto seat;
      }
      else
        goto out;
    }
  }
out:
  cout << "Entering main menu !" << endl;
  outfile.close();
}
void bus_detail(string filename)
{
  ifstream infile(filename);

  int opt;

  cout << "Available bus information ." << endl;
up:
  cout << "Do you want get info " << endl;
  cout << "1- YES " << endl;
  cout << "2- NO " << endl;
  cout << "Option : " ;
  cin >> opt;
  if (opt != 1 && opt != 2)
  {
    cout << "Enter valid option!!! " << endl;
    goto up;
  }
  else if (opt == 2)
  {
    cout << "Exiting ." << endl;
  }
  else
  {
    if (!infile.is_open())
    {
      cerr << "Error opening the file." << std::endl;
    }
    else
    {
      string line;
      while (getline(infile, line))
      {

        cout << line << endl;
      }
      infile.close();
    }
  }
}
void seat_detail(string filename2)
{
  ifstream infile(filename2);

  int opt;

  cout << "Reserved seat information ." << endl;
up:
  cout << "Do you want get info " << endl;
  cout << "1- YES " << endl;
  cout << "2- NO " << endl;
  cout << "Option : " ;
  cin >> opt;
  if (opt != 1 && opt != 2)
  {
    cout << "Enter valid option!!! " << endl;
    goto up;
  }
  else if (opt == 2)
  {
    cout << "Exiting ." << endl;
  }
  else
  {
    if (!infile.is_open())
    {
      cerr << "Error opening the file." << std::endl;
    }
    else
    {
      string line;
      while (getline(infile, line))
      {

        cout << line << endl;
      }
      infile.close();
    }
  }
}
int main()
{
  string filename = "bus data.txt", filename2 = "seat.txt";
  int choice;
  cout << "-- WElCOME to our bus reservation system -- " << endl;
   cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
start:
  cout << "******** MAIN MENU ******** " << endl;
  cout << "******** Choose any option below. ********" << endl;
  cout << "1- Add Bus Info. " << endl;
  cout << "2- Book Seats." << endl;
  cout << "3- Available Buses." << endl;
  cout << "4- Reserved Seats." << endl;
  cout << "0- EXIT." << endl;
  cout << "Option :";
  cin >> choice;
  if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 0)
  {
    cout << "Invalid option !!!" << endl;
    goto start;
  }

  else if (choice == 1)
  {
    addbus();
    cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
    goto start;
  }
  else if (choice == 2)
  {
    reserveseats();
     cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
    goto start;
  }
  else if (choice == 3)
  {
    bus_detail(filename);
     cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
    goto start;
  }
  else if (choice == 4)
  {
    seat_detail(filename2);
     cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
    goto start;
  }
  else
    cout << "Exiting program !" << endl;
system("pause");
  return 0;
}