******University Management System******

****Overview****

  The University Management System is a console-based application written in C++ that handles university admissions and 
  displays data for various university members, including students, faculty staff, heads of departments (HODs), and the Vice 
  Chancellor. The system allows new admissions for undergraduate and graduate programs and saves the data in text files.

****Features****

 **. New Admissions:**
 
  **2):** Undergraduate Admissions
  **3):** Graduate Admissions
  **4):** Personal and academic information collection
  **5):** Data storage in text files
 **. Display University Data:**
 
  **1):** Vice Chancellor details
  **2):** HOD details
  **3):** Faculty staff details
  **4):** Newly admitted student details (undergraduate and graduate)

****File Structure****

  **.** **`main.cpp`:** The main program file containing the entire implementation.
  **.** **`UGratuate.txt`:** A text file where undergraduate admission data is stored.
  **.** **`Gratuate.txt`:** A text file where graduate admission data is stored.


****Classes****

  **. University:** Abstract base class with virtual functions for setting data and generating detailed slips.
  **. new_Admission:** Inherits from University. Handles data collection and admission processes for new students.
  **. FacultyStaff:** Manages and displays faculty staff details.
  **. HOD:** Manages and displays head of department details.
  **. ViceChancellor:** Manages and displays vice chancellor details.
  **. NewStudent:** Reads and displays data of newly admitted students from text files.


****Getting Started****

**Prerequisites**

  **.** C++ compiler (g++, clang, etc.)
  **.** A text editor or an IDE (VS Code, CLion, etc.)
  
****Running the Program****

  **1): Clone the Repository:**  
          git clone https://github.com/Zohaib251/University_Management_System.git
          cd University_Management_System
    **2): Compile the Code:**
          g++ main.cpp **-o University_Management_System**
      **3): Run the Program:**
          **./University_Management_System**

          
****Usage****

**.** Follow the on-screen instructions to navigate through the program.
**.** Choose the appropriate options for new admissions or to view university data.
**.** Enter the required details as prompted.


****Contributing****

  Contributions are welcome! Please follow these steps:

**1):** Fork the repository.
**2):** Create a new branch (git checkout -b feature-branch).
**3):** Commit your changes (git commit -m 'Add new feature').
**4):** Push to the branch (git push origin feature-branch).
**5):** Create a new Pull Request.


****License****

  This project is licensed under the MIT License. See the **LICENSE** file for more details.

****Contact****

  For any questions or feedback, please contact **mianzohaibali123@gmail.com**.
