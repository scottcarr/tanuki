#include <map>
#include <string>

using namespace std;

// do i need regexes?

class Lexer {

  public:

  enum tokenID {
    add, subtract, divide, multiply, equals
  };


  map<string, tokenID> tokenMap {
    {"+", add},
    {"-", subtract},
    {"*", multiply},
    {"/", divide},
    {"=", equals},
  };

};

