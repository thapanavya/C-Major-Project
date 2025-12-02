#include <stdio.h>
#include <stdlib.h>
float askquestion
(char question[], char option1[], char option2[], char option3[], char option4[],
char correctoption) {
    char answer;
    printf("\n%s\n", question);
    printf("A) %s\n", option1);
    printf("B) %s\n", option2);
    printf("C) %s\n", option3);
    printf("D) %s\n", option4);

    printf("Enter your answer ami (A/B/C/D): ");
    scanf(" %c", &answer);

    if(answer == correctoption || answer == correctoption + 32)
        return 0.5; 
    else
        return 0.0;
}
void showresult(float score) {
    float percentage = (score * 10);
    printf("Your Score: %.1f / 10\n", score);
    printf("Percentage: %.2f%%\n", percentage);

    if(score <= 3)
        printf("\n You are a BABY ARMY aww. Welcome to BTS world!\n");
    else if(score <= 7)
        printf("\n You are a DYNAMITE ARMY damnn.You're glowing, keep going!\n");
    else
        printf("\n You are an OG ARMY I see. BTS runs in your veins!\n");
}

int main() {
    float score;
    int playagain;
    char name[50];
    printf("-------------------------------------------------\n");
    printf("       PERSONA: THE BTS ONLINE QUIZ \n");
    printf("-------------------------------------------------\n");
    printf("Enter your name ami: ");
    scanf("%[^\n]", name);

    do {
        score = 0;

        printf("\nWelcome %s! Let's start the quiz and get to know what kind of ARMY you are!\n", name);

        score += askquestion("1. Who is the leader of BTS?",
                             "Jin", "RM", "Suga", "Jungkook", 'B');

        score += askquestion("2. BTS debuted under which company?",
                             "YG", "BigHit", "SM", "JYP", 'B');

        score += askquestion("3. Which BTS song hit No.1 on Billboard in 2020?",
                             "DNA", "Fire", "Dynamite", "Idol", 'C');

        score += askquestion("4. Who is known as 'Golden Maknae'?",
                             "RM", "V", "Jungkook", "Jimin", 'C');

        score += askquestion("5. What does ARMY stand for?",
                             "Adorable Representative M.C for Youth", "Artistic Real Music Youth", "A Real Music Yard", "Adoring Respectful Music Youth", 'A');

        score += askquestion("6. Who is Worldwide Handsome?",
                             "V", "Jin", "Suga", "RM", 'B');

        score += askquestion("7. Who is the main dancer of BTS?",
                             "J-Hope", "Suga", "RM", "Jin", 'A');

        score += askquestion("8. Which member's real name is Min Yoongi?",
                             "RM", "Suga", "Jungkook", "V", 'B');

        score += askquestion("9. BTS fan color is?",
                             "Blue", "Purple", "Pink", "Black", 'B');

        score += askquestion("10. Which album contains the song 'Boy With Luv'?",
                             "Map of the Soul: 7", "BE", "Wings", "Map of the Soul: Persona", 'D');

        score += askquestion("11. Which BTS member is from Daegu?",
                             "V", "J-Hope", "Jimin", "Suga", 'D');

        score += askquestion("12. Who is also known as KIM TAEHYUNG?",
                             "V", "RM", "Jin", "Jungkook", 'A');

        score += askquestion("13. Who is the oldest member?",
                             "Jin", "RM", "J-Hope", "Suga", 'A');

        score += askquestion("14. Which song popularized the phrase 'I Purple You'?",
                             "DNA", "Spring Day", "Boy With Luv", "Mikrokosmos", 'D');

        score += askquestion("15. Who is known for his catchphrase 'I'm Worldwide Handsome'?",
                             "Jungkook", "Jin", "V", "RM", 'B');

        score += askquestion("16. BTS debuted in which year?",
                             "2010", "2013", "2015", "2017", 'B');

        score += askquestion("17. Who is the 'Hope' of the group?",
                             "Suga", "J-Hope", "RM", "Jimin", 'B');

        score += askquestion("18. 'Serendipity' is whose solo?",
                             "Jimin", "V", "Jungkook", "Jin", 'A');

        score += askquestion("19. 'Life Goes On' was released in which year?",
                             "2018", "2020", "2021", "2019", 'B');

        score += askquestion("20. Whose mixtape is 'Hope World'?",
                             "RM", "Suga", "J-Hope", "Jin", 'C');

        showresult(score);

        printf("\nDo you want to play again ami?\n1. Yes\n2. No\nEnter choice: ");
        scanf("%d", &playagain);

    } while(playagain == 1);

    printf("\nThank you for playing, %s! Borahae!\n", name);

    return 0;
}
