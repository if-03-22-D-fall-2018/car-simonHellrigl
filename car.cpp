#include "car.h"

struct CarImplementation
{
    enum CarType car_type;
    enum Color color;
    double fill_level;
    double acceleration_rate;
    int speed;
    bool is_available;
    double max_accelaration;
    double min_accelaration;

};

//static Car car_park[6];
struct CarImplementation aixam = {AIXAM, RED, 16.0, 0.0, 0, true, 1.00, -8.00};
struct CarImplementation fiat_multipla = {FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0, true,2.26, -8.00};
struct CarImplementation fiat_multipla1 = {FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0, true,2.26, -8.00};
struct CarImplementation fiat_multipla2 = {FIAT_MULTIPLA, ORANGE, 65-0, 0.0, 0, true, 2.26, -8.00};
struct CarImplementation jeep = {JEEP, SILVER, 80.0, 0.0, 0, true, 3.14, -8.00};
struct CarImplementation jeep1 = {JEEP, BLACK, 80.0, 0.0, 0, true, 3.14, -8.00};

static Car car_park[6] = {&aixam, &fiat_multipla, &fiat_multipla1, &fiat_multipla2, &jeep, &jeep1};


Car get_car(enum CarType car_type)
{
    for (int i = 0; i < 6; i++)
    {
        if (car_park[i]->car_type == car_type && car_park[i]->is_available == true)
        {
            car_park[i]->is_available = false;
            return car_park[i];
        }
    }
    return 0;

}
enum CarType get_type( Car car)
{
    return car->car_type;



}



enum Color get_color( Car car)
{
    return car->color;


}
int  get_fill_level( Car car)
{
    return car->fill_level;


}
double get_acceleration_rate( Car car)
{
    return car->acceleration_rate;


}
int get_speed(Car car)
{
    return car->speed;


}
void set_acceleration_rate(Car car, double rate)
{
    if (rate > car->max_accelaration)
    {
        car->acceleration_rate = car->max_accelaration;
    }
    else if (rate < car->min_accelaration)
    {
        car->acceleration_rate = car->min_accelaration;
    }
    else
    {
        car->acceleration_rate = rate;
    }

}
void accelerate(Car car)
{


}
void init()
{
    for (int i = 0; i < 6; i++)
    {
        car_park[i]->is_available = true;
        car_park[i]->acceleration_rate = 0;
    }

}
