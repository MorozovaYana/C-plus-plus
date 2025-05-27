#include <iostream>
#include <sstream>

class FlightBooking {
    
public:
    FlightBooking();
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    bool reserveSeats(int number_ob_seats);
    bool cancelReservations(int number_ob_seats);
    
    int getId() const {
        return id; }
    
private:
    int id;
    int capacity;
    int reserved;
    int getMaxAllowedReservations();
};


FlightBooking::FlightBooking() : id(0), capacity(0), reserved(0) {}

FlightBooking::FlightBooking(int id, int capacity, int reserved){
    this->id = id;
    this->capacity = capacity;
    this-> reserved = reserved;
    
    if (reserved < 0){
        this->reserved = 0;
    }else if(reserved > getMaxAllowedReservations()){
            this->reserved = getMaxAllowedReservations();
        }else{
            this->reserved = reserved;
        }
    }


void FlightBooking::printStatus(){
    
    double percentage = (static_cast<double>(reserved) / static_cast<double>(capacity)) * 100;
    std::cout << "Flight " << id << ": " << reserved << "/" << capacity << "(" << percentage << "%) seats taken" << std::endl;
}


// exercise 2

int FlightBooking::getMaxAllowedReservations(){
    return static_cast<int>(capacity * 1.05 + 0.5);
}


bool FlightBooking::reserveSeats(int number_of_seats)
{
    
    if (number_of_seats < 0){
        return false;}
    
    if (reserved + number_of_seats <= getMaxAllowedReservations()) {
        reserved += number_of_seats;
        return true;
        }
    return false;
}

bool FlightBooking::cancelReservations(int number_of_seats)
{
    if (number_of_seats < 0) return false;
       if (reserved - number_of_seats >= 0) {
           reserved -= number_of_seats;
           return true;
       }
    return false;
}

// exercise 3

bool parseCommand(const std::string& input, std::string& cmd, int& id, int& val) {
    std::istringstream iss(input);
    iss >> cmd;

    if (cmd == "quit") {
        return true;
    }

    if (!(iss >> id)) return false;

    if (cmd == "create" || cmd == "add" || cmd == "cancel") {
        if (!(iss >> val)) return false;
    } else {
        val = -1;
    }

    return true;
}






int main() {
    
    const int MAX_FLIGHTS = 10;
    FlightBooking flights[MAX_FLIGHTS];
    
       std::string input;
    std::string command;
    int id, value;
    
    while (true) {
           std::cout << "What would you like to do? ";
           std::getline(std::cin, input);

           if (!parseCommand(input, command, id, value)) {
               std::cout << "Cannot perform this operation: invalid input\n";
               std::cout << std::endl;
               continue;
           }

           if (command == "quit") break;

           if (command == "create") {
               bool created = false;
               for (int i = 0; i < MAX_FLIGHTS; ++i) {
                   if (flights[i].getId() == 0) {
                       flights[i] = FlightBooking(id, value, 0);
                       std::cout << std::endl;
                       created = true;
                       break;
                   }
               }
               if (!created)
                   std::cout << "Cannot perform this operation: flight limit reached\n";
               std::cout << std::endl;
           }
           else if (command == "delete") {
               bool found = false;
               for (int i = 0; i < MAX_FLIGHTS; ++i) {
                   if (flights[i].getId() == id) {
                       flights[i] = FlightBooking();
                       found = true;
                       break;
                   }
               }
               if (!found)
                   std::cout << "Cannot perform this operation: flight " << id << " not found\n";
               std::cout << std::endl;
           }
           else if (command == "add") {
               bool success = false;
               for (int i = 0; i < MAX_FLIGHTS; ++i) {
                   if (flights[i].getId() == id) {
                       if (!flights[i].reserveSeats(value))
                           std::cout << "Cannot perform this operation: capacity reached\n";
                       std::cout << std::endl;
                       success = true;
                       break;
                   }
               }
               if (!success)
                   std::cout << "Cannot perform this operation: flight " << id << " not found\n";
               std::cout << std::endl;
           }
           else if (command == "cancel") {
               bool success = false;
               for (int i = 0; i < MAX_FLIGHTS; ++i) {
                   if (flights[i].getId() == id) {
                       if (!flights[i].cancelReservations(value))
                           std::cout << "Cannot perform this operation: not enough reservations\n";
                       std::cout << std::endl;
                       success = true;
                       break;
                   }
               }
               if (!success)
                   std::cout << "Cannot perform this operation: flight " << id << " not found\n";
               std::cout << std::endl;
           }

          
           bool hasFlights = false;
           for (int i = 0; i < MAX_FLIGHTS; ++i) {
               if (flights[i].getId() != 0) {
                   flights[i].printStatus();
                   std::cout << std::endl;
                   hasFlights = true;
               }
           }
           if (!hasFlights) {
               std::cout << "No flights in the system\n";
               std::cout << std::endl;
           }
       }

    
   
return 0;
}
