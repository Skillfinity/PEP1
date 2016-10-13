/**************************************************************************************************
                                            FILE HEADER
              All copy rights reserved by SKILLFINITY TECHNOLOGIES PRIVATE LIMITED - 2016

 File Name: employee.h

 File Description: File containing the declaration of Class Employee

 Author: Deepak Ramanna Hebbur

 Date Created: 13/10/2016

 Additional Remarks: None sp special to mention

**************************************************************************************************/

#include <iostream>
using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

//Class declaration to store and modify employee details
class Employee
{
private:
    string emp_strEmpName;
    string emp_strEmpNum;
public:
    void Emp_SetEmployeeDetails(string,string);
    string Emp_GetEmployeeName();
    string Emp_GetEmployeeNumber();
};

#endif // EMPLOYEE_H
