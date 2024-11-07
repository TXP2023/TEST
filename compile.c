#include <windows.h>
int main(void) {

    //生成可执行文件
    system("g++ data.cpp -o data.exe");
    system("g++ Correct_code.cpp -o Correct_code.exe");
    system("g++ my_code.cpp -o my_code.exe");
    return 0;
}