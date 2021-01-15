#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste

class PopGwiazda : public Artysta
{
  PopGwiazda(const std:: string& s, unsigned n) :pseudonim(s), liczba_sluchaczy(n){}

  void graj(std:: ostream& a) const
  {
    a <<"PopGwiazda: " << pseudonim;
  }

  ~PopGwiazda(){}
};

class RapGwiazda : public Artysta
{
  RapGwiazda(const std:: string& s, unsigned n) :pseudonim(s), liczba_sluchaczy(n){}

    void graj(std:: ostream& a) const
  {
    a <<"RapGwiazda: " << pseudonim;
  }

  ~RapGwiazda(){}
};

Artysta* stworzArtyste(const std::string& s)
{
  if(front(s)==std::toupper(front(s)))
  {
    return new PopGwiazda("BTS",1234);
  }
  else
  {
    return new RapGwiazda("Ye",4321);
  }
};

