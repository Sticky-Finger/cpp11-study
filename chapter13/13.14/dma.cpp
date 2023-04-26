#include "dma.h"
#include <cstring>
using namespace std;

// BaseDMA methods
BaseDMA::BaseDMA(const char * l, int r) {
  label = new char[strlen(l) + 1];
  strcpy(label, l);
  rating = r;
}

BaseDMA::BaseDMA(const BaseDMA & rs) {
  label = new char[strlen(rs.label) + 1];
  strcpy(label, rs.label);
  rating = rs.rating;
}

BaseDMA::~BaseDMA() {
  delete [] label;
}

BaseDMA & BaseDMA::operator=(const BaseDMA & rs) {
  if (this == &rs)
    return *this;
  delete [] label;
  label = new char[strlen(rs.label) + 1];
  strcpy(label, rs.label);
  rating = rs.rating;
  return *this;
}

ostream & operator<<(ostream & os, const BaseDMA & rs) {
  os << "Label: " << rs.label << endl;
  os << "Rating: " << rs.rating << endl;
  return os;
}

// LacksDMA methods
LacksDMA::LacksDMA(const char * c, const char * l, int r) : BaseDMA(l, r) {
  strncpy(color, c, 39);
  color[39] = '\0';
}

LacksDMA::LacksDMA(const char * c, BaseDMA & rs) : BaseDMA(rs) {
  strcpy(color, c, COL_LEN - 1);
  color[COL_LEN - 1] = '\0';
}

ostream & operator<<(ostream & os, const LacksDMA & ls) {
  os << (const BaseDMA &) ls;
  os << "Color: " << ls.color << endl;
  return os;
}

// HasDMA methods
HasDMA::HasDMA(const char * s, const char * l, int r) : BaseDMA(l, r) {
  style = new char[strlen(s) + 1];
  strcpy(style, s);
}

HasDMA::HasDMA(const char * s, const BaseDMA & rs) : BaseDMA(rs) {
  style = new char[strlen(s) + 1];
  strcpy(style, s);
}

HasDMA::HasDMA(HasDMA & hs) : HasDMA(hs) {
  style = new char[strlen(hs.style) + 1];
  strcpy(style, hs.style);
}

HasDMA::~HasDMA() {
  delete [] style;
}

HasDMA & HasDMA::operator=(const HasDMA & hs) {
  if (this == &hs)
    return *this;
  BaseDMA::operator=(hs);
  delete [] style;
  style = new char[strlen(hs.style) + 1];
  strcpy(style, hs.style);
  return *this;
}

ostream & operator<<(ostream & os, const HasDMA & hs) {
  os << (const BaseDMA &) hs;
  os << "Style: " << hs.style << endl;
  return os;
}
