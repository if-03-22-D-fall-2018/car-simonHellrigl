#include "car.h"

struct CarImplementation
{
    enum CarType car_type;
    enum Color color;
    double fill_level;
    double acceleration_rate;
    int speed;
    bool is_available;

};

static Car car_park[6];
struct CarImplementation aixam = {AIXAM, RED, 16.0, 0.0, 0, true};
struct CarImplementation fiat_multipla = {FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0, true};
struct CarImplementation fiat_multipla1 = {FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0, true};
struct CarImplementation fiat_multipla2 = {FIAT_MULTIPLA, ORANGE, 65-0, 0.0, 0, true};
struct CarImplementation jeep = {JEEP, SILVER, 80.0, 0.0, 0, true};
struct CarImplementation jeep1 = {JEEP, BLACK, 80.0, 0.0, 0, true};

Car get_car(enum CarType car_type)
{


}
enum CarType get_type( Car car)
{



}



enum Color get_color( Car car)
{


}
int  get_fill_level( Car car)
{


}
double get_acceleration_rate( Car car)
{


}
int get_speed(Car car)
{


}
void set_acceleration_rate(Car car, int rate)
{

}
void accelerate(Car car)
{

}
void init()
{

}
