#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char keywords[100];
    char answer[300];
} CollegeInfo;


void toLowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int containsKeyword(char *str, char *keywords) {
    char *token = strtok(keywords, ",");
    while (token != NULL) {
        if (strstr(str, token) != NULL) {
            return 1;
        }
        token = strtok(NULL, ",");
    }
    return 0;
}

int main() {

    CollegeInfo collegeInfo[] = {
        {"hi,hello,wassup","Hello! I'm the MVJ College of Engineering ChatBot. How can I assist you Today?"},
        {"bye,thanks,thank you","Goodbye! Don't hesitate to ask more questions about MVJ College anytime."},
        {"location,where is,locate,place","MVJ College of Engineering is located in Whitefield, Bangalore, Karnataka, India."},
        {"courses, offer, program", "We offer B.E., M.Tech., MBA, and Ph.D. programs."},
        {"admission, get, apply", "Admission to MVJ College of Engineering can be through:\n- KCET (Karnataka Common Entrance Test)\n- COMEDK (Consortium of Medical, Engineering and Dental Colleges of Karnataka)\n- Management Quota\n"},
        {"facilities, campus, resources", "Our campus includes a library, laboratories, and sports facilities."},
        {"contact, reach, information", "You can contact us at info@mvjce.edu.in."},
	    {"hostel,accomidation","MVJ College offers hostel facilities for boys and girls with various amenities including:\n- Wi-Fi\n- 24/7 security\n- Sports facilities\n- Mess with nutritious food"},
	    {"placements,companies", "MVJ College has a robust placement cell. Recent recruiters include:\n- TCS\n- Infosys\n- Wipro\n- Amazon\n- Accenture\nThe average package is around 3.5 - 6 LPA, with top offers going above 12 LPA."},
	    {"research,labs","MVJ College encourages research through its well-equipped labs in fields such as:\n- Artificial Intelligence\n- Robotics\n- Nanotechnology\nThe college also collaborates with various industries and research institutions."},
        {"fees,fee, cost, tuition", "The tuition fees for MVJ College vary by course and quota. Typically:\n- Through CET: ~Rs. 70,000 - 90,000 per year\n- Through COMEDK: ~Rs. 2,00,000 per year"},
	    {"fest,events","MVJ College organizes a range of cultural and technical fests such as:\n- Swayam (Annual cultural fest)\n- Impulse (Technical fest)\n- Hackathons and coding competitions"},
        {"", ""}
    };

    char userInput[100];

    printf("Welcome to MVJ College Chatbot!\nAsk about Location,Courses,Admissions,Facilities,Fees,Hostel,Events,Placements,Research or contact information. \n");
    printf("Type 'exit' to quit.\n");

    while (1) {
        printf("You: ");
        fgets(userInput, sizeof(userInput), stdin);
        userInput[strcspn(userInput, "\n")] = 0; // Remove newline character

        if (strcmp(userInput, "exit") == 0) {
            break;
        }

        toLowercase(userInput);

        int found = 0;
        for (int i = 0; collegeInfo[i].keywords[0]; i++) {
            if (containsKeyword(userInput, collegeInfo[i].keywords)) {
                printf("Chatbot: %s\n", collegeInfo[i].answer);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Chatbot: Sorry, I didn't understand your question. Try asking about courses, admissions, facilities, or contact information.\n");
        }
    }

    return 0;
}
