/**************************************************************************************************
                                            FILE HEADER
              All copy rights reserved by SKILLFINITY TECHNOLOGIES PRIVATE LIMITED - 2016

 File Name: main.cpp

 File Description: main function of the project

 Author: Deepak Ramanna Hebbur

 Date Created: 13/10/2016

 Additional Remarks: Execution starts here!

**************************************************************************************************/

#include <iostream>
using namespace std;
#include "employee.h"

int main()
{
    Employee main_empEmployee1;
    main_empEmployee1.Emp_SetEmployeeDetails("Deepak","963001");

    //To test if employee details are properly set, printing the details in console
    cout << "Employee Name is - "<<main_empEmployee1.Emp_GetEmployeeName() << " and "
         << "employee Number is - " << main_empEmployee1.Emp_GetEmployeeNumber()<< endl;
	cout<<"Hello World"<<endl;
    return 0;
}
