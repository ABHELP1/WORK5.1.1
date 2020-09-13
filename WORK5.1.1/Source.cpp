#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Aa();
char ss,SS;
char* p, str[100];
int main() {
	p = str;
	scanf("%s", str, 99);//ป้อนได้ไม่เกิน99ตัว
	Aa();
}
void Aa() {
	while (*p != '\0') {
		if (*p >= 65 && *p <= 90) {
			ss = *p - 'A' + 'a';
			printf("%c", ss);
		}
		if (*p >= 97 && *p <= 122) {
			SS = *p - 'a' + 'A';
			printf("%c", SS);
		}
		p++;
	}
}