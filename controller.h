#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include "lift.h"
#include "atomic"

class Controller
{
public:
    Controller(Lift *lift);
    void call(int floor);
    void drive();
    int show_current_floor();

private:
    std::vector<int> queue;
    Lift *lift;
};

#endif // CONTROLLER_H
