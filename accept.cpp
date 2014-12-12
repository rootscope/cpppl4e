#include <iostream>

using namespace std;

bool accept(){
  cout << "hit y or n\n";
  char input = 0;
  cin >> input;
  if (input == 'y') return true;
  return false;
}

bool accept2(){
  cout << "hit y or n\n";
  char input = 0;
  cin >> input;
  switch (input){
    case 'y':
      return true;
    case 'n':
      return false;
    default:
      cout << "access to the vault of wonders denied.\n";
      return false;
  }
}

bool accept3(){
  int tries = 1;
  while (tries<4){
    cout << "hit y or n\n";
    char input = 0;
    cin >> input;
    switch (input){
      case 'y':
        return true;
      case 'n':
        return false;
      default:
        cout << "wtf?\n";
        tries++;
    }
  }
  cout << "access to the vault of wonders denied.\n";
  return false;
}

int main(){
  accept3();
}