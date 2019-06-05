/*로또추첨프로그램
학번:2017010846 성명:이주영 */
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/* 변수선언 */
	int ctr, i, j; //반복문에 쓰일 변수들
	int lotto[6] = { 0, }; //로또번호가 저장될 정수형배열 모두 0으로 초기화
	srand((unsigned int)time(NULL)); //난수생성기의 초기값결정
	int m;
	int n1; // 반복할 갯수 저장할 변수
	
	
	
	/*메뉴선택 */
	printf("1. 번호생성 \n");
	printf("2. 시뮬레이션 \n");
	printf("선택할 번호를 입력해주세요:");
	scanf("%d", &m);
	
	switch(m){
		case '1':
			{
				printf("몇줄을 출력할것인지를 입력하시오:");
				scanf("%d", &n1);
				for(j=0; j< n1; j++){

       				/*로또번호 자동 랜덤추출 */
				for (i = 0; i<6; i++) { //총 6번 추첨
					lotto[i] = (rand() % 45) + 1;  // 1번부터 45번까지 로또번호 추첨
					for (ctr = 0; ctr < i; ctr++) {   //중복되는 번호가 있는지 배열탐색
						if (lotto[i] == lotto[ctr]) {
						lotto[i] = (rand() % 45) + 1;
						i--;
						}
					}
				}
	
				/*랜덤 로또번호 저장 배열 출력*/
				printf("\t로또번호\t");
				for (i = 0; i < 6; i++) {
					printf("%d\t", lotto[i]);
				}
				printf("\n");
				}
				printf("\n");
				break;
			
			}
		
		case '2':
			{
			printf("시뮬레이션 메뉴 구현예정\n");
			break;
			}
		default:
			{
			printf("번호를 다시 입력하시오.");
			break;
		}
	}
	
	

}
