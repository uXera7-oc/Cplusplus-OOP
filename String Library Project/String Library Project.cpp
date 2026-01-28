//--------This Application Demonstrates The Usage of a reusable C++ Library For Problem Solving V3
//--------Exercises 23-44




#include <iostream>
#include<string>
#include "clsString.h"

using namespace std;


int main()
{
	clsString String1;
	clsString String2("Mohammed");

	String1.Value = "Ali Ahmed";

	cout << "String1 = " << String1.Value << endl;
	cout << "String2 = " << String2.Value << endl;

//Count Words 36
	String1.CountEachWordInString();
	//With Static Function
	clsString::CountEachWordInString("octa gg ez");

	
//Print First Letter 23
	String1.PrintFirstLetterOfEachWordInString();
	//With Static Function
	clsString::PrintFirstLetterOfEachWordInString("Oivat uzer");
	

//Print Upper First Letter 24
	String1.PrintUpperFirstLetterOfEachWordInString();
	//With Static Function
	clsString::PrintUpperFirstLetterOfEachWordInString("oivat uzer");


//Print Lower First Letter 25
	String1.PrintLowerFirstLetterOfEachWordInString();
	clsString::PrintLowerFirstLetterOfEachWordInString("Hi How Are You?");


//All Upper 26 (Part1)
	String1.PrintUpperLettersOfaString();
	clsString::PrintUpperLettersOfaString("i'm fine and you?");


//All Lower 26 (Part2)
	String1.PrintLowerLettersOfaString();
	clsString::PrintLowerLettersOfaString("GOOD THNX");


//Invert All Letters Case 28
	String1.AllLettersInverter();
	clsString::AllLettersInverter("I ThiNk This Is Ez");


//String Length 29
	String1.StringLength();
	clsString::StringLength("measure this string RN!");


//Capital Letter Counter 29
	String1.CapitalLettersCounter();
	clsString::CapitalLettersCounter("Just Two");


//Small Letter Counter 29
	String1.SmallLettersCounter();
	clsString::SmallLettersCounter("Hi");


//Count Letter 30
	cout << "Letter Count (Specific case) = " << String1.CountLetters('A') << endl;
	cout << "Letter Count (Specific case) = " << clsString::CountLetters("Uzer", 'U') << endl;


//Count Letter All Cases 31
	cout << "Letter Count (All Cases) = " << String1.CountLettersAllCases('m') << endl;
	cout << "Letter Count (All Cases) = " << clsString::CountLettersAllCases("Entry Level", 'e') << endl;

//Count Vowels 33
	cout << "Vowels Count  = " << String1.CountVowels() << endl;
	cout << "Vowels Count  = " << clsString::CountVowels("Zebra") << endl;
	

//Print All Vowels 34
	String1.PrintAllVowels();
	clsString::PrintAllVowels("Iot");
	cout << endl;



//Print Each Word 35
	String1.PrintEachWordInString();
	cout << endl;
	clsString::PrintEachWordInString("C++ is Amazing");
	cout << endl << endl;


//Split String 37
	cout << "String After Spliting : " << endl;

	vector<string> vString;

	vString = String1.SplitString(" ");

	for (string& s : vString)
	{
		cout << s << endl;
	}


//Tirms 38
	String1.Value = "   Hello    ";
	cout << "\nString     = " << String1.Value;


	String1.Value = "   Hello    ";
	String1.TrimLeft();
	cout << "\n\nTrim Left  = " << String1.Value;

	//-------------

	String1.Value = "   Hello    ";
	String1.TrimRight();
	cout << "\nTrim Right = " << String1.Value;

	//-------------

	String1.Value = "   Hello    ";
	String1.Trim();
	cout << "\nTrim       = " << String1.Value;
	cout << endl << endl;

//Join String 39-40

	vector <string> vString1 = {"Mohammed","Fadi","Ali","Maher"};
	
	cout << "Vector After Join : ";
	cout << clsString::JoinString(vString1," ");
	cout << endl << endl;
	

	string Array[] = { "Mohammed","Fadi","Ali","Maher" };
	cout << "Array After Join : ";
	cout << clsString::JoinString(Array, 4, " ");
	cout << endl << endl;


//Reverse String 41
	String1.Value = "This Reverse";
	String1.ReverseString();
	cout << endl;
	clsString::ReverseString("Herzlich Willkommen");
	cout << endl << endl;


//Replace Word 42-43

	
	cout << "\nReplace Words With Built in Function : " << String1.ReplaceWordInStringUsingBuiltInFunction("Welcome to Algeria , Algeria is a good Country !", "Algeria", "Jordan") << endl;
	cout << "\nReplace Words With Custom Function : " << String1.ReplaceWordInStringUsingSplits("Hi Oivat Hwru Oivat", "Oivat", "Uzer") << endl;


//Remove Punctuations 44
	cout << "\nAfter Removing Punctuations : \n";
	String1.Value = "This is: a sample text, with punctuations.";
	String1.RemovePunctuations();
	cout << String1.Value << endl;
	cout << clsString::RemovePunctuations("Welcome To Jordan, Jordan is a good country !");



	system("pause>0");
	return 0;
}