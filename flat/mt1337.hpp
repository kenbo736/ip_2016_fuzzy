#ifndef MT1337_H
#define MT1337_H

#include "randomgenerator.hpp"

class MT1337 : public RandomGenerator {
    long long mt[624];
    int index;
    
    long long extractNumber();
    void twistIt();
    long long generateRangeValue(const long long &min, const long long &max);
public:
    MT1337(const unsigned int seed);
    long long generate();
    long long generate(long long min, long long max);
    long long generate(const std::map<std::string, std::vector<std::vector<int>>> &vars, std::string name);
    long long generate(const std::map<std::string, std::vector<std::vector<int>>> &vars, std::string name, long long min, long long max);
    uint64_t getSeed();
    void nextSeed();
};

#endif
