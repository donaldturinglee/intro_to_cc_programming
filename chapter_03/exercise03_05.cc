#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

    std::cout << "Enter today's day: ";
    int today;
    std::cin >> today;

    std::cout << "Enter the number of days elapsed since today: ";
    int elapsed_days;
    std::cin >> elapsed_days;

    int future_day { (today + elapsed_days) % 7 };

    std::string today_name, future_day_name;

    switch (today) {
        case 0:
            today_name = "Sunday";
            break;
        case 1:
            today_name = "Monday";
            break;
        case 2:
            today_name = "Tuesday";
            break;
        case 3:
            today_name = "Wednesday";
            break;
        case 4:
            today_name = "Thursday";
            break;
        case 5:
            today_name = "Friday";
            break;
        case 6:
            today_name = "Saturday";
            break;
        default:
            break;
    }

    switch (future_day) {
        case 0:
            future_day_name = "Sunday";
            break;
        case 1:
            future_day_name = "Monday";
            break;
        case 2:
            future_day_name = "Tuesday";
            break;
        case 3:
            future_day_name = "Wednesday";
            break;
        case 4:
            future_day_name = "Thursday";
            break;
        case 5:
            future_day_name = "Friday";
            break;
        case 6:
            future_day_name = "Saturday";
            break;
        default:
            break;
    }

    std::cout << "Today is " << today_name << " and the future day is " << future_day_name << '\n';

    return 0;
}