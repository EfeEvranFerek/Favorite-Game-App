#include <iostream>
using namespace std;


int main () {
string name, game;
cout << "Enter your name please: ";
getline (cin, name);
cout << "Hello " << name << endl;
cout << "That is a beatiful name " << name << endl ;
cout << "What is your favorite game? " << endl;
getline (cin, game) ;
cout << game << " is fun! " << endl ;
return 0;

}
