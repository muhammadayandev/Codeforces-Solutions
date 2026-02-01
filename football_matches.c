#include <stdio.h>
/*Juan and his friends are going to split themselves into n teams and play a modified double-elimination football tournament, consisting of a winners' group and a losers' group. Initially, all teams belong to the winners' group.

In each round of the tournament, the following happens as long as one of the groups has at least two teams:

All teams in the winners' group pair up.
If there is an odd number of teams in the winners' group, there would be a team that didn't get paired up (and wouldn't play a match). That team stays in the winners' group.
For teams in the winners' that got paired up, each pair plays a football match in which there are no ties.
If a team wins, it stays in the winners' group.
If a team loses, it drops down to the losers' group in the next round.
All teams in the losers' group pair up.
If there is an odd number of teams in the losers' group, there would be a team that didn't get paired up (and wouldn't play a match). That team stays in the losers' group.
For teams in the losers' that got paired up, each pair plays a football match in which there are no ties.
If a team wins, it stays in the losers' group.
If a team loses, it gets eliminated from the tournament.
Note that in the above process, when a team loses a match in the winners' group, it drops down to the losers' group in the next round. That means, it is not considered for the pairing process in the current round's losers' group.

After multiple iterations of the aforementioned process, both groups end up with a single team each. When this happens, both teams face off against each other in a match and a victor emerges.

Determine how many matches were played in total. It can be proved that no matter how the teams are paired up and which ones win and lose, the answer remains the same.*/
int main(){
   
    int t, n;
    printf("Enter Numbers of Test Cases: ");
    scanf("%d", &t);
    while(t--) {
        printf("Enter Number of Teams: ");
        scanf("%d", &n);
        printf("Matches Played: %d\n", 2*n - 2);
    }
    return 0;
}

