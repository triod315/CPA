/**
 * CPA: Flight booking system: part 1
 * triod315, 18.10.2019
 */
#include <bits/stdc++.h>

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    bool reserveSeats(int number_ob_seats);
    bool cancelReservations(int number_ob_seats);
private:
    int id;
    int capacity;
    int reserved;
};
// ...
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
// Save data to members according to limits
    this->id=id;
    this->capacity=capacity;
    this->reserved=reserved;
}
bool FlightBooking::reserveSeats(int number_ob_seats)
{
// try to add reservations and return 'true' on success
// keep the limits in mind
    if (100.0*(reserved+number_ob_seats)/capacity )
    return false;
}
bool FlightBooking::cancelReservations(int number_ob_seats)
{
// try to cancel reservations and return 'true' on success
// keep the limits in mind
return false;
}
int main() {
    int reserved = 0,
            capacity = 0;
    std::cout << "Provide flight capacity: ";
    std::cin >> capacity;
    std::cout << "Provide number of reserved seats: ";
    std::cin >> reserved;
    FlightBooking booking(1, capacity, reserved);
    std::string command = "";
    while (command != "quit")
    {
        booking.printStatus();
        std::cout << "What would you like to do?: ";
        std::cin>>command;


// handle the command
    }
    return 0;
}
