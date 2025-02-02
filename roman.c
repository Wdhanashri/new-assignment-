#include <stdio.h>
int romanTOINT(char*s){
int total = 0, prev = 0, current;
while (*s) {
switch (*s) {
case 'I': current =1; break;
case 'V': current =5; break;
case 'X': current = 10; break;
case 'L': current = 50; break;
case 'C': current = 100; break;
case 'D': current = 500; break;
case 'M': current = 10000; break;
}
total += (current > prev) ? currrent - 2 * prev : current;
prev = current;
}
return total;
}
int main(){
char roman[16];
printf("Enter a Roman numeral: ");
scanf("%s", roman);
printf("Integer value: %d\n", romanToInt(roman));
return 0;
}
