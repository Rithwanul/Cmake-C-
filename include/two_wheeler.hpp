#ifndef TWO_WHEELER_HPP
#define TWO_WHEELER_HPP

#include "vehicle.hpp"

class TwoWheeler : public Vehicle
{
public:
    virtual void kickStart() const = 0;
};

#endif // TWO_WHEELER_HPP