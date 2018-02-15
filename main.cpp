//Authors: Mohammed Almheiri
#include<iostream>
#include<string>

using namespace std;

int main()
{ 



  //declare variables

string a;
string b;
int lucky;
  
  //get user input

cout<< " What is your first name? " << endl;
cin>> a;


cout<< " What is  your last name? " << endl;
cin>> b;
 
  //tell fortune

cout<<" Welcome, " << a[0] << " . " << b[0] << ". " << " , here is your fortune..." <<endl;
cout<< " your lucky number is " << a.length() <<endl;
 
 if ( a[0]== 'a' || a[0]=='e' || a[0]== 'i' || a[0]== 'o' || a[0]== 'u' || a[0]== 'A' || a[0]== 'E' || a[0]== 'I' || a[0]== 'O' || a[0]== 'U')
{

cout << " You are destind to be famous !\n";
}
else if ( a[0]>65 && a[0]<90 || a[0]> 97 && a[0]<122 )
{

cout<< " you should keep a low profile.\n";
}

int len= b.length();

if ( b[len-1] == 'a' || b[len-1] == 'e' || b[len-1] == 'i' || b[len-1] == 'o' || b[len-1] == 'u')
{

cout<< " you have already met your true love.\n";
cout<< " have a good day!\n";
}
else
{

cout<< " have a good day!\n";
}

  return 0;
}
