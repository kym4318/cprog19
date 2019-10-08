#include<stdio.h>
int doll;

int dec_item(int num)
{
	return doll-=num;
}

int inc_item(int num)
{
	return doll +=num;
}

void print_item()
{
	printf("수량 : %d\n",doll);
}

int main()
{
	doll = 100;

	while(1){
		int opt, n;

		printf("판매:1, 입고:2, 재고확인:3, 종료:4\n");
		scanf("%d", &opt);
		if (opt < 3 && opt > 0){
			printf("수량을 입력하시오\n");
			scanf("%d",&n);
		}
	
		switch (opt)
		{
		case 1:
			dec_item(n);
			break;
		case 2:
			inc_item(n);
			break;
		case 3:
			print_item();
		case 4:
			goto out;
		default:
			printf("잘못 선택함\n");
		}
	}
	out:
	return 0;
}

