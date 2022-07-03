#include "controller.h"
#include <vector>

int Controller::show_current_floor(){
    return this->lift->show_current_floor();
}

Controller::Controller(Lift *lift)
{
    this->lift=lift;
}

void Controller::call(int floor){
    this->queue.push_back(floor);
}

void Controller::drive(){
    std::vector<int> *q = &this->queue;
    int aim = q->at(0);
    q->erase(q->begin());
    while(true){
    if(aim <this->lift->show_current_floor())
        this->lift->up_1();
    else if(aim > this->lift->show_current_floor())
        this->lift->down_1();
    else
        return;
    }

}

