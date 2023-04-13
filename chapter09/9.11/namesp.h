#include <string>
using namespace std;

// create the pers and debts namespaces
namespace pers {
  struct Person {
    string fname;
    string lname;
  };
  void getPerson(Person &);
  void showPerson(const Person &);
}

namespace debts {
  using namespace pers;
  struct Debt {
    Person name;
    double amount;
  };
  void getDebt(Debt &);
  void showDebt(const Debt &);
  double sumDebts(const Debt ar[], int n);
}
