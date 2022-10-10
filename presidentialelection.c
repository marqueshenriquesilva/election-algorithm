#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

float percentage(int votes, float total){
	// calculates percentage of votes for candidate in relation to the total amount of votes
	float result = (votes / total) * 100;
	return result;
}

void reveal(int candidate, int votes, float percentage){
	// reveal number of votes for chosen candidate
	printf("\nThe candidate %d received %d votes", candidate, votes);
	printf("\n%.2f percent of total votes\n", percentage);
}

int main() {
	// variables declaration
	int vote;
	bool repeat = true, votevalid = true;
	int can1 = 0, can2 = 0, can3 = 0, can4 = 0, nullvote = 0, whitevote = 0;
	float total = 0, porc1 = 0, porc2 = 0, porc3 = 0, porc4 = 0, porcn = 0, porcb = 0;
	
	// repeats until user vote is 0
	while(repeat){
		// reads user vote
		printf("\nType your candidate number: ");
		scanf("%d", &vote);
		votevalid = true;
		
		// add vote to choosen candidate
		switch(vote){
			case 0:
				repeat = false;
				printf("END\n");
				votevalid = false;
				break;
			case 1:
				printf("You voted on candidate 1\n");
				can1++;
				break;
			case 2:
				printf("You voted on candidate 2\n");
				can2++;
				break;
			case 3:
				printf("You voted on candidate 3\n");
				can3++;
				break;
			case 4:
				printf("You voted on candidate 4\n");
				can4++;
				break;
			case 5:
				printf("Null-vote\n");
				nullvote++;
				break;
			case 6:
				printf("White-vote\n");
				whitevote++;
				break;
			default:
				printf("Type a valid number!\n");
				votevalid = false;
		}
		// add to sum of votes if vote is valid
		if (votevalid){
			total++;
		}
	}
	// prints results of election
	printf("\nTotal of %.0f votes\n", total);
	
	porc1 = percentage(can1, total);
	reveal(1, can1, porc1);

	porc2 = percentage(can2, total);
	reveal(2, can2, porc2);
	
	porc3 = percentage(can3, total);
	reveal(3, can3, porc3);
	
	porc4 = percentage(can4, total);
	reveal(4, can4, porc4);
	
	porcn = percentage(nullvote, total);
	printf("\n%d Null-votes", nullvote);
	printf("\n%.2f percent of total votes\n", porcn);
	
	porcb = percentage(whitevote, total);
	printf("\n%d White-votes", whitevote);
	printf("\n%.2f percent of total votes\n", porcb);

	return 0;
}