#include <iostream>
#include <string>

using namespace std;

struct validPassword
{
string sentence;
bool leng8 = false;
bool upper1 = false;
bool lower1 = false;
bool num1 = false;
bool specialChar = false;
};

bool isValidPasswordisValidPassword(struct validPassword data)
{

  for(int i = 0; i < data.sentence.length();i++)
  {
    if(isupper(data.sentence[i]))
      data.upper1 = true;
    else if(islower(data.sentence[i]))
      data.lower1 = true;
    else if(isdigit(data.sentence[i]))
      data.num1 = true;
    else if(isalnum(data.sentence[i]) != true)
      data.specialChar = true;
  }


  if (!data.leng8)
    cout << "The password must be 8 characters long" << endl;
  if (!data.upper1)
    cout << "The password must have at least one upper case letter" << endl;
  if (!data.lower1)
    cout << "The password must have at least one lower case letter" << endl;
  if (!data.num1)
    cout << "The password must have at least one digit" << endl;
  if (!data.specialChar)
    cout << "The password must have at least one special character" << endl;
  else
    cout << "This is a valid password" << endl;
  return false;
};

int main() {
  struct validPassword data;
  getline(cin, data.sentence);

  isValidPasswordisValidPassword(data);
} 