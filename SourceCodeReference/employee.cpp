/**************************************************************************************************
                                            FILE HEADER
              All copy rights reserved by SKILLFINITY TECHNOLOGIES PRIVATE LIMITED - 2016

 File Name: employee.cpp

 File Description: File containing the Function definitions of the Class Employee

 Author: Deepak Ramanna Hebbur

 Date Created: 13/10/2016

 Additional Remarks: None sp special to mention

**************************************************************************************************/

#include "employee.h"


**************************************************************************************************/
void Employee::Emp_SetEmployeeDetails(string strName,string strNum)
{
    //Set details
    emp_strEmpName = strName;
    emp_strEmpNum = strNum;
    //<Comment the important design decisions - why this has been implemented in this way>
}

/**************************************************************************************************
                                          FUNCTION HEADER
              All copy rights reserved by SKILLFINITY TECHNOLOGIES PRIVATE LIMITED - 2016

 Function Name: Get_EmployeeName

 Input Parameter Description:
                              none

 Return Parameter Description:
                              string containing Employee Name

 Function Name: Get_EmployeeName

 Function Description: Returns the Employee Name user of the function

 Author: Deepak Ramanna Hebbur

 Date Created: 13/10/2016

 Additional Remarks: None sp special to mention

**************************************************************************************************/
string Employee::Emp_GetEmployeeName()
{
    //<Comment the important design decisions - why this has been implemented in this way>
    return emp_strEmpName;
}

/**************************************************************************************************
                                          FUNCTION HEADER
              All copy rights reserved by SKILLFINITY TECHNOLOGIES PRIVATE LIMITED - 2016

 Function Name: Get_EmployeeNumber

 Input Parameter Description:
                              none

 Return Parameter Description:
                              string containing Employee Number

 Function Description: Returns the Employee Number user of the function

 Author: Deepak Ramanna Hebbur

 Date Created: 13/10/2016

 Additional Remarks: None sp special to mention

**************************************************************************************************/
string Employee::Emp_GetEmployeeNumber()
{
    //<Comment the important design decisions - why this has been implemented in this way>
    return emp_strEmpNum;
}
