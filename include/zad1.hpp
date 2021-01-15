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

  void graj(std:: ostream& a) const
  {
    a = std::to_string(pseudonim) + ": " std::to_string(liczba_sluchaczy);
  }

const std::string& getPseudonim() const
{
  return pseudonim;
}

unsigned getSluchacze() const
{
  return liczba_sluchaczy;
}
}
