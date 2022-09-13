#include <iostream>
using namespace std;
// FUNCTIONS ARE NOT EXACTLY IN ORDER
void welcome();
void mainmenu();
void After_Mainmenu();
void GpA_course_choice();
void Exit();
void Cs_Yr_Sem();
void Cs_yr1_sem1();
void Cs_Result_yr1_Sem1_gradepoint();
int Cs_Result_yr1_Sem1_grade();
int Cs_Result_yr1_Sem1_score();
void Cs_yr1_sem2();
void Cs_Result_yr1_Sem2_gradepoint();
int Cs_Result_yr1_Sem2_grade();
int Cs_Result_yr1_Sem2_score();
void Cs_yr2();
void Ee_Yr_Sem();
void Ee_yr1_sem1();
void Ee_Result_yr1_Sem1_gradepoint();
void Ee_Result_yr1_Sem1_grade();
void Ee_yr1_sem2();
void Ee_Result_yr1_Sem2_gradepoint();
void ME();
int getgpa();
int getgpa_scores();
void carryover_one_gradepoints_2();
int carryover_one_grade_2();
void carryover_two_gradepoints_2();
int carryover_two_grade_2();

int main(){

    welcome();
    return 0;
}
// FUNCTION FOR THE HOME PAGE.
void welcome(){
    string name;
    cout << "\t\t\tWELCOME \n";
    cout << "What is your name " << endl;
    cout << ">>> ";
    cin >> name;
    cout << "Welcome "<< name << endl<< "wagwan g"<<endl <<":)"<<endl;
    After_Mainmenu();
}
void After_Mainmenu(){
    string choice;
    cout << "\n\n\nMAIN MENU   Press 1" << endl;
    cout << "EXIT        Press 2" << endl;
    cin >> choice;


    if (choice == "1"){
         mainmenu();
    }else if (choice == "2"){
         Exit();
    }
    else {
        cout << "Invalid response!"<<endl;
        After_Mainmenu();
        }

}

// FUNCTION FOR MAINMENU PAGE.
void mainmenu(){
    string task;
    cout << "\t\t\t MAIN MENU \n"<<endl;
    cout << "GPA      Press 1"<<endl;
    cout << "CGPA     Press 2"<<endl;
    cout << "Result   Press 3"<<endl;
    cout << "Back     Press 4"<<endl;
    cout << "Exit     Press 5"<<endl;
    cin >> task;
    //int num_1 = stoi(task);
    if (task == "1"){
        GpA_course_choice();
    }else if (task == "4"){
        After_Mainmenu();
    }else if (task == "5"){
        Exit();
    }else {
        cout << "Invalid response!"<<endl;
        mainmenu();

    }
}
// EXIT FUNCTION.
void Exit(){
    string choice_1;
    cout << "\n\nAre you sure you want to leave the app?"<<endl;
    cout << "Yes   Press 1"<<endl;
    cout << "No    Press 2"<<endl;
    cin >> choice_1;

    if (choice_1 == "1"){
        cout << "\nBye g :(";
    }else {
            mainmenu();
        }
}
// FUNCTION FOR CHOOSING COURSES.
void GpA_course_choice(){
    string choice_2;
    cout << "\n\nComputer Science         Press 1 "<<endl;
    cout << "Electrical Engineering   Press 2"<<endl;
    cout << "Mechanical Engineering   Press 3"<<endl;

    cout << "Exit                     Press 4"<<endl;
    cin >> choice_2;

    if (choice_2 == "1"){
        Cs_Yr_Sem();
        }else if (choice_2 == "2"){
            Ee_Yr_Sem();
        }else if (choice_2 == "3"){
            ME();
        }else {
            cout << "Invalid response!"<<endl;
            GpA_course_choice();

        }
}
//GPA GUIDE FUNCTION.
void Guide (){
    cout << "\n\nGrade   Point   Score"<<endl;
    cout << "A       5       70 - 100"<<endl;
    cout << "B       4       60 - 69"<<endl;
    cout << "C       3       50 - 59"<<endl;
    cout << "D       2       45 - 49"<<endl;
    cout << "F       0       00 - 44"<<endl;


}

