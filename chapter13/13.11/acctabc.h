// acctabc.h bank account classes
#ifndef ACCTABC_H__
#define ACCTABC_H__
#include <iostream>
#include <string>
using namespace std;

class AcctABC {
  private:
    string fullName;
    long acctNum;
    double balance;
  protected:
    struct Formatting {
      ios_base::fmtflags flag;
      streamsize pr;
    };
    const string & FullName() const { return fullName; }
    long AcctNum() const { return acctNum; }
    Formatting SetFormat() const;
    void Restore(Formatting & f) const;
  public:
    AcctABC(const string & s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt) = 0; // pure virtual function
    double Balance() const { return balance; };
    virtual void ViewAcct() const = 0; // pure virtual function
    virtual ~AcctABC() {}
};

// Brass Amount Class
class Brass : public AcctABC {
  public:
    Brass(const string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal) {}
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass() {};
};

class BrassPlus : public AcctABC {
  private:
    double maxLoan;
    double rate;
    double owesBank;
  public:
    BrassPlus(const string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.10);
    BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) { maxLoan = m; }
    void ResetRate(double r) { rate = r; }
    void ResetOwes() { owesBank = 0; }
};

#endif
