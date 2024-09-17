//thuộc tính id phòng khám, loại phòng khám,trạng thái
//phương thức:
#include "Clinic.h"

// Constructor
Clinic::Clinic(int id, const string& type, const string& status)
    : id(id), type(type), status(status) {}

// Getters
int Clinic::getId() const {
    return id;
}

string Clinic::getType() const {
    return type;
}

string Clinic::getStatus() const {
    return status;
}

// Setters
void Clinic::setId(int id) {
    this->id = id;
}

void Clinic::setType(const string& type) {
    this->type = type;
}

void Clinic::setStatus(const string& status) {
    this->status = status;
}

// Schedule appointment
void Clinic::scheduleAppointment(const string& date) {
    // Implement schedule appointment functionality
}

// Cancel appointment
void Clinic::cancelAppointment(const string& date) {
    // Implement cancel appointment functionality
}