void Cs_Yr_Sem(){
    string cs_yr_sem;
    cout << "\nYear 1/Semester 1       Press 1"<<endl;
    cout << "\nYear 1/Semester 2       Press 2"<<endl;
    cout << "\nYear 2/Semester 1       Press 3"<<endl;
    cout << "\nYear 2/Semester 2       Press 4"<<endl;
    cin >> cs_yr_sem;

    if(cs_yr_sem == "1"){
        Cs_yr1_sem1();
    }else if (cs_yr_sem == "2"){
        Cs_yr1_sem2();
    }
}
void Cs_yr1_sem1(){
    Guide();
    string Input_Method;
    cout << "Input using scores        Press 1"<<endl;
    cout << "Input using grade points  Press 2"<<endl;
    cout << "Input using grades        Press 3"<<endl;
    cin >> Input_Method;

    if (Input_Method == "1"){
        Cs_Result_yr1_Sem1_score();
    }else if (Input_Method == "2"){
        Cs_Result_yr1_Sem1_gradepoint();
    }else if (Input_Method == "3"){
        Cs_Result_yr1_Sem1_grade();
    }

}
int getgpa_scores(double score){
    int scorevalue;
    if (score >= 70 && score <= 100){
        scorevalue = 5;
    }else if (score >= 60 && score <= 69.99){
        scorevalue = 4;
    }else if (score >= 50 && score <= 59.99){
        scorevalue = 3;
    }else if (score >= 45 && score <= 49.99){
        scorevalue = 2;
    }else if (score >= 0 && score <= 44.99){
        scorevalue = 0;
    }else {
        while (score < 0 || score > 100){
            cout << "Invalid response! "<<endl;
            cout << "Enter again: ";
            cin >> score;
        }
    }
    return scorevalue;
}
int getgpa(char grade){
    int gradepointvalue;
    switch(grade){
    case 'A' :
        gradepointvalue = 5;
        break;
    case 'B':
        gradepointvalue = 4;
        break;
    case 'C':
        gradepointvalue = 3;
        break;
     case 'D':
        gradepointvalue = 2;
        break;
     case 'F':
        gradepointvalue = 0;
        break;
    default:
        while (grade != 'A' || 'B' || 'C' || 'D' || 'F' ){
            cout << "Invalid response!"<<endl;
            cout << "Enter again: ";
            cin >> grade;
            break;

        }



}
    return gradepointvalue;

}
int Cs_Result_yr1_Sem1_score(){
    double Csc101, Phy101, Chm101, Mth101, Gst101, Gst103, Gst108, Chm107, Phy107;
    int csc11,phy11,chm11,mth11,gst11,gst13,gst18,chm17,phy17;
    cout << "Enter your grades for the respective courses."<<endl;
    cout << "CSC 101: ";
    cin >> Csc101;
    csc11 = getgpa_scores(Csc101);
    cout << "PHY 101: ";
    cin >> Phy101;
    phy11 = getgpa_scores(Phy101);
    cout << "CHM 101: ";
    cin >> Chm101;
    chm11 = getgpa_scores(Chm101);
    cout << "MTH 101: ";
    cin >> Mth101;
    mth11 = getgpa_scores(Mth101);
    cout << "GST 101: ";
    cin >> Gst101;
    gst11 = getgpa_scores(Gst101);
    cout << "GST 103: ";
    cin >> Gst103;
    gst13 = getgpa_scores(Gst103);
    cout << "GST 108: ";
    cin >> Gst108;
    gst18 = getgpa_scores(Gst108);
    cout << "PHY 107: ";
    cin >> Phy107;
    phy17 = getgpa_scores(Phy107);
    cout << "CHM 107: ";
    cin >> Chm107;
    chm17 = getgpa_scores(Chm107);
    double Result = ((((csc11 + phy11 + chm11 + mth11)*3) + ((gst11 + gst13 + gst18)*2) + ((phy17 + chm17)*1)))/ 20.0;
    cout << "\nYour GPA is " <<Result;

}

