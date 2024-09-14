#include <stdio.h>
#include <string.h>

// Define maximums for questions and option lengths
#define MAX_QUESTIONS 5
#define MAX_OPTION_LENGTH 50

// Structure to hold each quiz question and its attributes
typedef struct {
    char question[256];                  // The actual question text
    char options[4][MAX_OPTION_LENGTH];  // Array to store 4 options for each question
    char correctAnswer;                  // The correct answer (A, B, C, or D)
    int points;                          // Points awarded for a correct answer
} Question;

// Function to initialize questions with text, options, and answers
void initializeQuestions(Question *questions) {
    // Question 1
    strcpy(questions[0].question, "What is the capital of France?");
    strcpy(questions[0].options[0], "A. Paris");
    strcpy(questions[0].options[1], "B. London");
    strcpy(questions[0].options[2], "C. Berlin");
    strcpy(questions[0].options[3], "D. Madrid");
    questions[0].correctAnswer = 'A';  // Correct answer is 'A'
    questions[0].points = 10;          // 10 points for a correct answer

    // Question 2
    strcpy(questions[1].question, "What is 2 + 2?");
    strcpy(questions[1].options[0], "A. 3");
    strcpy(questions[1].options[1], "B. 4");
    strcpy(questions[1].options[2], "C. 5");
    strcpy(questions[1].options[3], "D. 6");
    questions[1].correctAnswer = 'B';  // Correct answer is 'B'
    questions[1].points = 10;

    // Question 3
    strcpy(questions[2].question, "What is the largest planet in our Solar System?");
    strcpy(questions[2].options[0], "A. Earth");
    strcpy(questions[2].options[1], "B. Mars");
    strcpy(questions[2].options[2], "C. Jupiter");
    strcpy(questions[2].options[3], "D. Saturn");
    questions[2].correctAnswer = 'C';  // Correct answer is 'C'
    questions[2].points = 10;

    // Question 4
    strcpy(questions[3].question, "Which element does 'O' represent on the periodic table?");
    strcpy(questions[3].options[0], "A. Gold");
    strcpy(questions[3].options[1], "B. Oxygen");
    strcpy(questions[3].options[2], "C. Silver");
    strcpy(questions[3].options[3], "D. Osmium");
    questions[3].correctAnswer = 'B';  // Correct answer is 'B'
    questions[3].points = 10;

    // Question 5
    strcpy(questions[4].question, "What is the smallest prime number?");
    strcpy(questions[4].options[0], "A. 0");
    strcpy(questions[4].options[1], "B. 1");
    strcpy(questions[4].options[2], "C. 2");
    strcpy(questions[4].options[3], "D. 3");
    questions[4].correctAnswer = 'C';  // Correct answer is 'C'
    questions[4].points = 10;
}

// Function to display the question and options
void displayQuestion(Question question) {
    printf("%s\n", question.question);  // Print the question
    for(int i = 0; i < 4; i++) {        // Loop through and print each option
        printf("%s\n", question.options[i]);
    }
}

// Function to get the user's answer
char getUserAnswer() {
    char answer;
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer);  // Get the user's input
    return answer;          // Return the answer for validation
}

// Main function to run the quiz
int main() {
    Question questions[MAX_QUESTIONS];   // Array to hold 5 questions
    initializeQuestions(questions);      // Initialize the questions

    int totalScore = 0;  // Variable to hold the user's total score

    // Loop through each question
    for(int i = 0; i < MAX_QUESTIONS; i++) {
        displayQuestion(questions[i]);  // Display the question and options
        char userAnswer = getUserAnswer();  // Get the user's answer

        // Check if the user's answer is correct
        if(userAnswer == questions[i].correctAnswer) {
            printf("Correct!\n");
            totalScore += questions[i].points;  // Add points for correct answer
        } else {
            printf("Wrong. The correct answer is %c\n", questions[i].correctAnswer);  // Display correct answer if wrong
        }
    }

    // Display the final score
    printf("Your total score is: %d\n", totalScore);

    return 0;  // End of program
}
