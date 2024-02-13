#include <iostream>
#include <ctime>

int main(int argc, char* argv[]) {

    std::cout << "Enter the time zone offset to GMT: ";
    int time_zone_offset;
    std::cin >> time_zone_offset;

    int total_seconds = time(0);

    int current_second {total_seconds % 60};

    int total_minutes {total_seconds / 60};

    int current_minute {total_minutes % 60};

    int total_hours {total_minutes / 60};

    int current_hour {total_hours % 24 + time_zone_offset};

    std::cout << "Current time is " << current_hour << ":" << current_minute << ":" << current_second << '\n';

    return 0;
}