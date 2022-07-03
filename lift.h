#ifndef LIFT_H
#define LIFT_H


class Lift
{
private:
    const int speed=0;
    int current_floor;
    int max_floors;
    const int min_floors = 1;
public:
    Lift();
    Lift(int max);

    void up_1();
    void down_1();
    int show_current_floor();

};

#endif // LIFT_H
