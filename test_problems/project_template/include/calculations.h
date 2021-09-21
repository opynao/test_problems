#pragma once
#include <cstdint>
#include <cmath>

uint32_t RaiseNumberToPower(const uint8_t number, const uint8_t power)
{
    return static_cast<uint32_t>(std::pow(number, power));
}

uint32_t QuantityBeautifulNumbers(const uint8_t numberOfObjects, const uint8_t timesRepetition)
{
    uint32_t sum{};
    for (uint8_t i = 1; i <= numberOfObjects; ++i)
    {
        if (i == numberOfObjects)
            sum += RaiseNumberToPower(i, timesRepetition);
        else
            sum += 2 * RaiseNumberToPower(i, timesRepetition);
    }
    return sum;
}