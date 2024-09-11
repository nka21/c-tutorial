#include <stdio.h>

int main() {
    // 変数の宣言と初期化
    char name[] = "Bro"; // array of characters (文字列)
    int age = 21;        // integer (整数型)
    char grade = 'C';    // single character (文字型)
    float gpa = 2.05;    // floating point number (浮動小数点型)

    // 各変数の値を出力
    printf("Hello %s\n", name);                   // %s: string (文字列)
    printf("You are %d years old\n", age);        // %d: decimal (整数)
    printf("Your average grade is %c\n", grade);  // %c: character (文字)
    printf("Your gpa is %f\n", gpa);              // %f: float (浮動小数点数)

    return 0;
}
