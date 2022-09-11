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
void Cs_yr1_sem2();
void Cs_Result_yr1_Sem2_gradepoint();
void Cs_yr2();
void Ee_Yr_Sem();
void Ee_yr1_sem1();
void Ee_Result_yr1_Sem1_gradepoint();
void Ee_Result_yr1_Sem1_grade();
void Ee_yr1_sem2();
void Ee_Result_yr1_Sem2_gradepoint();
void ME();
int getgpa();
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
    cout << "Exit     Press 4"<<endl;
    cin >> task;
    //int num_1 = stoi(task);
    if (task == "1"){
        GpA_course_choice();
    }else if (task == "4"){
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
        cout << "Safe";
    }else if (Input_Method == "2"){
        Cs_Result_yr1_Sem1_gradepoint();
    }else if (Input_Method == "3"){
        Cs_Result_yr1_Sem1_grade();
    }

}
int getgpa(char grade){
    int gradepointvalue;
    switch(grade){
    case 'A':
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
        return Cs_Result_yr1_Sem1_grade();


}
    return gradepointvalue;

}
   /* if (grade == 'A'){
        gradepointvalue = 5;
    }else if (grade == 'B'){
        gradepointvalue = 4;
    }else if (grade == 'C'){
        gradepointvalue = 3;
    }else if (grade == 'D'){
        gradepointvalue = 2;
    }else if (grade == 'F'){
        gradepointvalue = 0;
    }else{
      cout << "Invalid response!"<<endl;
      Cs_Result_yr1_Sem1_grade();
      break;
    }
    return gradepointvalue;
}*/
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
     /*if(Phy101 == 'A' || 'a'){
        phy11 = 5;
    }else if(Phy101 == 'B' || 'b'){
        phy11 = 4;
    }else if(Phy101 == 'C' || 'c'){
        phy11 = 3;
    }else if(Phy101 == 'D' || 'd'){
        phy11 = 2;
    }else if(Phy101 == 'F' || 'f'){
        phy11 = 0;
    }else {
        cout << "Invalid grade";
    };*/
    cout << "CHM 101: ";
    cin >> Chm101;
    chm11 = getgpa(Chm101);
     /*if(Chm101 == 'A' || 'a'){
        chm11 = 5;
    }else if(Chm101 == 'B' || 'b'){
        chm11 = 4;
    }else if(Chm101 == 'C' || 'c'){
        chm11 = 3;
    }else if(Chm101 == 'D' || 'd'){
        chm11 = 2;
    }else if(Chm101 == 'F' || 'f'){
        chm11 = 0;
    }else {
        cout << "Invalid grade";
    };*/
    cout << "MTH 101: ";
    cin >> Mth101;
    mth11 = getgpa(Mth101);
   /* if(Mth101 == 'A' || 'a'){
        mth11 = 5;
    }else if(Mth101 == 'B' || 'b'){
        mth11 = 4;
    }else if(Mth101 == 'C' || 'c'){
        mth11 = 3;
    }else if(Mth101 == 'D' || 'd'){
        mth11 = 2;
    }else if(Mth101 == 'F' || 'f'){
        mth11 = 0;
    }else {
        cout << "Invalid grade";
    };*/
    cout << "GST 101: ";
    cin >> Gst101;
    gst11 = getgpa(Gst101);
    /*if(Gst101 == 'A' || 'a'){
        gst11 = 5;
    }else if(Gst101 == 'B' || 'b'){
        gst11 = 4;
    }else if(Gst101 == 'C' || 'c'){
        gst11 = 3;
    }else if(Gst101 == 'D' || 'd'){
        gst11 = 2;
    }else if(Gst101 == 'F' || 'f'){
        gst11 = 0;
    }else {
        cout << "Invalid grade";
    };*/
    cout << "GST 103: ";
    cin >> Gst103;
    gst13 = getgpa(Gst103);
    /*if(Gst103 == 'A' || 'a'){
        gst13 = 5;
    }else if(Gst103 == 'B' || 'b'){
        gst13 = 4;
    }else if(Gst103 == 'C' || 'c'){
        gst13 = 3;
    }else if(Gst103 == 'D' || 'd'){
        gst13 = 2;
    }else if(Gst103 == 'F' || 'f'){
        gst13 = 0;
    }else {
        cout << "Invalid grade";
    };*/
    cout << "GST 108: ";
    cin >> Gst108;
    gst18 = getgpa(Gst108);
    /*if(Gst108 == 'A' || 'a'){
        gst18 = 5;
    }else if(Gst108 == 'B' || 'b'){
        gst18 = 4;
    }else if(Gst108 == 'C' || 'c'){
        gst18 = 3;
    }else if(Gst108 == 'D' || 'd'){
        gst18 = 2;
    }else if(Gst108 == 'F' || 'f'){
        gst18 = 0;
    }else {
        cout << "Invalid grade";
    };*/
    cout << "PHY 107: ";
    cin >> Phy107;
    phy17 = getgpa(Phy107);
    /*if(Phy107 == 'A' || 'a'){
        phy17 = 5;
    }else if(Phy107 == 'B' || 'b'){
        phy17 = 4;
    }else if(Phy107 == 'C' || 'c'){
        phy17 = 3;
    }else if(Phy107 == 'D' || 'd'){
        phy17 = 2;
    }else if(Phy107 == 'F' || 'f'){
        phy17 = 0;
    }else {
        cout << "Invalid grade";
    };*/
    cout << "CHM 107: ";
    cin >> Chm107;
    chm17 = getgpa(Chm107);
    /*if(chm17 == 'A' || 'a'){
        chm17 = 5;
    }else if(Chm107 == 'B' || 'b'){
        chm17 = 4;
    }else if(Chm107 == 'C' || 'c'){
        chm17 = 3;
    }else if(Chm107 == 'D' || 'd'){
        chm17 = 2;
    }else if(Chm107 == 'F' || 'f'){
        chm17 = 0;
    }else {
        cout << "Invalid grade";
    };*/






    /*if(Csc101 || Phy101 || Chm101 || Mth101 || Gst101 || Gst103 || Gst108 || Phy107 || Chm107 == 'A' || 'a'){
        Csc101 = 5;
        Phy101 = 5;
        Chm101 = 5;
        Mth101 = 5;
        Gst101 = 5;
        Gst103 = 5;
        Gst108 = 5;
        Chm107 = 5;
        Phy107 = 5;

    }else if(Csc101 || Phy101 || Chm101 || Mth101 || Gst101 || Gst103 || Gst108 || Phy107 || Chm107 == 'B' || 'b'){
        Csc101 = 4;
        Phy101 = 4;
        Chm101 = 4;
        Mth101 = 4;
        Gst101 = 4;
        Gst103 = 4;
        Gst108 = 4;
        Chm107 = 4;
        Phy107 = 4;

    }else if(Csc101 || Phy101 || Chm101 || Mth101 || Gst101 || Gst103 || Gst108 || Phy107 || Chm107 == 'C' || 'c'){
        Csc101 = 3;
        Phy101 = 3;
        Chm101 = 3;
        Mth101 = 3;
        Gst101 = 3;
        Gst103 = 3;
        Gst108 = 3;
        Chm107 = 3;
        Phy107 = 3;

    }else if(Csc101 || Phy101 || Chm101 || Mth101 || Gst101 || Gst103 || Gst108 || Phy107 || Chm107 == 'D' || 'd'){
        Csc101 = 2;
        Phy101 = 2;
        Chm101 = 2;
        Mth101 = 2;
        Gst101 = 2;
        Gst103 = 2;
        Gst108 = 2;
        Chm107 = 2;
        Phy107 = 2;

    }else if(Csc101 || Phy101 || Chm101 || Mth101 || Gst101 || Gst103 || Gst108 || Phy107 || Chm107 == 'F' || 'f'){
        Csc101 = 0;
        Phy101 = 0;
        Chm101 = 0;
        Mth101 = 0;
        Gst101 = 0;
        Gst103 = 0;
        Gst108 = 0;
        Chm107 = 0;
        Phy107 = 0;

    }else {
        cout << "Invalid grade(s)";
    }*/
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
        cout << "Safe";
    }else if (Input_Method == "2"){
        Cs_Result_yr1_Sem2_gradepoint();
    }else if (Input_Method == "3"){
        // NOT AN ACTIVE FUNCTION ATM
        //Cs_Result_yr1_Sem2_grade();
    }
}
void Cs_Result_yr1_Sem2_gradepoint(){
    int csc102, phy102, gst102, mth102, mth103;
    //double TCL;
    //cout << "Enter your total course load:  "<<endl;
    //cin >> TCL;
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

    /*int CSC_102 = csc102;
    int PHY_102 = phy102;
    int GST_102 = gst102;
    int MTH_102 = mth102;
    int MTH_103 = mth103;
    int list1 []={CSC_102,PHY_102,GST_102,MTH_102,MTH_103};
    for (int i = 0 ; i<5 ; i++){
    cout << list1[i] << endl;
    }*/
    // INPUTING GRADE POINTS FOR TWO UNIT COURSES
    int gst104, gst105, gst125;

    cout << "GST 104: ";
    cin >> gst104;
    cout << "GST 105: ";
    cin >> gst105;
    cout << "GST 125: ";
    cin >> gst125;


    /*int GST_104 = i;
    int GST_105 = o;
    int GST_125 = p;
    int list2 []={GST_104,GST_105,GST_125};
    for (int i = 0 ; i<3 ; i++){
    cout << list2[i] << endl;
    }*/
    // INPUTING GRADE POINTS FOR ONE UNIT COURSES
    int phy108;

    cout << "PHY 108: ";
    cin >> phy108;
    /*int PHY_108 = a;
    int list3 []={PHY_108};
    for (int i = 0 ; i<1 ; i++){
    cout << list3[i] << endl;
}*/
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

