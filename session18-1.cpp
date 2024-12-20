#include<stdio.h>
#include<string.h>
int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct Student user01={"Do Trung Hieu", 18, "0854614222"};
	printf("Thong tin cua sinh vien: \n");
	printf("%s\n", user01.name);
	printf("%d\n", user01.age);
	printf("%s", user01.phoneNumber);
	
	return 0;
}
