#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

class Employee {
    string name;
    string date;
    string position;
    double salary;
public:
    Employee() : name(""), date(""), position(""), salary(0.0) {}
    Employee(string name, string date, string position, double salary) : name((name), date((date), position((position), salary(salary) {}
    friend ostream& operator<<(ostream& os, const Employee& employee) {
        os << "Name: " << employee.name << ", Hire date: " << employee.date << ", Position: " << employee.position << ", Salary: " << employee.salary;
        return os;
    }
    bool operator<(const Employee& other) const {
        return salary > other.salary;
    }
};

int main() {
    vector<Employee> employees;

    ifstream file_1("input.txt");
    if (!file_1.is_open()) {
        return false;
    }

    string name, date, position;
    double salary;
    while (inFile >> name >> date >> position >> salary) {
        employees.emplace_back(name, date, position, salary);
    }
    inFile.close();

    sort(employees.begin(), employees.end());
    for (const auto& employee : employees) {
        cout << employee << endl;
    }
    deque<Employee> employee_deque;
    copy(employees.begin(),employees.end(), back_inserter(employee_deque)
    ofstream file_2("output.txt");
    if (!file_2.is_open()) {
        return false;
    }
    for (const auto& employee : employees) {
        fi    le_2 << employee << endl;
    }
    for (const auto& employee : employee_deque) {
      file_2 << employee << endl;
    }
    file_2.close();

    return 0;
}
