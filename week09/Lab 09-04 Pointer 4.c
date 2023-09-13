#include <stdio.h>
  
int main()
{
  int valueA;
  int valueB;
  int *ptrA = &valueA;
  int *ptrB = &valueB;
   
  scanf("%d %d", &valueA, &valueB);
 
  // Swap
  int tmp = *ptrA; // สร้างตัวแปรชั่วคราวเพื่อเก็บค่า
  *ptrA = *ptrB; // แก้ไขค่าของ ptrA โดยใช้ Pointer ให้เป็นค่าของ ptrB
  *ptrB = tmp; // แก้ไขค่าของ ptrB โดยใช้ Pointer ให้เป็นค่าของ tmp
 
  printf("%d %d", valueA, valueB);
  
  return 0;
}