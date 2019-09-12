#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int computer_amount, service_time, base_fee, add_fee;
    string drop_off, Pick_up;

    cout <<"Input Computer amount: " <<endl;
    cin >> computer_amount;
    cout <<"Input Service time: " << endl;
    cin >> service_time;
    cout <<"Drop off? (y/n): " << endl;
    cin >> drop_off;
    cout <<"Pick up? (y/n): " << endl;
    cin >> Pick_up;

    if(computer_amount == 1 or computer_amount == 2){
        base_fee = 50;
        add_fee = 0;
    } else if (computer_amount >=3 && computer_amount<=10){
        base_fee =100;
        add_fee =10;
    } else if (computer_amount>10){
        base_fee = 500;
        add_fee = 10;
    }

    if(service_time<=8 or service_time >=17){
        base_fee = base_fee*2;
    }

    if(drop_off == "y" && Pick_up == "y"){
        base_fee = base_fee - (base_fee*0.015);
    }

    cout << "$" << base_fee;

    return 0;
}
