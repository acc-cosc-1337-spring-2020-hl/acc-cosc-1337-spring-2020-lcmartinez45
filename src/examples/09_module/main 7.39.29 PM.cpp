#include "temperature_data.h"
#include <iostream>
//no tests bc if no internet, no database test will fail

int main() 
{
    std::vector<Temperature> out_temps{
        Temperature(1, 99.9), Temperature(2, 98.5), Temperature(3, 101.1), Temperature(4, 98.9), Temperature(5, 102.5), Temperature(6, 98.4)};
    
    TemperatureData data;
    
    data.save_temps(out_temps);
    
    std::vector<Temperature> in_temps = data.get_temps();
    
    for (auto temp : in_temps)
    {
        std::cout << temp.get_hour() << " " << temp.get_reading() << "\n";
    }

	return 0;
}
