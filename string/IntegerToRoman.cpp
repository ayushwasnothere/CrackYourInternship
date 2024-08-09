class Solution {
public:
  string intToRoman(int num) {
    if (num <= 0)
      return "";
    string s;
    while (num > 0) {
      if (num >= 900) {
        if (num >= 1000) {
          int count = num / 1000;
          num = num % 1000;
          s.append(count, 'M');
        } else {
          num = num - 900;
          s += "CM";
        }
      } else if (num >= 400) {
        if (num >= 500) {
          num = num % 500;
          s += "D";
        } else {
          num = num - 400;
          s += "CD";
        }
      } else if (num >= 90) {
        if (num >= 100) {
          int count = num / 100;
          num = num % 100;
          s.append(count, 'C');
        } else {
          num = num - 90;
          s += "XC";
        }
      } else if (num >= 40) {
        if (num >= 50) {
          num = num % 50;
          s += "L";
        } else {
          num = num - 40;
          s += "XL";
        }
      } else if (num >= 9) {
        if (num >= 10) {
          int count = num / 10;
          num = num % 10;
          s.append(count, 'X');
        } else {
          num = num - 9;
          s += "IX";
        }
      } else if (num >= 4) {
        if (num >= 5) {
          num = num % 5;
          s += "V";
        } else {
          num = num - 4;
          s += "IV";
        }
      } else {
        s.append(num, 'I');
        num = 0;
      }
    }
    return s;
  }
};