int Cs_Result_yr1_Sem1_grade(){
    char Csc101, Phy101, Chm101, Mth101, Gst101, Gst103, Gst108, Chm107, Phy107;
    int csc11,phy11,chm11,mth11,gst11,gst13,gst18,chm17,phy17;
    cout << "Enter your grades for the respective courses."<<endl;
    cout << "CSC 101: ";
    cin >> Csc101;
    csc11 = getgpa(Csc101);
    cout << "PHY 101: ";
    cin >> Phy101;
    phy11 = getgpa(Phy101);
    cout << "CHM 101: ";
    cin >> Chm101;
    chm11 = getgpa(Chm101);
    cout << "MTH 101: ";
    cin >> Mth101;
    mth11 = getgpa(Mth101);
    cout << "GST 101: ";
    cin >> Gst101;
    gst11 = getgpa(Gst101);
    cout << "GST 103: ";
    cin >> Gst103;
    gst13 = getgpa(Gst103);
    cout << "GST 108: ";
    cin >> Gst108;
    gst18 = getgpa(Gst108);
    cout << "PHY 107: ";
    cin >> Phy107;
    phy17 = getgpa(Phy107);
    cout << "CHM 107: ";
    cin >> Chm107;
    chm17 = getgpa(Chm107);
    double Result = ((((csc11 + phy11 + chm11 + mth11)*3) + ((gst11 + gst13 + gst18)*2) + ((phy17 + chm17)*1)))/ 20.0;
    cout << "\nYour GPA is " <<Result;

}

void Cs_Result_yr1_Sem1_gradepoint(){
    // INPUTING GRADE POINTS FOR THREE UNIT COURSES
    int csc101, phy101, chm101, mth101;
    cout << "Enter your grade points for the respective three unit courses."<<endl;
    cout << "CSC 101: ";
    cin >> csc101;
    cout << "PHY 101: ";
    cin >> phy101;
    cout << "CHM 101: ";
    cin >> chm101;
    cout << "MTH 101: ";
    cin >> mth101;

    // INTPUTING GRADE POINTS FOR TWO UNIT COURSES
    int gst101, gst103, gst108;
    cout << "\nEnter your grade points for the respective two unit courses."<<endl;
    cout << "GST 101: ";
    cin >> gst101;
    cout << "GST 103: ";
    cin >> gst103;
    cout << "GST 108: ";
    cin >> gst108;

    //INPUTING GRADE POINT FOR ONE UNIT COURSES
    int phy107, chm107;
    cout << "\nEnter your grade points for the respective one unit courses."<<endl;
    cout << "PHY 107: ";
    cin >> phy107;
    cout << "CHM 107: ";
    cin >> chm107;

   /* int list1[] = { csc101, phy101, chm101, mth101, gst101, gst103, gst108, chm107, phy107};
    for (int i; i > 5 || i < 0;){
            cout << list1[i];
        break;
    };*/
    // REMEMBER TO WORK ON THE CODE BELOW
    // THERE SHOULD BE A BETTER WAY
    if (csc101 > 5 || csc101 < 0 || phy101 > 5 || phy101 < 0 || chm101 > 5 || chm101 < 0 || mth101 > 5 || mth101 < 0 || gst101 > 5 || gst101 < 0 || gst103 > 5 || gst103 < 0 || gst108 > 5 || gst108 < 0 || chm107 > 5 || chm107 < 0 || phy107 > 5 || phy107 < 0){
        cout << "Invalid response(s)";


    }else{
        //GPA CALCULATOR FOR COMPUTER SCIENCE YEAR ONE SEMESTER ONE
        double result = ((((csc101 + phy101 + chm101 + mth101)*3) + ((gst101 + gst103 + gst108)*2) + ((phy107 + chm107)*1)))/ 20.0;
    cout << "\nYour GPA is " <<result;
    }





}
void Cs_yr1_sem2(){
    Guide();
    string Input_Method;
    cout << "Input using scores        Press 1"<<endl;
    cout << "Input using grade points  Press 2"<<endl;
    cout << "Input using grades        Press 3"<<endl;
    cin >> Input_Method;

    if (Input_Method == "1"){
        Cs_Result_yr1_Sem2_score();
    }else if (Input_Method == "2"){
        Cs_Result_yr1_Sem2_gradepoint();
    }else if (Input_Method == "3"){
        Cs_Result_yr1_Sem2_grade();
    }
}
int Cs_Result_yr1_Sem2_score(){
    double Csc102, Phy102, Gst102, Mth102, Mth103, Gst104, Gst105, Gst125, Phy108;
    int csc12,phy12,gst12,mth12,mth13,gst14,gst15,gst_125,phy18;
    cout << "Enter your scores for the respective courses."<<endl;
    cout << "CSC 102: ";
    cin >> Csc102;
    csc12 = getgpa_scores(Csc102);
    cout << "PHY 102: ";
    cin >> Phy102;
    phy12 = getgpa_scores(Phy102);
    cout << "GST 102: ";
    cin >> Gst102;
    gst12 = getgpa_scores(Gst102);
    cout << "MTH 102: ";
    cin >> Mth102;
    mth12 = getgpa_scores(Mth102);
    cout << "MTH 103: ";
    cin >> Mth103;
    mth12 = getgpa_scores(Mth103);
    cout << "GST 104: ";
    cin >> Gst104;
    gst14 = getgpa_scores(Gst104);
    cout << "GST 105: ";
    cin >> Gst105;
    gst15 = getgpa_scores(Gst105);
    cout << "GST 125: ";
    cin >> Gst125;
    gst_125 = getgpa_scores(Gst125);
    cout << "PHY 108: ";
    cin >> Phy108;
    phy18 = getgpa_scores(Phy108);
    double result = ((((csc12 + phy12 + gst12 + mth12 + mth13)*3) + ((gst14 + gst15 + gst_125)*2) + ((phy18)*1)))/ 22.0;
    cout << "\nYour GPA is " <<result;

}

