#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

class Artysta
{
  private:
  std::string pseudonim;
  unsigned  liczba_sluchaczy;
  public:

  Artysta() :pseudonim("Anonim"), liczba_sluchaczy(0){}
  Artysta(const std:: string& s, unsigned n) :pseudonim(s), liczba_sluchaczy(n){}

  virtual void graj(std:: ostream& a) const
  {
    a << pseudonim << ": " << liczba_sluchaczy;
  }

const std::string& getPseudonim() const
{
  return pseudonim;
}

unsigned getSluchacze() const
{
  return liczba_sluchaczy;
}

    void setPseudonim(std::string s)
    {
        pseudonim = s;
    }

    void setLS(unsigned L)
    {
        liczba_sluchaczy = L;
    }

virtual ~Artysta(){}
};
