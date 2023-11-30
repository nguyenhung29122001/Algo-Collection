// Source: Series: "Algo-Zero" - Code Mely - Dev ơi mình đi đâu thế ?
// Tìm ước chung lớn nhất (UCLN) & Bội chung nhỏ nhất bằng Đệ quy

#include <iostream>

int GCD(int a, int b, int i){
    if(a%i == 0 && b%i == 0) return i;
    // Nếu a và b cùng chia hết cho i trả về kết quả cho hàm
    return GCD(a, b, i--); // Gọi đệ quy vè i giảm 1
}

int main(){
    int a, b, i;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    i = a > b ? b : a;
    // Gán cho i giá trị nhỏ hơn trong 2 số a và b
    std::cout << "UCLN = " << GCD(a, b, i) << std::endl;
    std::cout << "BCNN = " << a*b/GCD(a, b, i) << std::endl;

    return 0; 
}