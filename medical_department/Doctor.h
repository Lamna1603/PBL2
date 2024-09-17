/// Kế thừa từ lớp User, thêm thuộc tính chuyên ngành
// Phương thức: xem lịch khám, tra cứu thông tin bệnh nhân và lịch sử khám bệnh, set phiếu chuẩn đoán

#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
#include "User.h"

using namespace std;

class Doctor : public User {
private:
    string specialty;

public:
    // Constructor
    Doctor(const string& username, const string& password, int id, const string& specialty);

    // Getters
    string getSpecialty() const;

    // Setters
    void setSpecialty(const string& specialty);

    // View schedule
    void viewSchedule() const;

    // Lookup patient information and medical history
    //tra cuu theo nhiều phơng thức: theo id, tên...
    void lookupPatientInfo(const string& patientName) const;

    // Set diagnosis report
    void setDiagnosisReport(const string& patientName, const string& report);
};

#endif // DOCTOR_H