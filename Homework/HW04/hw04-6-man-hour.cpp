/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/
#include <stdio.h>

int main() {
    char employeeid[11];
    int workinghrs;
    double salaryperhour;

    printf("input the employees id(max. 10 chars): \n");
    scanf("%s", employeeid);

    printf("input the working hrs");
    scanf("%d", &workinghrs);

    printf("salary amount/hr: \n");
    scanf("%lf", &salaryperhour);

    double totalsalary = workinghrs * salaryperhour;

    printf("expected output:\n");
    printf("exployees id = %s\n", employeeid);
    printf("salary = u$ %.2lf\n", totalsalary);

    return 0;
}