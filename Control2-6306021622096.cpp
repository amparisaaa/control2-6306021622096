#include<iostream>
#include<string>
using namespace std;
int inputScore();
string calGrade(int);
int showGrade(string,int);
int score;
int main()
{
	int score = inputScore();
	string grade = calGrade(score);
	showGrade(grade,score);
	return(0);
}
int inputScore()
{
	int hw,midterm, final;
	cout << "Enter Homework score : ";
	cin >> hw;
	cout << "Enter Midterm score : " ;
	cin >> midterm;
	cout <<"Enter Final score : ";
	cin >> final;
	score = hw + midterm + final;
	return score;
}
string calGrade(int score)
{
	//calc grade
	if (score >= 80 ){
		return(" A ");
	}
	else if (score >= 75){
		return(" B+ ");
	}
	else if (score >= 70){
		return(" B ");
	}
	else if (score >= 65){
		return(" C+ ");
	}
	else if (score >= 60){
		return(" C ");
	}
	else if (score >= 55){
		return(" D+ ");
	}
	else if (score >= 50){
		return(" D ");
	}
	else 
		return(" F ");

}
int showGrade(string grade,int score)
{
	//showgdrade
	cout << "Total score : " << score << endl;
	cout << "Your grade is : " <<  grade << endl;
	return(0);
}