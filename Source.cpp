#include <SFML/Graphics.hpp>
#include <cstring>
#include <analyze.h>
#include <SelectRule.h>
#include <Windows.h>
#pragma warning(disable: 4996)
using namespace sf;
using namespace std;

Font font;
RenderWindow windowScreen(VideoMode(1800, 950), "Jador Bot");
Texture textureBackground, texturePerson, textureRule, textureExit, textureInfo;

int analyzeQuestion(char question[]);

char* selectRule(int ruleNr);

void showInfo()
{
    RenderWindow windowInfo(VideoMode(800, 600), "Info Window");
    Sprite spriteInfoTxt;
    spriteInfoTxt.setTexture(textureInfo);
    
    while (windowInfo.isOpen())
    {
        Event event;
        while (windowInfo.pollEvent(event))
        {
            if (event.type == Event::Closed)
                windowInfo.close();
        }
        
        windowInfo.clear(Color(254, 217, 154));
        windowInfo.draw(spriteInfoTxt);
        windowInfo.display();
    }
}

void clearChat(int & counterEndlines, char* chatUserReplies, char* chatBotReplies, int &chatY, Text& textBunVenit)
{
    counterEndlines = 0;
    chatUserReplies[0] = '\0';
    chatBotReplies[0] = '\0';
    chatY = 60;
    textBunVenit.setString("\0");
}

int findLastSpacePosition(char text[], int fromWhere)
{
    for (int i = fromWhere; i >= 0; i--)
        if (text[i] == ' ')
            return i;
    return 0;
}

void resetTextAndChar(Text& text, char* charText)
{
    charText[0] = '\0';
    text.setString(charText);
}

void newLineTextInput(char* question, Text &textInputR1,Text &textInputR2,Text &textInputR3,char *charInputR1,char *charInputR2,char *charInputR3, int &pozInputR2, int &pozInputR3)
{
    
    if (question[0] == '\0')
    {
        resetTextAndChar(textInputR1, charInputR1);
        resetTextAndChar(textInputR2, charInputR2);
        resetTextAndChar(textInputR3, charInputR3);
        return;
    }
    if(charInputR2[0] == '\0' && charInputR3[0] == '\0')
    {
        if(strlen(question) < 60)
        {
            strcpy(charInputR1, question);
            textInputR1.setString(charInputR1);
            windowScreen.draw(textInputR1);
            return;
        }
        int lastSpace = findLastSpacePosition(charInputR1, strlen(charInputR1));
        char aux[500];
        strcpy(aux, charInputR1 + lastSpace );
        strcpy(charInputR2, aux);
        charInputR1[lastSpace] = '\0';
        pozInputR2 = lastSpace;
		textInputR1.setString(charInputR1);
		textInputR2.setString(charInputR2);
        return;
    }
    if(charInputR3[0] == '\0')
    {
        if(strlen(charInputR2) < 60)
        {
            char aux[500];
            strcpy(aux, question + pozInputR2);
            strcpy(charInputR2, aux);
            textInputR2.setString(charInputR2);
            return;
        }
		int lastSpace = findLastSpacePosition(charInputR2, strlen(charInputR2));
		char aux[500];
		strcpy(aux, charInputR2 + lastSpace);
		strcpy(charInputR3, aux);
		charInputR2[lastSpace] = '\0';
		pozInputR3 = lastSpace+ pozInputR2;
		textInputR1.setString(charInputR1);
		textInputR2.setString(charInputR2);
		textInputR3.setString(charInputR3);
        return;
    }
    else 
    {
        if (strlen(charInputR3) < 60)
        {
            
            char aux[500];
            strcpy(aux, question + pozInputR3);
            strcpy(charInputR3, aux);
            textInputR3.setString(charInputR3);
            return;
        }
    }
}

void addNewLine(char* text1, char* text2, int pozAddNewLine)
{
    char aux[1000];
    strcpy(aux, text1 + pozAddNewLine + 1);
    text1[pozAddNewLine] = '\n';
    strcpy(text1 + pozAddNewLine + 1, aux);
    strcat(text2, "\n");
}

void fixOverload(char* text1, char* text2, int& counterEndlines)
{
    if (strlen(text1) > 60)
    {
        int lastSpace = findLastSpacePosition(text1, 60);
        
        if (lastSpace < 20)
            addNewLine(text1, text2, 60);
        else
            addNewLine(text1, text2, lastSpace);
        counterEndlines++;
    }
    if (strlen(text1) > 120)
    {
        int lastSpace = findLastSpacePosition(text1, 120);
        if (lastSpace < 80)
            addNewLine(text1, text2, 120);
        else
            addNewLine(text1, text2, lastSpace);
        counterEndlines++;
    }
    if (strlen(text1) > 180)
    {
        int lastSpace = findLastSpacePosition(text1, 180);
        if (lastSpace < 140)
            addNewLine(text1, text2, 180);
        else
            addNewLine(text1, text2, lastSpace);
        counterEndlines++;
    }
	if (strlen(text1) > 240)
	{
		int lastSpace = findLastSpacePosition(text1, 240);
		if (lastSpace < 200)
			addNewLine(text1, text2, 240);
		else
			addNewLine(text1, text2, lastSpace);
		counterEndlines++;
	}
    if (strlen(text1) > 300)
    {
        int lastSpace = findLastSpacePosition(text1, 300);
        if (lastSpace < 260)
            addNewLine(text1, text2, 300);
        else
            addNewLine(text1, text2, lastSpace);
        counterEndlines++;
    }
    if (strlen(text1) > 360)
    {
        int lastSpace = findLastSpacePosition(text1, 360);
        if (lastSpace < 320)
            addNewLine(text1, text2, 320);
        else
            addNewLine(text1, text2, lastSpace);
        counterEndlines++;
    }
}

