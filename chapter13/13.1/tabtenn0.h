// tabtenn0.h -- a table-tennis base class
#ifndef TABENN0_H_
#define TABENN0_H_
#include <string>
using std::string;

class TableTennisPlayer {
  private:
    string firstName;
    string lastName;
    bool hasTable;
  public:
    TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; };
    void ResetTable(bool v) { hasTable = v; };
};

#endif
