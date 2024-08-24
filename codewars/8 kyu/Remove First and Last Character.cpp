#include <string>

using namespace std;

string sliceString (string str )
{
  str.pop_back(); // removes last /back character from str
  str.erase(str.begin());// removes first/front character from str
return str;
}
