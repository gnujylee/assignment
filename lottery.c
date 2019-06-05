/*로또추첨프로그램
학번:2017010846 성명:이주영 */
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main() {
	/* 변수선언 */
	int ctr, i, j; //반복문에 쓰일 변수들
	int lotto[6] = { 0, }; //로또번호가 저장될 정수형배열 모두 0으로 초기화
	srand((unsigned int)time(NULL)); //난수생성기의 초기값결정
	int number; //랜덤함수를 통해 로또번호를 임시로 저장할 변수
	int n1; // 반복할 갯수 저장할 
	printf("반복할 숫자를 입력하시오:");
	scanf_s("%d", &n1);
	for(j=0; j< n1; j++){

       /*로또번호 자동 랜덤추출 */
	for (i = 0; i<6; i++) { //총 6번 추첨
		lotto[i] = (rand() % 45) + 1;  // 1번부터 45번까지 로또번호 추첨
		for (ctr = 0; ctr < i; ctr++) {   //중복될 번호가 있기위해 배열탐색
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
	system("pause");
}
