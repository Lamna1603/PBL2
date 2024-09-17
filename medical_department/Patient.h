// Kế thừa từ lớp User, thêm thuộc tính địa chỉ và tuổi
// Cung cấp các phương thức get/set thông tin, đặt/hủy lịch khám, và xem lịch sử khám bệnh

#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include "User.h"

using namespace std;

class Patient : public User {
private:
    string address;
    int age;

public:
    // Constructor
    Patient(const string& username, const string& password, int id, const string& address, int age);

    // Getters
    string getAddress() const;
    int getAge() const;

    // Setters
    void setAddress(const string& address);
    void setAge(int age);

    // Schedule appointment
    void scheduleAppointment(const string& date);

    // Cancel appointment
    void cancelAppointment(const string& date);

    // View medical history
    void viewMedicalHistory() const;
};

#endif // PATIENT_H