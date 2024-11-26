// mini_db.cpp - A simplified C++ implementation of a database-like functionality

#include <iostream>
#include <vector>
#include <string>

#define MAX_TEXT_LEN 4096

class Record {
public:
    int id;
    int age;
    std::string address;

    Record(int id, int age, const std::string &address) : id(id), age(age), address(address) {}
};

class Database {
private:
    std::vector<Record> records;

public:
    // Function to add a new record
    void add_record(int id, int age, const std::string &address) {
        if (records.size() >= MAX_TEXT_LEN) {
            std::cout << "Database is full!" << std::endl;
            return;
        }
        records.emplace_back(id, age, address);
        std::cout << "Record added: ID=" << id << ", Age=" << age << ", Address=" << address << std::endl;
    }

    // Function to display all records
    void display_records() {
        std::cout << "\nDisplaying all records:" << std::endl;
        for (const auto &record : records) {
            std::cout << "ID=" << record.id << ", Age=" << record.age << ", Address=" << record.address << std::endl;
        }
    }

    // Function to query records by age (simple implementation of WHERE clause)
    void query_by_age(int age) {
        std::cout << "\nQuerying records with Age=" << age << ":" << std::endl;
        for (const auto &record : records) {
            if (record.age == age) {
                std::cout << "ID=" << record.id << ", Age=" << record.age << ", Address=" << record.address << std::endl;
            }
        }
    }
};

// Main function to demonstrate basic functionality
int main() {
    Database db;
    db.add_record(1, 25, "123 Main St");
    db.add_record(2, 30, "456 Elm St");
    db.add_record(3, 25, "789 Oak St");

    db.display_records();

    db.query_by_age(25);

    return 0;
}
