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
    void drive_till_the_end();
    int show_current_floor();
    bool is_in_queue(int floor);

private:
    std::vector<int> queue;
    Lift *lift;
};

#endif // CONTROLLER_H
