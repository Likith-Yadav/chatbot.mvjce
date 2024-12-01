
# **MVJ College Chatbot**

## **Overview**
The **MVJ College Chatbot** is a C-based interactive application designed to assist users with frequently asked questions about MVJ College of Engineering. The chatbot responds to queries related to the college's location, courses, admission process, facilities, placements, events, and more. It provides an engaging and informative experience for prospective students, parents, and visitors.

---

## **Features**
- **Interactive Chat**: Communicates with users in a conversational manner.
- **College Information**: Provides detailed responses about:
  - Location
  - Courses offered
  - Admission process
  - Campus facilities
  - Hostel and accommodation
  - Placement opportunities
  - Research labs and projects
  - Fest and events
- **Dynamic Query Matching**: Matches user input with predefined keywords for accurate responses.
- **Custom Exit Option**: Allows users to exit the chatbot by typing `exit`.

---

## **How It Works**
1. The chatbot uses a `struct` to store predefined keywords and their corresponding answers.
2. User input is converted to lowercase and matched against the keywords.
3. If a match is found, the chatbot provides a relevant response.
4. If no match is found, it prompts the user to rephrase their query.

---

## **Getting Started**

### **Prerequisites**
- **C Compiler**: Ensure you have a C compiler installed (e.g., GCC).

### **Steps to Run the Code**
1. Clone the repository:
   ```bash
   git clone https://github.com/YourUsername/MVJCE-Chatbot.git
   ```
2. Navigate to the project folder:
   ```bash
   cd MVJCE-Chatbot
   ```
3. Compile the program:
   ```bash
   gcc chatbot.c -o chatbot
   ```
4. Run the chatbot:
   ```bash
   ./chatbot
   ```

---

## **Example Usage**

### **Welcome Message:**
```
Welcome to MVJ College Chatbot!
Ask about Location, Courses, Admissions, Facilities, Fees, Hostel, Events, Placements, Research, or contact information.
Type 'exit' to quit.
```

### **User Interaction:**
**You:** Where is MVJ College located?  
**Chatbot:** MVJ College of Engineering is located in Whitefield, Bangalore, Karnataka, India.

**You:** What are the courses offered?  
**Chatbot:** We offer B.E., M.Tech., MBA, and Ph.D. programs.

**You:** exit  
**Chatbot:** Goodbye! Don't hesitate to ask more questions about MVJ College anytime.

---

## **Sample Example**

![chatbot](https://github.com/user-attachments/assets/bfa3774b-29a0-4014-bc7c-5d4db051168c)

---

## **Folder Structure**
```
MVJCE-Chatbot/
├── chatbot.c       # Main program file
├── README.md       # Project documentation
```

---

## **Contributing**
Contributions are welcome! If you'd like to enhance the chatbot's functionality or add new features:
1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature-new-feature
   ```
3. Commit your changes:
   ```bash
   git commit -m "Add new feature"
   ```
4. Push to the branch:
   ```bash
   git push origin feature-new-feature
   ```
5. Open a pull request.

---

## **License**
This project is licensed under the MIT License. See the `LICENSE` file for details.

---

## **Acknowledgments**
Special thanks to **MVJ College of Engineering** for inspiring this project. The chatbot was developed to simplify access to essential college-related information for students and visitors.
```bash
Thank You
```