int Cs_Result_yr1_Sem2_grade(){
    char csc102, phy102, gst102, mth102, mth103, gst104, gst105, gst125, phy108;
    int csc12,phy12,gst12,mth12,mth13,gst14,gst15,gst_125,phy18;
    cout << "Enter your grades for the respective courses."<<endl;
    cout << "CSC 102: ";
    cin >> csc102;
    csc12 = getgpa(csc102);
    cout << "PHY 102: ";
    cin >> phy102;
    phy12 = getgpa(phy102);
    cout << "GST 102: ";
    cin >> gst102;
    gst12 = getgpa(gst102);
    cout << "MTH 102: ";
    cin >> mth102;
    mth12 = getgpa(mth102);
    cout << "MTH 103: ";
    cin >> mth103;
    mth12 = getgpa(mth103);
    cout << "GST 104: ";
    cin >> gst104;
    gst14 = getgpa(gst104);
    cout << "GST 105: ";
    cin >> gst105;
    gst15 = getgpa(gst105);
    cout << "GST 125: ";
    cin >> gst125;
    gst_125 = getgpa(gst125);
    cout << "PHY 108: ";
    cin >> phy108;
    phy18 = getgpa(phy108);
    double Result = ((((csc12 + phy12 + gst12 + mth12 + mth13)*3) + ((gst14 + gst15 + gst_125)*2) + ((phy18)*1)))/ 22.0;
    cout << "\nYour GPA is " <<Result;

}


void Cs_Result_yr1_Sem2_gradepoint(){
    int csc102, phy102, gst102, mth102, mth103;
    // INPUTING GRADE POINTS FOR THREE UNIT COURSES
    cout << "Enter your grade points for the respective courses."<<endl;
    cout << "CSC 102: ";
    cin >> csc102 ;

    cout << "PHY 102: ";
    cin >> phy102;
    cout << "GST 102: ";
    cin >> gst102;
    cout << "MTH 102: ";
    cin >> mth102;
    cout << "MTH 103: ";
    cin >> mth103;
    // INPUTING GRADE POINTS FOR TWO UNIT COURSES
    int gst104, gst105, gst125;

    cout << "GST 104: ";
    cin >> gst104;
    cout << "GST 105: ";
    cin >> gst105;
    cout << "GST 125: ";
    cin >> gst125;

// INPUTING GRADE POINTS FOR ONE UNIT COURSES
    int phy108;

    cout << "PHY 108: ";
    cin >> phy108;

// GPA CALCULATOR FOR COMPUTER SCIENCE YEAR ONE SEMESTER TWO
    double result = ((((csc102 + phy102 + gst102 + mth102 + mth103)*3) + ((gst104 + gst105 + gst125)*2) + ((phy108)*1)))/ 22.0;
    cout << "\nYour GPA is " <<result;

}

