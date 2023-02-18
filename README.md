# Pcap_programming
https://gitlab.com/gilgil/sns/-/wikis/pcap-programming/pcap-programming  
https://www.tcpdump.org/pcap.html  
같이 알면 좋은 개념 - Struct Bit Field  
예시  
```c++
// bit_fields1.cpp
// compile with: /LD
struct Date {
   unsigned short nWeekDay  : 3;    // 0..7   (3 bits)
   unsigned short nMonthDay : 6;    // 0..31  (6 bits)
   unsigned short nMonth    : 5;    // 0..12  (5 bits)
   unsigned short nYear     : 8;    // 0..100 (8 bits)
};
```
출처 - https://learn.microsoft.com/ko-kr/cpp/cpp/cpp-bit-fields?view=msvc-170   

## pcapdevice-test 폴더는 따로 실행해보길 바란다.
폴더 내부 파일(코드파일)들을 제외하고는 다른 파일들과는 전혀 상관없음.
