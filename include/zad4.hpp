#include "zad1.hpp"

#include <exception>
#include <vector>

std::vector<Artysta> stworz_zespol(int n, const std::string& s)
{
    if (s.size() != n)
    {
        throw logic_error("error");
    }
    else
    {   
        vector<Artysta> v1;
        for (int i = 0; i < n; i++)
        {
            v.push_back(Artysta(s, i + 1));
        };

        return v1;
    };
}
