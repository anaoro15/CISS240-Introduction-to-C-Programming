// Name: aoro
// File: a10q01.cpp
//
// Description:
// This program is a simple payroll program

#include <iostream>
#include <iomanip>

int main()
{
    int employee_type, hours_of_work;
    double salary, total = 0.0;

    const double base_pay0 = 1000.0;
    const double base_pay1 = 960.50;
    const double base_pay2 = 0.0;

    const double hourly_wage0 = 10.50;
    const double hourly_wage1 = 8.50;
    const double hourly_wage2 = 6.10;

    const int hours_per_week = 40;

    const double overtime_rate0 = 12.0;
    const double overtime_rate1 = 11.55;
    const double overtime_rate2 = 7.0;

    
    std::cout << "Employee type: ";
    std::cin >> employee_type;
    
        while (employee_type != -1)
        {
                    
        std::cout << "Hours of work: ";
        std::cin >> hours_of_work;


            switch (employee_type)
            {
                case 0:
                    if (hours_of_work > hours_per_week)
                    {
                        int overtime = hours_of_work - hours_per_week;
                        salary = base_pay0 + (hours_per_week * hourly_wage0 + overtime * overtime_rate0);
                         std::cout << std::setprecision(2) << std::fixed<< "Salary: $" << salary << std::endl;
                    }
                    else
                    {
                        salary = base_pay0 + (hours_of_work * hourly_wage0);
                        std::cout << std::setprecision(2) << std::fixed << "Salary: $" << salary << std::endl;
                    }
                    break;

                case 1:
                    if (hours_of_work > hours_per_week)
                    {
                        int overtime = hours_of_work - hours_per_week;
                        salary = base_pay1 + (hours_per_week * hourly_wage1 + overtime * overtime_rate1);
                        std::cout << std::setprecision(2) << std::fixed << "Salary: $" << salary << std::endl;
                    }
                    else
                    {
                        salary = base_pay1 + (hours_of_work * hourly_wage1);
                         std::cout << std::setprecision(2) << std::fixed << "Salary: $" << salary << std::endl;
                    }
                    break;
                
                case 2:
                    if (hours_of_work > hours_per_week)
                    {
                        int overtime = hours_of_work - hours_per_week;
                        salary = base_pay2 + (hours_per_week * hourly_wage2 + overtime * overtime_rate2);
                        std::cout << std::setprecision(2) << std::fixed << "Salary: $" << salary << std::endl;
                    }
                    else
                    {
                        salary = base_pay2 + (hours_of_work * hourly_wage2);
                        std::cout << std::setprecision(2) << std::fixed << "Salary: $" << salary << std::endl;
                    }
                    break;
            }

             total += salary;
            std::cout << std::setprecision(2) << std::fixed << "Total: $" << total << std::endl;
            std::cout << '\n';
            std::cout << "Employee type: ";
            std::cin >> employee_type;
        }
       
    
        
    return 0;
}