void printTextReply(Text text, int chatY)
{
    text.setPosition(850, chatY);
    windowScreen.draw(text);
}

Text setTextVariables(Text text, int size, int x, int y)
{
    text.setFont(font);
    text.setCharacterSize(size);
    text.setFillColor(Color(18, 27, 40));
    text.setPosition(x, y);
    return text;
}

void resetChatBox()
{
    RectangleShape chatBox(Vector2f(600.f, 750.f));
    chatBox.setPosition(840, 50);
    chatBox.setOutlineThickness(4.f);
    chatBox.setFillColor(Color(254, 217, 154));
    chatBox.setOutlineColor(Color(37, 37, 37));
    windowScreen.draw(chatBox);
}

void resetChatInputBox()
{
    RectangleShape chatInputBox(Vector2f(600.f, 100.f));
    chatInputBox.setPosition(840, 810);
    chatInputBox.setOutlineThickness(4.f);
    chatInputBox.setFillColor(Color(254, 217, 154));
    chatInputBox.setOutlineColor(Color(37, 37, 37));
    windowScreen.draw(chatInputBox);
}

void makeRuleButton(RectangleShape& ruleButton)
{
    ruleButton.setPosition(425, 750);
    ruleButton.setFillColor(Color(200,220,220));
    ruleButton.setOutlineThickness(4.f);
    ruleButton.setOutlineColor(Color(37, 37, 37));
    windowScreen.draw(ruleButton);
    Sprite spriteRule;
    spriteRule.setTexture(textureRule);
    spriteRule.setPosition(Vector2f(425.f, 750.f));
    windowScreen.draw(spriteRule);
}

void makeExitButton(RectangleShape& exitButton)
{
    exitButton.setPosition(575, 750);
    exitButton.setFillColor(Color(200, 220, 220));
    exitButton.setOutlineThickness(4.f);
    exitButton.setOutlineColor(Color(37, 37, 37));
	windowScreen.draw(exitButton);
    Sprite spriteExit;
    spriteExit.setTexture(textureExit);
    spriteExit.setPosition(Vector2f(575.f, 750.f));
    windowScreen.draw(spriteExit);
}

void drawChatScreen(RectangleShape ruleButton, RectangleShape exitButton)
{
	Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);
	windowScreen.draw(spriteBackground);

	RectangleShape screenBox(Vector2f(1200.f, 900.f));
	screenBox.setPosition(280, 25);
	screenBox.setFillColor(Color(216, 159, 101));
	screenBox.setOutlineThickness(5.f);
	screenBox.setOutlineColor(Color(37, 37, 37));
	windowScreen.draw(screenBox);

	resetChatBox();
	resetChatInputBox();

    Sprite spritePerson;
    spritePerson.setTexture(texturePerson);
    spritePerson.setPosition(Vector2f(350.f, 100.f));
    
	RectangleShape personOutline(Vector2f(405.f, 575.f));
	personOutline.setPosition(350, 100);
	personOutline.setFillColor(Color(216, 159, 101));
	personOutline.setOutlineThickness(5.f);
	personOutline.setOutlineColor(Color(37, 37, 37));

	windowScreen.draw(personOutline);
    windowScreen.draw(spritePerson);

    makeRuleButton(ruleButton);
    makeExitButton(exitButton);
   
}

void getQuestion(char character, int& pozQuestion, char question[])
{

	if (character != 13 && pozQuestion >= 0 && character != 8)
	{
		question[pozQuestion] = character;
		pozQuestion++;
		question[pozQuestion] = NULL;
    }
    else if (character == 8  && pozQuestion>0)
    {
        if (question[pozQuestion - 1] != '\n')
        {
            pozQuestion--;
            question[pozQuestion] = NULL;
        }
    }
}

