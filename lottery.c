/*로또추첨프로그램
학번:2017010846 성명:이주영 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
	/* 변수선언 */
	int ctr, i, j; //반복문에 쓰일 변수들
	int lotto[6] = { 0, }; //로또번호가 저장될 정수형배열 모두 0으로 초기화
	int new_lotto[6]; //new Lotto 생성 
	srand((unsigned int)time(NULL)); //난수생성기의 초기값결정
	int m=0;
	int n1; // 반복할 갯수 저장할 변수
	int count=0;
	int new_count=0; //당첨번호 갯수 카운트 
	
	int r1=0 , r3=0, r4=0, r5 =0;
	
	
	/*메뉴선택 */
	printf("1. 번호생성 \n");
	printf("2. 시뮬레이션 \n");
	printf("선택할 번호를 입력해주세요:");
	scanf("%d", &m);
	
	switch(m){
		case 1:
			{
				printf("몇줄을 출력할것인지를 입력하시오:");
				scanf("%d", &n1);
                                /*로또번호 자동 랜덤추출 */
				for(j=0; j< n1; j++){
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
		
		case 2:
			{
			printf("시뮬레이션\n");
			
			/* newLotto 생성 */ 
			
			for (i = 0; i<6; i++) { //총 6번 추첨
					new_lotto[i] = (rand() % 45) + 1;  // 1번부터 45번까지 로또번호 추첨
					for (ctr = 0; ctr < i; ctr++) {   //중복되는 번호가 있는지 배열탐색
						if (new_lotto[i] == new_lotto[ctr]) {
						new_lotto[i] = (rand() % 45) + 1;
						i--;
						}
				}
			}
			/* new lotto 생성 */ 
			
                printf("로또 몇장을 구매할까요?(1장=5,000원)\n");
                scanf("%d", &count);
                printf("###행운의 당첨번호:\t");
				for(i=0; i<6; i++){
					printf("%d\t", new_lotto[i]);
				}
				
				printf("\n-------------------------------------------------------------------------\n");
				
				
				        
  				for(j=0; j< count*5; j++){

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

				printf("\t로또번호\t");
				for (i = 0; i < 6; i++) {
					printf("%d\t", lotto[i]);
					for(ctr = 0; ctr < 6; ctr++){ 
						if(lotto[i]==new_lotto[ctr]){ //newLotto와 비교 
							new_count +=1;
						}
					}
				}
				printf("\t당첨번호 갯수=%d \t", new_count);
				/*당첨번호 일치 판단 카운트*/
				switch(new_count){
					case 6:
						r1+=1;
					case 5:
						r3+=1;
					case 4:
						r4+=1;
					case 3:
						r5+=1;
						break;
					default:
						break;
				}
				new_count=0;		
				printf("\n");		
				}
				printf("\n");

			printf("총 %d원 구매 1등:%d 3등:%d,4등:%d,5등:%d 번 나왔습니다. 총당첨금액(863회기준): %d원\n", count*5000, r1,r3,r4,r5,r1*2853357322+r3*1630224+r4*50000+r5*5000);
			break;
			}
		default:
			{
			printf("번호를 다시 입력하시오.");
			break;
		}
	}
	
	

}

