#include <iostream>
using namespace std;

class TicketBooking {
private:
    int seats[10];

public:
    TicketBooking() {
        for (int i = 0; i < 10; i++) {
            seats[i] = 0; // 0 = Available, 1 = Booked
        }
    }

    void displaySeats() {
        cout << "\nSeat Status:\n";
        for (int i = 0; i < 10; i++) {
            cout << "Seat " << i + 1 << " : ";
            if (seats[i] == 0)
                cout << "Available\n";
            else
                cout << "Booked\n";
        }
    }

    void bookTicket() {
        int seatNo;
        cout << "Enter seat number (1-10): ";
        cin >> seatNo;

        if (seatNo < 1 || seatNo > 10) {
            cout << "Invalid Seat Number!\n";
        }
        else if (seats[seatNo - 1] == 1) {
            cout << "Seat already booked!\n";
        }
        else {
            seats[seatNo - 1] = 1;
            cout << "Ticket booked successfully for Seat "
                 << seatNo << ".\n";
        }
    }

    void cancelTicket() {
        int seatNo;
        cout << "Enter seat number to cancel: ";
        cin >> seatNo;

        if (seatNo < 1 || seatNo > 10) {
            cout << "Invalid Seat Number!\n";
        }
        else if (seats[seatNo - 1] == 0) {
            cout << "This seat is not booked.\n";
        }
        else {
            seats[seatNo - 1] = 0;
            cout << "Ticket cancelled successfully.\n";
        }
    }
};

int main() {
    TicketBooking t;
    int choice;

    do {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Display Seats\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            t.displaySeats();
            break;

        case 2:
            t.bookTicket();
            break;

        case 3:
            t.cancelTicket();
            break;

        case 4:
            cout << "Thank you for using the system!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}