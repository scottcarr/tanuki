#include <iostream>

#include "Parser.h"

using namespace std;

void usage() {
  printf("usage: tanuki <input file>\n");
}

Parser::Parser(string filename) {
  ifstream ifs;
  ifs.open(filename, ifstream::in);
  while (ifs.good()) {
    parseOnce(ifs);
  }
}

void Parser::parseOnce(ifstream& ifs) {
  if (parseExpr(ifs)) { return; }
}

bool Parser::parseExpr(ifstream& ifs) {
  return false;
}

int main(int argc, char** argv) {
  if (argc != 2) {
    usage();
    return -1;
  }
  string filename(argv[1]);
  cout << filename << endl;
  return 0;
}
