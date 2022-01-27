#include<iostream>
using namespace std;

int main() { 
    int quantity;
    int choice;

    int Qrooms = 0; // Quantity of Rooms
    int Qpasta = 0, Qburger =0, Qpizza =0, Qnoodles =0, Qshake =0, Qchicken =0; // Initial Quantity of the food items

    int Srooms = 0; // Sold Quantity of Rooms
    int Spasta = 0, Sburger =0, Spizza =0, Snoodles =0, Sshake =0, Schicken =0; // Sold Quantity of the food items

    int total_rooms = 0; 
    int total_pasta = 0, total_burger = 0, total_pizza = 0; 
    int total_noodles = 0, total_shake = 0, total_chicken = 0;


    cout << "\n\t Quantity of items we have - "<< endl;
    cout << "\n Rooms Available: " << endl;
    cin>>Qrooms;
    cout << "\n Quantity of Pasta: " << endl;
    cin>>Qpasta;
    cout << "\n Quantity of Burger: " << endl;
    cin>>Qburger;
    cout << "\n Quantity of Pizza: " << endl;
    cin>>Qpizza;
    cout << "\n Quantity of Noodles: " << endl;
    cin>>Qnoodles;
    cout << "\n Quantity of Shake: " << endl;
    cin>>Qshake;
    cout << "\n Quantity of Chicken: " << endl;
    cin>>Qchicken;
    
    m:
    cout << "\n\t\t\t Please Select From The Menu Options " << endl;
    cout << "\n\n1) Rooms";
    cout << "\n\n2) Pasta";
    cout << "\n\n3) Burger";
    cout << "\n\n4) Pizza";
    cout << "\n\n5) Noodles";
    cout << "\n\n6) Shake";
    cout << "\n\n7) Chicken";
    cout << "\n\n8) Information Regarding Sales And Collections";
    cout << "\n\n9) Exit";

    cout << "\n\n Please Enter Your Choice!";
    cin >>choice;

    
    switch (choice) {
        case 1:
            cout << "\n\n Enter the number of rooms you want: ";
            cin >>quantity;
            if(Qrooms-Srooms >= quantity) {
                Srooms = Srooms+quantity;
                total_rooms = total_rooms+quantity*1200;
                cout << "\n\n\t" << quantity << "room(s) allocated to you";
            } else {
                cout << "\n\n\tOnly" << Qrooms-Srooms << "room(s) remaining in hotel";
                break;
            }
        
        case 2:
            cout << "\n\n Enter Pasta Quantity: ";
            cin >>quantity;
            if(Qpasta-Spasta >= quantity) {
                Spasta = Spasta+quantity;
                total_pasta = total_pasta+quantity*250;
                cout << "\n\n\t" << quantity << "pasta(s) is ordered";
            } else {
                cout << "\n\n\tOnly" << Qpasta-Spasta << "pasta(s) remaining in hotel";
                break;
            }
        
        case 3:
            cout << "\n\n Enter Burger Quantity: ";
            cin >>quantity;
            if(Qburger-Sburger >= quantity) {
                Sburger = Sburger+quantity;
                total_burger = total_burger+quantity*100;
                cout << "\n\n\t" << quantity << "burger(s) is ordered";
            } else {
                cout << "\n\n\tOnly" << Qburger-Sburger << "burger(s) remaining in hotel";
                break;
            }
        
        case 4:
            cout << "\n\n Enter Pizza Quantity: ";
            cin >>quantity;
            if(Qpizza-Spizza >= quantity) {
                Spizza = Spizza+quantity;
                total_pizza = total_pizza+quantity*300;
                cout << "\n\n\t" << quantity << "pizza(s) is ordered";
            } else {
                cout << "\n\n\tOnly" << Qpizza-Spizza << "pizza(s) remaining in hotel";
                break;
            }
        
        case 5:
            cout << "\n\n Enter Noodles Quantity: ";
            cin >>quantity;
            if(Qnoodles-Snoodles >= quantity) {
                Snoodles = Snoodles+quantity;
                total_noodles = total_noodles+quantity*150;
                cout << "\n\n\t" << quantity << "noodles(s) is ordered";
            } else {
                cout << "\n\n\tOnly" << Qnoodles-Snoodles << "noodles(s) remaining in hotel";
                break;
            }
        
        case 6:
            cout << "\n\n Enter Shake Quantity: ";
            cin >>quantity;
            if(Qshake-Sshake >= quantity) {
                Sshake = Sshake+quantity;
                total_shake = total_shake+quantity*120;
                cout << "\n\n\t" << quantity << "shake(s) is ordered";
            } else {
                cout << "\n\n\tOnly" << Qshake-Sshake << "shake(s) remaining in hotel";
                break;
            }
        
        case 7:
            cout << "\n\n Enter Chicken Quantity: ";
            cin >>quantity;
            if(Qchicken-Schicken >= quantity) {
                Schicken = Schicken+quantity;
                total_chicken = total_chicken+quantity*350;
                cout << "\n\n\t" << quantity << "chicken(s) is ordered";
            } else {
                cout << "\n\n\tOnly" << Qchicken-Schicken << "chicken(s) remaining in hotel";
                break;
            }

        case 8:
            cout << "\n\n Information Regarding Sales And Collections ---> ";
            cout << "\n\n Rooms Related Information - ";
            cout << "\n\n Number of Rooms we have " << Qrooms;
            cout << "\n\n Number of Rooms we gave for rent " << Srooms;
            cout << "\n\n Number of Remaining Rooms " << Qrooms - Srooms;
            cout << "\n\n Total Room Collection of the day " << total_rooms;

            cout << "\n\n Pasta Related Information - ";
            cout << "\n\n Number of pasta we have " << Qpasta;
            cout << "\n\n Number of pasta we gave for rent " << Spasta;
            cout << "\n\n Number of Remaining pasta " << Qpasta - Spasta;
            cout << "\n\n Total Pasta Collection of the day " << total_pasta;

            cout << "\n\n Burger Related Information - ";
            cout << "\n\n Number of burger we have " << Qburger;
            cout << "\n\n Number of burger we gave for rent " << Sburger;
            cout << "\n\n Number of Remaining burger " << Qburger - Sburger;
            cout << "\n\n Total Burger Collection of the day " << total_burger;

            cout << "\n\n Pizza Related Information - ";
            cout << "\n\n Number of pizza we have " << Qpizza;
            cout << "\n\n Number of pizza we gave for rent " << Spizza;
            cout << "\n\n Number of Remaining pizza " << Qpizza - Spizza;
            cout << "\n\n Total Pizza Collection of the day " << total_pizza;
            
            cout << "\n\n Noodles Related Information - ";
            cout << "\n\n Number of Noodles we have " << Qnoodles;
            cout << "\n\n Number of Noodles we gave for rent " << Snoodles;
            cout << "\n\n Number of Remaining Noodles " << Qnoodles - Snoodles;
            cout << "\n\n Total Noodles Collection of the day " << total_noodles;

        case 9:
            exit(0);

        default:
            cout << "\n Please Select the numbers from mentioned above!";

    }

    goto m;

}