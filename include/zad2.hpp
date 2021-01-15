#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste

class PopGwiazda : public Artysta
{   
public:
    PopGwiazda(const std::string& s, unsigned n) 
    {
        setPseudonim(s);
        setLS(n);
    }

    void graj(std::ostream& a) const
    {
        a << "PopGwiazda: " << getPseudonim();
    }

    ~PopGwiazda() {}
};

class RapGwiazda : public Artysta
{   
public:
    RapGwiazda(const std::string& s, unsigned n) 
    {
        setPseudonim(s);
        setLS(n);
    }

    void graj(std::ostream& a) const
    {
        a << "RapGwiazda: " << getPseudonim();
    }

    ~RapGwiazda() {}
};

Artysta* stworzArtyste(const std::string& s)
{
    if (s.front() == std::toupper(s.front()))
    {   
        return new PopGwiazda("BTS", 1234);
    }
    else
    {
        return new RapGwiazda("Ye", 4321);
    }
};