void Cs_yr2(){

}
void Ee_Yr_Sem(){
     string ee_yr_sem;
    cout << "\nYear 1/Semester 1       Press 1"<<endl;
    cout << "\nYear 1/Semester 2       Press 2"<<endl;
    cout << "\nYear 2/Semester 1       Press 3"<<endl;
    cout << "\nYear 2/Semester 2       Press 4"<<endl;
    cin >> ee_yr_sem;

    if(ee_yr_sem == "1"){
        Ee_yr1_sem1();
    }else if (ee_yr_sem == "2"){
       Ee_yr1_sem2();
    }
}

void Ee_yr1_sem1(){
    Guide();
    string Input_Method_EE_yr1_sem1;
    cout << "Input using scores        Press 1"<<endl;
    cout << "Input using grade points  Press 2"<<endl;
    cout << "Input using grades        Press 3"<<endl;
    cin >> Input_Method_EE_yr1_sem1;

    if (Input_Method_EE_yr1_sem1 == "1"){
        cout << "Safe";
    }else if (Input_Method_EE_yr1_sem1 == "2"){
        Ee_Result_yr1_Sem1_gradepoint();
    }else if (Input_Method_EE_yr1_sem1 == "3"){
       // NOT AN ACTIVE FUNCTION
       // Ee_Result_yr1_Sem1_grade();
    }

}
void Ee_Result_yr1_Sem1_gradepoint(){
     int sta101, phy101, phy106, chm101, mth101,mth103;
    cout << "Enter your grade points for the respective courses."<<endl;
    cout << "STA 101: ";
    cin >> sta101;
    cout << "PHY 101: ";
    cin >> phy101;
    cout << "PHY 106: ";
    cin >> phy106;
    cout << "CHM 101: ";
    cin >> chm101;
    cout << "MTH 101: ";
    cin >> mth101;
    cout << "MTH 103: ";
    cin >> mth103;
// INTPUTING GRADE POINTS FOR TWO UNIT COURSES
    int gst101, gst103, get111;
    cout << "GST 101: ";
    cin >> gst101;
    cout << "GST 103: ";
    cin >> gst103;
    cout << "GET 111: ";
    cin >> get111;
//INPUTING GRADE POINT FOR ONE UNIT COURSES
    int phy107, chm107;
    cout << "PHY 107: ";
    cin >> phy107;
    cout << "CHM 107: ";
    cin >> chm107;

   /* int list1[] = { csc101, phy101, chm101, mth101, gst101, gst103, gst108, chm107, phy107};
    for (int i; i > 5 || i < 0;){
            cout << list1[i];
        break;
    };*/
    // REMEMBER TO WORK ON THE CODE BELOW
    // THERE SHOULD BE A BETTER WAY
    if (sta101 > 5 || sta101 < 0 || phy101 > 5 || phy101 < 0 || phy106 > 5 || phy106 < 0 || chm101 > 5 || chm101 < 0 || mth101 > 5 || mth101 < 0 || mth103 > 5 || mth103 < 0 || gst101 > 5 || gst101 < 0 || gst103 > 5 || gst103 < 0 || get111 > 5 || get111 < 0 || chm107 > 5 || chm107 < 0 || phy107 > 5 || phy107 < 0){
        cout << "Invalid response(s)";


    }else{
        //GPA CALCULATOR FOR COMPUTER SCIENCE YEAR ONE SEMESTER ONE
        double result = ((((sta101 + phy101 + phy106 + chm101 + mth101 + mth103)*3) + ((gst101 + gst103 + get111)*2) + ((phy107 + chm107)*1)))/ 26.0;
    cout << "\nYour GPA is " <<result;
    }




}
void Ee_yr1_sem2(){
    Guide();
    string Input_Method;
    cout << "Input using scores        Press 1"<<endl;
    cout << "Input using grade points  Press 2"<<endl;
    cout << "Input using grades        Press 3"<<endl;
    cin >> Input_Method;

    if (Input_Method == "1"){
        cout << "Safe";
    }else if (Input_Method == "2"){
        Ee_Result_yr1_Sem2_gradepoint();
    }else if (Input_Method == "3"){
        // NOT AN ACTIVE FUNCTION ATM
        //Cs_Result_yr1_Sem2_grade();
    }

}
void Ee_Result_yr1_Sem2_gradepoint(){
    int chm102, phy102, gst102, mth102, mth104;
    cout << "Enter your grade points for the respective courses."<<endl;
    cout << "CHM 102: ";
    cin >> chm102 ;
    cout << "PHY 102: ";
    cin >> phy102;
    cout << "GST 102: ";
    cin >> gst102;
    cout << "MTH 102: ";
    cin >> mth102;
    cout << "MTH 104: ";
    cin >> mth104;
    // INPUTING GRADE POINTS FOR TWO UNIT COURSES
    int gst104, gst105, gst125, chm106;
    cout << "GST 104: ";
    cin >> gst104;
    cout << "GST 105: ";
    cin >> gst105;
    cout << "GST 125: ";
    cin >> gst125;
    cout << "CHM 106: ";
    cin >> chm106;
    // INPUTING GRADE POINTS FOR ONE UNIT COURSES
    int phy108, chm108;
    cout << "PHY 108: ";
    cin >> phy108;
    cout << "CHM 108: ";
    cin >> chm108;
    // GPA CALCULATOR FOR COMPUTER SCIENCE YEAR ONE SEMESTER TWO
    double result = ((((chm102 + phy102 + gst102 + mth102 + mth104)*3) + ((gst104 + gst105 + gst125 + chm106)*2) + ((phy108 + chm108)*1)))/ 25.0;
    cout << "\nYour GPA is " <<result;

}
void ME(){

}
//NAMING SYSTEM FOR THE CARRY-OVER VARIABLES: CO_ONE_GP(GRADE)_2(YEAR)
//NAMING SYSTEM FOR THE CARRY-OVER VARIABLES: CO(CARRY-OVER)_G(GRADE: because this is for the function that takes only grades)/GP(FOR THE FUNCTION THAT TAKES GRADE POINTS)/S(FOR THE FUNCTION THAT TAKES SCORES)_ONE(AMOUNT OF CARRY-OVER SUBJECTS: ONE)/TWO(AMOUNT OF CARRY-OVER SUBJECTS: TWO)_2(YEAR : THIS GOES FOR THE YEAR TWO)/3/4
void carryover_one_gradepoints_2(){

    string CarryOver_G_one_2;
    cout << "Enter ...";
    int carryoverg_one_2;
    cout << "Enter ...";
    cin >> carryoverg_one_2;
}
int carryover_one_grade_2(){
    int carryovergpone2;
    string CarryOver_Gp_One_2;
    cout << "Enter ...";
    int carryovergp_one_2;
    cout << "Enter";
    cin >> carryovergp_one_2;
    carryovergpone2 = getgpa(carryovergp_one_2);

}
void carryover_two_gradepoints_2(){

    string CarryOver_G_two_2;
    cout << "Enter ...";
    int carryoverg_two_2;
    cout << "Enter ...";
    cin >> carryoverg_two_2;
}
int carryover_two_grade_2(){
    int carryovergptwo2;
    string CarryOver_Gp_two_2;
    cout << "Enter ...";
    int carryovergp_two_2;
    cout << "Enter";
    cin >> carryovergp_two_2;
    carryovergptwo2 = getgpa(carryovergp_two_2);

}

