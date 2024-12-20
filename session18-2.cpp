#include<stdio.h>
#include<string.h>
int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct Student user01;
	printf("Nhap ho va ten cau sinh vien: ");
	fgets(user01.name, sizeof(user01.name), stdin);
	printf("Nhap tuoi cua sinh vien: ");
	scanf("%d", &user01.age);
	fflush(stdin);
	printf("Nhap so dien thoai cua sinh vien: ");
	fgets(user01.phoneNumber, sizeof(user01.phoneNumber), stdin);
	printf("Thong tin cua sinh vien: \n");
	printf("%s\n", user01.name);
	printf("%d\n", user01.age);
	printf("%s", user01.phoneNumber);
	
	return 0;
}
