#pragma once
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

char negationsList[40][100], loveList[40][100], friendsList[40][100], workList[40][100],
familyList[40][100], schoolList[40][100], helloList[40][100];

int negationsNr, loveNr, friendsNr, workNr, familyNr, schoolNr, helloNr;

void buildKeyLists()
{
	ifstream negationsFile("negations.txt");
	negationsFile >> negationsNr;
	negationsFile.get();
	for (int i = 0; i < negationsNr; i++)
		negationsFile.getline(negationsList[i], 100);
	negationsFile.close();

	ifstream loveFile("love.txt");
	loveFile >> loveNr;
	loveFile.get();
	for (int i = 0; i < loveNr; i++)
		loveFile.getline(loveList[i], 100);
	loveFile.close();

	ifstream friendsFile("friendstxt.txt");
	friendsFile >> friendsNr;
	friendsFile.get();
	for (int i = 0; i < friendsNr; i++)
		friendsFile.getline(friendsList[i], 100);
	friendsFile.close();

	ifstream workFile("work.txt");
	workFile >> workNr;
	workFile.get();
	for (int i = 0; i < workNr; i++)
		workFile.getline(workList[i], 100);
	workFile.close();

	ifstream familyFile("family.txt");
	familyFile >> familyNr;
	familyFile.get();
	for (int i = 0; i < familyNr; i++)
		familyFile.getline(familyList[i], 100);
	familyFile.close();


	ifstream schoolFile("school.txt");
	schoolFile >> schoolNr;
	schoolFile.get();
	for (int i = 0; i < schoolNr; i++)
		schoolFile.getline(schoolList[i], 100);
	schoolFile.close();

	ifstream helloFile("hello.txt");
	helloFile >> helloNr;
	helloFile.get();
	for (int i = 0; i < helloNr; i++)
		helloFile.getline(helloList[i], 100);
	helloFile.close();
}

int analyzeQuestion(char question[])
{
	buildKeyLists();
	int negation = 0, money=0, love=0, work=0, school=0,family=0, friends=0,
	tired=0, bored=0, sad=0, angry=0, happy=0, dumb=0, hungry=0, like=0, hello=0, time=0, more=0, hate=0;
	for (int i = 0; i < negationsNr; i++)
		if (strstr(question, negationsList[i]))
			negation = 1;
	for (int i = 0; i < loveNr; i++)
		if (strstr(question, loveList[i]))
			love = 1;
	for (int i = 0; i < workNr; i++)
		if (strstr(question, workList[i]))
			work = 1;
	for (int i = 0; i < familyNr; i++)
		if (strstr(question, familyList[i]))
			family = 1;
	for (int i = 0; i < schoolNr; i++)
		if (strstr(question, schoolList[i]))
			school = 1;
	for (int i = 0; i < friendsNr; i++)
		if (strstr(question, friendsList[i]))
			friends = 1;
	for (int i = 0; i < helloNr; i++)
		if (strstr(question, helloList[i]))
			hello = 1;

	if (strstr(question, "hate"))
		hate = 1;
	if (strstr(question, "despise"))
		hate = 1;
	if (strstr(question, "more"))
		more = 1;
	if (strstr(question, "time"))
		time = 1;
	if (strstr(question, "money"))
		money = 1;
	if (strstr(question, "like"))
		like = 1;
	if (strstr(question, "cash"))
		money = 1;
	if (strstr(question, "sad"))
		sad = 1;
	if (strstr(question, "down"))
		sad = 1;
	if (strstr(question, "upset"))
		sad = 1;
	if (strstr(question, "bored"))
		bored = 1;
	if (strstr(question, "angry"))
		angry = 1;
	if (strstr(question, "hungry"))
		hungry = 1;
	if (strstr(question, "dumb"))
		dumb = 1;
	if (strstr(question, "stupid"))
		dumb = 1;
	if (strstr(question, "tired"))
		tired = 1;
	if (strstr(question, "exhausted"))
		tired = 1;
	if (strstr(question, "happy"))
		happy = 1;
	if (strstr(question, "excited"))
		happy = 1;
	
	if(hello)
		return 78;
	if(negation)
	{
		if(money)
		{
			if (love)
				return 3;
			if (friends)
				return 1;
			if (work)
				return 2;
			
			if(sad)
				return 4;
			if(hungry)
				return 5;
			if (school)
				return 6;
			
			return 7;
		}
		if (love)
		{
			if (friends)
				return 8;
			if (happy || sad)
				return 9;
			if(family)
				return 10;
			if(angry)
				return 11;
			
			return 12;

		}
		if(work)
		{
			if (friends)
				return 13;
			if (happy || like)
				return 14;
			if (family)
				return 15;
			if (school)
				return 16;
				
			return 17;
		}
		if(family)
		{
			if(friends)
				return 18;
			if (school)
				return 19;
			if(happy)
				return 20;
			if (angry)
				return 21;
			
			return 22;
		}
		if(friends)
		{
			if (school)
				return 23;
			if (happy)
				return 24;
			
			return 25;
		}
		if(school)
		{
			if(happy || like)
				return 26;
			if (time)
				return 80;
			return 27;

		}
		return 81;
	}
	if(love)
	{
		if(sad)
			return 9;
		if (tired)
			return 29;
		if (bored)
			return 30;
		if (angry)
			return 31;
		if (happy)
			return 32;
		if (work)
			return 33;
		if(school)
			return 34;
		if (money)
			return 35;
		return 36;

	}
	if(school)
	{
		if (like)
			return 79;
		if (friends)
			return 37;
		if (tired)
			return 38;
		if(bored)
			return 39;
		if (happy)
			return 40;
		if (dumb)
			return 41;
		if (sad)
			return 26;
		if(money)
			return 42;
		if (family)
			return 43;
		if (hungry)
			return 44;
		return 45;
	}
	if(work)
	{
		if	(tired)
			return 46;
		if (bored)
			return 47;
		if	(hungry)
			return 48;
		if (sad)
			return 14;
		if (angry)
			return 49;
		if(dumb)
			return 50;
		if (friends)
			return 51;
		if (family)
			return 52;
		if (happy)
			return 53;
		if (money)
			return 54;
		return 55;
	}
	if(family)
	{
		if(sad)
			return 20;
		if(dumb)
			return 56;
		if(money)
			return 57;
		if(happy)
			return 58;
		if(tired)
			return 59;
		if(hungry)
			return 60;
		if(angry)
			return 61;
		return 62;

	}
	if(friends)
	{
		if(dumb)
			return 63;
		if(happy)
			return 64;
		if (sad)
			return 24;
		if(money)
			return 65;
		if(angry)
			return 66;
		if (hungry)
			return 67;
		if(tired)
			return 68;
		if (bored)
			return 69;
		return 70;
	}
	if(money)
	{
		if (happy)
			return 71;
		if (sad)
			return 72;
		if(bored)
			return 73;
		if (tired)
			return 74;
		if(dumb)
			return 75;
		if(hungry)
			return 76;
		return 77;
	}
	if (hungry)
		return 82;
	if(sad)
		return 83;
	if (happy)
		return 84;
	if(tired)
		return 85;
	if (bored)
		return 86;
	if (hate)
		return 87;
	if (more)
		return -1;
	return 0;
}
