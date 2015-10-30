#include <string>
#include <fstream>

using namespace std;

class Parser {
  public:
    Parser(string filename);
    void parseOnce(ifstream& ifs);
    bool parseExpr(ifstream& ifs);
};
