#pragma once

#include "zad1.hpp"

template<typename T>
class ArtystaPlusInstrument
{
private:
    Artysta a;
    T i;
public:
    ArtystaPlusInstrument(const Artysta& art, const T& in) : a(art), i(in) {}

    unsigned koncert()
    {
        return i.liczbaUczestnikow(a->getSluchacze());
    }

};

