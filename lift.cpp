#include "lift.h"
#include "windows.h"
Lift::Lift()
{
   this->current_floor=1;
}
Lift::Lift(int max){
    this->current_floor=1;
    this->max_floors=max;
}

void Lift::up_1(){
    Sleep(this->speed);
    if(this->current_floor<=this->max_floors){
    this->current_floor++;

    }
}
void Lift::down_1(){
    Sleep(this->speed);
    if(this->current_floor>=this->min_floors){
    this->current_floor--;
    }
}
int Lift::show_current_floor(){
    return this->current_floor;
}
