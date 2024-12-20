#include<stdio.h>
#include<string.h>
int main(){
	int choice, pos, viTri, found;
	int n=5;
	int mainId=6;
	char fixName[30];
	char fixPrice[20];
	char foundName[30];
	struct Dish{
		int id;
		char name[30];
		char price[20];
	};
	struct Dish menu[100]={
		{1, "Bingsu thai xanh", "50.000"},
		{2, "Bingsu duong den", "60.000"},
		{3, "Bingsu xoai", "55.000"},
		{4, "Bingsu dau", "50.000"},
		{5, "Bingsu chanh day", "60.000"},
	};
	printf("-------MENU-------\n");
	printf("1. In ra gia tri cac phan tu co trong menu\n");
	printf("2. Them mot phan tu\n");
	printf("3. Sua mot phan tu\n");
	printf("4. Xoa mot phan tu\n");
	printf("5. Sap xep cac phan tu\n");
	printf("6. Tim kiem phan tu theo ten\n");
	printf("7. Thoat\n");
	do{
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &choice);
		if(choice<0||choice>7){
			printf("Lua chon khong hop le. Moi ban nhap lai: ");
			scanf("%d", &choice);
		}
		switch(choice){
			case 1: //In ra gia tri
				printf("-----menu-----\n");
				for (int i=0;i<n;i++){
					printf("%d. %s: %s\n", menu[i].id, menu[i].name, menu[i].price);
				}
				break;
			case 2: //Them phan tu
				if (n<sizeof(menu)){
					mainId=n+1;
					menu[n].id=mainId++;
					printf("Nhap ten mon an ban muon them: ");
					fflush(stdin);
					fgets(menu[n].name, sizeof(menu[n].name), stdin);
					viTri=strcspn(menu[n].name, "\n");
					menu[n].name[viTri]='\0';
					printf("Nhap gia tien ban muon them: ");
					fgets(menu[n].price, sizeof(menu[n].price), stdin);
					viTri=strcspn(menu[n].price, "\n");
					menu[n].price[viTri]='\0';
					n++;
				} else {
					printf("Menu da day!");
				}
				break;
			case 3: //Sua phan tu
				printf("Nhap vi tri ban muon sua: ");
				scanf("%d", &pos);
				if(pos<0||pos>n){
					printf("Vi tri khong hop le. Moi ban nhap lai: ");
					scanf("%d", &pos);
				}
				printf("Nhap ten mon an ban muon sua: ");
				fflush(stdin);
				fgets(fixName, 30, stdin);
				viTri=strcspn(fixName, "\n");
				fixName[viTri]='\0';
				printf("Nhap gia ban muon sua: ");
				fgets(fixPrice, 20, stdin);
				viTri=strcspn(fixPrice, "\n");
				fixPrice[viTri]='\0';
				strcpy(menu[pos-1].name, fixName);
				strcpy(menu[pos-1].price, fixPrice);
				pos=strcspn(fixName, "\n");
				break;
			case 4: //Xoa phan tu
				if (n > 0) {
       				menu[n - 1].id = 0;
        			strcpy(menu[n - 1].name, "");
        			strcpy(menu[n - 1].price, "");
       		 		n--;
        			printf("Da xoa phan tu cuoi cung\n");
    			} else {
        			printf("Khong co gi de xoa\n");
    			}
				break;
			case 5: //Sap xep tang dan
					//Em chua lam duoc
			case 6:	//Tim kiem phan tu
				found=0;
				printf("Nhap ten ban muon tim kiem: ");
				fflush(stdin);
				fgets(foundName,30,stdin);
				for (int i=0; i<n;i++){
					if(menu[i].name==foundName){
						found++;
					}	 
				}
				if (found=1){
					printf("Tim thay ten\n");
				}
				break;
			case 7:
				return 0;
			default:
				printf("Loi!");
		}
	}while(1);
	return 0;
}

