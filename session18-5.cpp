#include<stdio.h>
#include<string.h>
int main(){
	int choice, checkAge;
	char checkName[50];
	struct Student{
		int id;
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct Student user[50]={
		{1, "abc", 18, "0123456789"},
		{2, "def", 19, "0246813579"},
		{3, "ghj", 20, "0524654746"},
		{4, "klm", 21, "0524542642"},
		{5, "nop", 22, "0252546342"},
	};
	printf("Moi ban nhap vao id sinh vien muon sua: ");
	scanf("%d", &choice);
	if (choice<0||choice>=5){
		printf("Khong tim thay id!");
		return 0;
	} 
	for (int i=0; i<5;i++){
		if (user[i].id==choice){
			printf("Ten ban muon sua: ");
			fflush(stdin);
			fgets(checkName, 50, stdin);
			strcpy(user[i].name, checkName);
			printf("Tuoi ban muon sua: ");
			scanf("%d", &checkAge);
			user[i].age=checkAge;
		}
	}
	printf("Danh sach sinh vien sau khi sua : \n");
	for(int i =0 ; i <5 ; i++){
	printf("Thong tin cua sinh vien %d: \n", i+1);
	printf("id: %d\n", user[i].id);
	printf("%s\n", user[i].name);
	printf("%d\n", user[i].age);
	printf("%s\n", user[i].phoneNumber);	
	}
	return 0;
}
	
	
	
 
