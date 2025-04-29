//Q94.Implement the class BigNumber handle arithmatic operation on large number.
#include <iostream>
#include <string>
using namespace std;
class BigNumber {
private:
    string num;
public:
    BigNumber(string n) {
        num = n;
    }
    void print() {
        cout << num << endl;
    }
    BigNumber add(const BigNumber& other) {
        int carry = 0, i = num.size() - 1, j = other.num.size() - 1;
        string result = "";
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num[i] - '0';
            if (j >= 0) sum += other.num[j] - '0';
            carry = sum / 10;
            result = (char)(sum % 10 + '0') + result;
            i--;
            j--;
        }
        return BigNumber(result);
    }
    BigNumber subtract(const BigNumber& other) {
        int borrow = 0, i = num.size() - 1, j = other.num.size() - 1;
        string result = "";
        while (i >= 0 || j >= 0) {
            int diff = (num[i] - '0') - (j >= 0 ? other.num[j] - '0' : 0) - borrow;
            if (diff < 0) {
                diff += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }
            result = (char)(diff + '0') + result;
            i--;
            j--;
        }
        return BigNumber(result);
    }
    BigNumber multiply(const BigNumber& other) {
        string result(num.size() + other.num.size(), '0');
        for (int i = num.size() - 1; i >= 0; --i) {
            int carry = 0;
            for (int j = other.num.size() - 1; j >= 0; --j) {
                int mul = (num[i] - '0') * (other.num[j] - '0') + (result[i + j + 1] - '0') + carry;
                carry = mul / 10;
                result[i + j + 1] = (mul % 10) + '0';
            }
            result[i] += carry;
        }
        return BigNumber(result);
    }
};
int main() {
    BigNumber num1("12345");
    BigNumber num2("6789");
    cout << "Num1: ";
    num1.print();
    cout << "Num2: ";
    num2.print();
    BigNumber sum = num1.add(num2);
    cout << "Sum: ";
    sum.print();
    BigNumber diff = num1.subtract(num2);
    cout << "Difference: ";
    diff.print();
    BigNumber prod = num1.multiply(num2);
    cout << "Product: ";
    prod.print();
    return 0;
}
