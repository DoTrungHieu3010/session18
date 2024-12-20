#include<stdio.h>
int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct Student students[5]={};
	for (int i=0;i<5;i++){
		struct Student students[i];
		printf("Nhap ho va ten cua sinh vien %d: ", i+1);
		fgets(students[i].name, sizeof(students[i].name), stdin);
		printf("Nhap tuoi cua sinh vien %d: ", i+1);
		scanf("%d", &students[i].age);
		fflush(stdin);
		printf("Nhap so dien thoai cua sinh vien %d: ", i+1);
		fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
		printf("Thong tin cua sinh vien %d: \n", i+1);
		printf("%s\n", students[i].name);
		printf("%d\n", students[i].age);
		printf("%s", students[i].phoneNumber);	
	}
	return 0;
}
