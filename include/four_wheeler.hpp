#ifndef FOUR_WHEELER_HPP
#define FOUR_WHEELER_HPP

#include "vehicle.hpp"

class FourWheeler : public Vehicle
{
public:
    virtual void openTrunk() const = 0;
};

#endif // FOUR_WHEELER_HPP
