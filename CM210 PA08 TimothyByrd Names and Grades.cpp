/*
Timothy Byrd
Fall 2019
CM210 Computer Science C++

This program in C++ does the following:
  1) read three student names (first name and last name for each student) and store them
  2) read four test scores for each student and store them
  3) process the scores find the total, average
  4) display the results

  NOTE: a Nested loop
*/

#include <iostream>
using namespace std;

int main()
{
  string firstNames[3];
  string lastNames[3];
  int testScores[3][4];//2-dimensional
  int total[3];
  float average[3];
  int i, j;
  string letterGrade[3];
  
  for(i=0;i<3; i++)
  {
    cout << "Enter first name of student " << i+1 <<": ";//prompt
    cin>>firstNames[i];
    cout<<"Enter last name of student " << i+1 <<": ";
    cin>> lastNames[i];
    for(j=0; j<4; j++)
    {
      cout<<"Enter Test Score "<<j+1 <<" of " << firstNames[i] << " " << lastNames[i] << ": ";
      cin>>testScores[i][j];

    }//end of inner loop

  }//end of outer loop
 for(i=0; i<3; i++)
 {
   for(j=0; j<4; j++)
   {
     total[i] += testScores[i][j]; //finds the total scores
   }
   average[i] = total[i]/4.0;
  if(average[i] >= 90) //determines letter grade
  {
    letterGrade[i] = "A";
  }
  else if(average[i] >= 80)
  {
    letterGrade[i] = "B";
  }
  else if (average[i] >= 70)
  {
    letterGrade[i] = "C";
  }
  else if (average[i] >= 60)
  {
    letterGrade[i] = "D";
  }
  else
  {
    letterGrade[i] = "F";
  }
 }


for(i=0; i<3; i++) // prints results
  {
    cout<<firstNames[i] << " " <<lastNames[i] <<"\t";
    for(j=0; j<4; j++)
    {
      cout<<testScores[i][j] <<"\t";
    }
    cout<<total[i] << "\t" << average[i] << "\t" << letterGrade[i] << endl;
  }

}
