#include<stdio.h>

int main() {
    char name = 'B'; // char ประกาศตัวแปรชื่อ
    int age = 21; // int ประกาศตัวแปรอายุ
    float weight = 71.1; // float ประกาศตัวแปรน้ำหนัก

    printf("Student %c is %d  years old.\n", name,age ); // %c แสดงชื่อและ %d อายุของนักเรียน
    printf("His weights is %.1f kg.\n", weight); // แสดงน้ำหนักของนักเรียน%.1f แสดงทศนิยม 1 ตำแหน่ง

    return 0;
}