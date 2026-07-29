/*
LeetCode: 3921. Score Validator
Difficulty: Easy
Day 4 - #100DaysOfLeetCode
*/

class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0;
        int counter = 0;

        for (string &e : events) {
            if (e == "W") {
                counter++;
            } 
            else if (e == "WD" || e == "NB") {
                score += 1;
            } 
            else {
                score += (e[0] - '0');
            }

            if (counter == 10) break;
        }

        return {score, counter};
    }
};