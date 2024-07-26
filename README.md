# Student-grade-management-system


# 👨‍🎓 Student Grade Management System 📊

This C program is designed to manage student records, calculate average marks, and assign grades based on a predefined grading scale. It's suitable for educational institutions like schools and colleges.

---
## 📚 Features

- **Data Collection:**
   - 👤  Stores student's name.
   - 🏫 Records the institution type (school or college).
   - 🧮 Accepts the number of subjects.
   - 💯  Gathers marks for each subject (out of 100).

- **Calculations:**
   - 📊 Calculates the average marks across all subjects.

- **Grading:**
   - 🏆 Assigns a letter grade (A1, A2, B1, B2, C1, C2, D1, D2, E) based on the calculated average.

- **Error Handling:**
   - ✅ Includes robust checks for invalid input (e.g., non-numeric data, invalid marks).

---

## 🏆 Grading Scale
```
| Average Marks | Grade |
|---------------|:---:|
| 95-100  | A1   |
| 90-94   | A2   |
| 85-89   | B1   |
| 80-84   | B2   |
| 75-79   | C1   |
| 70-74   | C2   |
| 65-69   | D1   |
| 60-64   | D2   |
| 50-59   | E1   |
| Below 50 | E    |

---
```
## 🚀 How to Use

1. **Compilation:**  
   ```bash
   gcc -o student_grade student_grade.c
   ```

2. **Execution:**
   ```bash
   ./student_grade
   ```

3. **Input:** Follow the on-screen prompts to enter the student's details.

4. **Output:** The program will neatly display the student's information, average marks, and their assigned grade.

---

## 🔍 Example Output

```
Enter the name of the student: John Doe
Enter the institution type (college/school) of the student: college
Enter the college year (integer value only): 2
Enter the no. of subjects: 3
Enter the marks for each subject (out of 100):
Subject 1: 85
Subject 2: 92
Subject 3: 78

Student Name: John Doe
Institution: college
Year: 2
Average Marks: 85.00
Grade: B1
```

---

## 💡 Future Enhancements

- 💾 **Data Persistence:** Store student data in files or databases for long-term access.
- 🖥️ **Enhanced User Interface:** Develop a menu-driven or graphical user interface (GUI) for a more intuitive experience.
- 📈 **Detailed Reports:** Generate comprehensive reports with subject-wise marks and overall performance analysis.
```
