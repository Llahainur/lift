#include "controller.h"
#include <vector>
#include <qdebug.h>
#include <deque>

int Controller::show_current_floor(){
    return this->lift->show_current_floor();
}

Controller::Controller(Lift *lift)
{
    this->lift=lift;
}

void Controller::call(int floor){
    if (floor <= lift->max_floors and floor >= lift->min_floors)
    this->queue.push_back(floor);
}

void Controller::drive(){
    int aim = this->queue.at(0);

    while(aim!=this->lift->show_current_floor()){
    if(aim > this->lift->show_current_floor()){
        this->lift->up_1();
        qDebug() << "up";
    }
    else if(aim < this->lift->show_current_floor()){
        this->lift->down_1();
        qDebug() << "down";
    }
    }
    //qDebug()<< lift->show_current_floor();
    if (this->queue.size()!=0)
    this->queue.erase(this->queue.begin());

    return;

}


void::Controller::drive_till_the_end(){
    while (this->queue.size()!=0) {
        std::sort(queue.begin(),queue.end());
        drive();
        qDebug()<<this->show_current_floor();
    }
}

bool Controller::is_in_queue(int floor){
    if ( std::find(queue.begin(), queue.end(), floor) != queue.end() )
        return true;
    else
        return false;
}