int main()
{
	RectangleShape exitButton(Vector2f(120.f, 120.f));
	RectangleShape ruleButton(Vector2f(120.f, 120.f));
    Text textBunVenit, textBot, textUser, textInputR1, textInputR2, textInputR3;

	textInputR1 = setTextVariables(textInputR1, 18, 850, 810);
    textInputR2 = setTextVariables(textInputR2, 18, 846, 830);
    textInputR3 = setTextVariables(textInputR3, 18, 846, 850);
    textInputR1.setFillColor(Color(0, 0, 0));
    textInputR2.setFillColor(Color(0, 0, 0));
	textInputR3.setFillColor(Color(0, 0, 0));

    char charInputR1[300], charInputR2[300], charInputR3[300];
    charInputR1[0] = '\0'; charInputR2[0] = '\0'; charInputR3[0] = '\0';

    textureBackground.loadFromFile("resurse/coffeShop.jpg");
    texturePerson.loadFromFile("resurse/botImage.jpg");
    textureRule.loadFromFile("resurse/info.png");
    textureExit.loadFromFile("resurse/exit.png");
    textureInfo.loadFromFile("resurse/infotext.png");
    font.loadFromFile("resurse/Roboto-Black.ttf");

    int pozQuestion = 0, chatY = 90, counterEndlines = 3, lastRuleNumber=-1, pozInputR2=0, pozInputR3=0;
    
    textBunVenit = setTextVariables(textBunVenit, 18, 850, 60);
    textBunVenit.setString("Welcome to therapy! My name is Jador Bot. How could i help you?");
    textBunVenit.setFillColor(Color(10, 38, 200));

    textUser = setTextVariables(textUser, 18, 850, chatY);
	textUser.setFillColor(Color(238, 97, 1));

    textBot = setTextVariables(textBot, 18, 850, chatY);
    textBot.setFillColor(Color(10, 38, 200));

    char chatUserReplies[10000] = {'\0'}, chatBotReplies[10000] = {'\0'};

    while (windowScreen.isOpen())
    {
        Event event;

        while (windowScreen.pollEvent(event))
        {
            windowScreen.clear(Color(0, 0, 0));

            switch (event.type)
            {
            case Event::Closed:

                windowScreen.close();
                break;

            case Event::TextEntered:
            {
                char character, question[5000];
                character = static_cast<char>(event.text.unicode);

                if (character == 27)
                    windowScreen.close();
                if (character == 13 && pozQuestion != 0)
                {
                    
                    textUser.setString(question);

                    char answer[10000] = { "\0" };
                    int ruleNumber = analyzeQuestion(question);
                    if (ruleNumber == -1)
                    {
                        if (lastRuleNumber != -1)
                            ruleNumber = lastRuleNumber;
                        else
                            ruleNumber = 0;
                    }
                    else
                        lastRuleNumber = ruleNumber;
                    strcat(answer, selectRule(ruleNumber));
                    
                    if (counterEndlines > 27)
                        clearChat(counterEndlines, chatUserReplies,chatBotReplies, chatY, textBunVenit);

                    fixOverload(question, chatBotReplies, counterEndlines);

                    strcat(chatUserReplies, question);

                    fixOverload(answer, chatUserReplies, counterEndlines);

                    strcat(chatBotReplies, answer);
                    strcat(chatBotReplies, "\n");
                    strcat(chatBotReplies, "\n");
                    strcat(chatBotReplies, "\n");

                    counterEndlines += 3;
                    textBot.setString(chatBotReplies);

                    strcat(chatUserReplies, "\n");
                    strcat(chatUserReplies, "\n");
                    strcat(chatUserReplies, "\n");

                    textUser.setString(chatUserReplies);

                    for (int i = 0; i <= pozQuestion; i++)
                        question[i] = '\0';
                    pozQuestion = 0;

                    charInputR1[0] = '\0';
                    charInputR2[0] = '\0';
                    charInputR3[0] = '\0';
                    textInputR1.setString(question);
                    textInputR2.setString(question);
                    textInputR3.setString(question);  
                }
                else
                {
                    getQuestion(character, pozQuestion, question);
                    newLineTextInput(question, textInputR1, textInputR2, textInputR3, charInputR1, charInputR2, charInputR3, pozInputR2, pozInputR3);
                }
                break;
            }
            case Event::MouseButtonPressed:
            {
                makeRuleButton(ruleButton);
                makeExitButton(exitButton);
				FloatRect ruleButtonBounds = ruleButton.getGlobalBounds();
                if (ruleButtonBounds.contains(Mouse::getPosition(windowScreen).x, Mouse::getPosition(windowScreen).y))
                    showInfo();

                FloatRect exitButtonBounds = exitButton.getGlobalBounds();
                if (exitButtonBounds.contains(Mouse::getPosition(windowScreen).x, Mouse::getPosition(windowScreen).y))
                    windowScreen.close();
                break;
            }
            default:
                break;
            } 
        }
		windowScreen.clear();
		drawChatScreen(ruleButton, exitButton);
		windowScreen.draw(textBunVenit);
		windowScreen.draw(textInputR1); 
        windowScreen.draw(textInputR2);
		windowScreen.draw(textInputR3);
		printTextReply(textUser, chatY);
		printTextReply(textBot, chatY + 30);
		windowScreen.display();
    }
    return 0;
}