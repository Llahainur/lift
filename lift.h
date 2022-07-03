#ifndef LIFT_H
#define LIFT_H


class Lift
{
private:
    const int speed=500;
    int current_floor;    
public:
    int max_floors;
    int min_floors = 1;
    Lift();
    Lift(int max);

    void up_1();
    void down_1();
    int show_current_floor();

};

#endif // LIFT_H
