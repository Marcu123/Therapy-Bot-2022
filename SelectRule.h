#pragma once
#include <cstdlib>
#include <ctime>
#include <cstring>

 char* selectRule(int ruleNumber)
{
	srand(time(NULL));
	char responses[50][5000];
	int randomNumber = rand();

		switch (ruleNumber)
		{
		case 1:
		{
			strcpy_s(responses[0], "You don't need money for friends. Try to make real friends that are not after your money.");
			strcpy_s(responses[1], "Friends don't require money. If they do they aren't friends.");
			strcpy_s(responses[2], "Focus less on the money part and pay attention to the friend part.");

			return responses[randomNumber % 3];
			break;
		}
		case 2:
		{
			strcpy_s(responses[0], "You should try another job, if time permits. A good one could be something like motivational speaker.");
			strcpy_s(responses[1], "I advise you to quit this job and start a new one. Try to focus on your skills. Find something that makes you happy. The best rule is to combine the useful with the pleasant.");
			strcpy_s(responses[2], "Quit this awful job. Take a van and with your remaining money start going around the world like in Nomadland. Become a lone wolf, adopt a bear as a pet and start conquest for the Univers.");
			
			return responses[randomNumber % 3];
			break;
		}
		case 3:
		{
			strcpy_s(responses[0], "Ask your boss for a faster payment because you need that money. To compensate this, you will accept an extra hour of work for a week. Your love will be excited.");
			strcpy_s(responses[1], "Say this \"I don't have enough money in this moment, but I promise that I will make a big surprise for you!\". Your soulmate will thank me.");
			strcpy_s(responses[2], "If she stops loving you when you don't have money, leave her! You will have a lot more money then.");

			return responses[randomNumber % 3];
			break;
		}
		case 4:
		{
			strcpy_s(responses[0], "You know what they say: \"Money doesn't bring hapiness\", but it's true that it's hard to be happy when you don't have money.");
			strcpy_s(responses[1], "You will never be happy if you think that having more money will make you happy.");
			strcpy_s(responses[2], "You can try to find a better job to improve your situation, but that won't necessarly mean that you will become happy, so be careful");

			return responses[randomNumber % 3];
			break;
		}
		case 5:
		{
			strcpy_s(responses[0], "Get an extra job. Something like chef Aid or waiter. You can eat a bit after work from what's left.");
			strcpy_s(responses[1], "You don't deserve to eat. You are a bad person. OK?");

			return responses[randomNumber % 2];
			break;
		}
		case 6:
		{
			strcpy_s(responses[0], "You can try a part time job or go to a bank and make a loan. After your learn everything you need, I'm sure that you will become a billionaire and you will buy the bank where you made the loan. I trust you! ;)");
			strcpy_s(responses[1], "Drop it! Give up the education system! Learn the school of life and teach yourself some martial arts. You will get an UFC contract and your rest of life will be assured.");

			return responses[randomNumber % 2];
			break;
		}
		case 7:
		{
			strcpy_s(responses[0], "If you want an advice on how to make money maybe go to an finacial advisor.");
			strcpy_s(responses[1], "And what do I look like? An entrepreneur? Get a job or something.");
			strcpy_s(responses[2], "Get a higher paying job: One way to earn more money is to get a job that pays more. You can do this by gaining new skills or education, networking, or negotiating a higher salary at your current job.");
			strcpy_s(responses[3], "Invest in assets that generate passive income: Another way to earn more money is to invest in assets that generate passive income, such as rental properties, dividend-paying stocks, or a small business.");
			strcpy_s(responses[4], "Rob a bankand change your whole life.Grow a beardand long hairand change you name.You will live undercover for your rest of your life.This is the American Dream.You American Psycho.");
			
			return responses[randomNumber % 5];
			break;
		}
		case 8:
		{
			strcpy_s(responses[0], "One thing that might be helpful is to try and communicate openly and honestly with their partner about their feelings and concerns. It's important to be understanding and listen to their partner's perspective as well.");
			strcpy_s(responses[1], "One option might be for your friend to consider seeking the support of a professional therapist or counselor who can provide a neutral and unbiased perspective on their relationship issues.");

			return responses[randomNumber % 2];
			break;
		}
		case 9:
		{
			strcpy_s(responses[0], "If you are feeling sad because you don't have a romantic partner, it can be helpful to allow yourself to feel and express your emotions in a healthy way. It's okay to feel sad, and it's important to give yourself permission to feel and process your emotions.");
			strcpy_s(responses[1], "It can be helpful to practice self-care and self-compassion, and to remind yourself that it is okay to be single and to take time to focus on your own needs and goals.");

			return responses[randomNumber % 2];
			break;
		}
		case 10:
		{
			strcpy_s(responses[0], "If you are feeling unhappy or disconnected from your family, it can be helpful to try to identify the specific issues or behaviors that are causing your feelings of disconnection. Once you have identified the root cause of your feelings, you may be able to find ways to address or resolve these issues.");
			strcpy_s(responses[1], "It can also be helpful to try to find ways to build and strengthen your relationships with your family members. This may involve spending more time with them, finding activities that you enjoy doing together, or seeking out opportunities for open and honest communication.");

			return responses[randomNumber % 2];
			break;
		}
		case 11:
		{
			strcpy_s(responses[0], "If you are feeling angry and upset because you don't have a romantic partner, it can be helpful to take some time to acknowledge and validate your feelings. It's okay to feel angry and sad, and it's important to give yourself permission to feel and express these emotions in a healthy way.");
			strcpy_s(responses[1], "Engage in activities that bring you joy and fulfillment, such as hobbies, exercise, or spending time with friends, can help you feel better and reduce feelings of anger and sadness.");

			return responses[randomNumber % 2];
			break;
		}
		case 12:
		{
			strcpy_s(responses[0], "One way to feel good when you don't have a romantic partner is to focus on self-care and self-compassion. Take time to do things that nourish your body and mind, such as exercising, eating well, and practicing mindfulness.");
			strcpy_s(responses[1], "It can also be helpful to reframe your perspective and remind yourself that love and happiness are not solely dependent on having a romantic partner. Consider the other sources of love and fulfillment in your life, such as your relationships with friends and family, your passions and hobbies, and your personal accomplishments.");

			return responses[randomNumber % 2];
			break;
		}
		case 13:
		{
			strcpy_s(responses[0], "Surrounding yourself with supportive friends can also help you feel better when you're not sure about your work situation. Spending time with friends who are positive and encouraging can help lift your spirits and give you a sense of connection and purpose. It can also be helpful to seek out friends who are going through similar experiences, or who have been through similar challenges and can offer advice and support.");
			strcpy_s(responses[1], "It can be very frustrating and disheartening to be unable to find work, especially if your friend has been looking for a while. Encourage your friend to reach out to their professional network, including former colleagues, classmates, and industry contacts. Sometimes, job openings are not advertised and networking can help your friend find out about opportunities that might not be widely known. ");
			
			return responses[randomNumber % 2];
			break;
		}
		case 14:
		{
			strcpy_s(responses[0], "It can be helpful to try to find activities or hobbies that bring you joy and fulfillment, even if they are unrelated to your work. Engaging in activities that you enjoy and that give you a sense of accomplishment and purpose can help boost your mood and give you a sense of balance and perspective. ");
			strcpy_s(responses[1], "If you are not happy at your work place you can always find a new job, but remember that work is work and you need to find hobbies and passions outside of work to feel accomplished");
			
			return responses[randomNumber % 2];
			break;
		}
		case 15:
		{
			strcpy_s(responses[0], "It can be very difficult to deal with pressure from family members, especially when it comes to finding a job. Explain to your family the reasons why you are having trouble finding a job. It may be that there are not many job opportunities in your field, or that you have been applying for jobs but have not received any offers");
			strcpy_s(responses[1], "It can be very difficult to deal with pressure from family members, especially when it comes to finding a job. Communicate with your family. Letting your family know the challenges you are facing can help them understand your situation better.");

			return responses[randomNumber % 2];
			break;
		}
		case 16:
		{
			strcpy_s(responses[0], "If you can't find a job when you are in school/faculty, maybe you should just wait and finish your studies before you take on a job.");
			strcpy_s(responses[1], "Finding a job while you are in school/faculty can be difficult because you don't possess all the knoledge that you need.");

			return responses[randomNumber % 2];
			break;
		}
		case 17:
		{
			strcpy_s(responses[0], "Maybe review and update your resume. Make sure that your resume is up to date, clear, and tailored to the types of positions you are seeking. Consider asking a friend or a career counselor to review your resume to see if there are any areas that could be improved.");
			strcpy_s(responses[1], "You should look into your network. Reach out to your professional network, including former colleagues, classmates, and industry contacts. Sometimes, job openings are not advertised and networking can help you find out about opportunities that might not be widely known.");
			strcpy_s(responses[2], "Try looking for job openings in a variety of places. Use a variety of job search resources, such as online job boards, company websites, and job fairs. Consider looking for jobs in fields or industries that you might not have considered before.");
			strcpy_s(responses[3], "You should consider temporary or part-time work. If you are having trouble finding a full-time position, you might consider temporary or part-time work to help you make ends meet while you continue to look for a more permanent job.");
			strcpy_s(responses[4], "Seek professional help. If you are having difficulty finding work despite your efforts, you might consider seeking the help of a career counselor or coach. A professional can help you identify any roadblocks you may be facing and provide guidance on how to overcome them.");
			
			return responses[randomNumber % 5];
			break;
		}
		case 18:
		{
			strcpy_s(responses[0], "Family issues can be very difficult to deal with, and it can be especially challenging if you feel like you're not sure how to help. All you can do for your friend is listen.");
			strcpy_s(responses[1], "If your friend's family issues are causing them significant distress, it might be helpful for them to seek the guidance of a mental health professional.");

			return responses[randomNumber % 2];
			break;
		}
		case 19:
		{
			strcpy_s(responses[0], "It can be very difficult when your family doesn't support your choices, especially when it comes to your education and career. Try to have an open and honest conversation with your family about your goals and why you want to study a particular subject.");
			strcpy_s(responses[1], "Sometimes it's better to listen to your heart and do what you like. It's your life so don't let others control it.");

			return responses[randomNumber % 2];
			break;
		}
		case 20:
		{
			strcpy_s(responses[0], "Try to have open and honest conversations with your family members about how they are feeling and what might be causing their unhappiness.");
			strcpy_s(responses[1], "If your family's unhappiness is causing significant distress, it might be helpful for them to seek the guidance of a mental health professional.");

			return responses[randomNumber % 2];
			break;
		}
		case 21:
		{
			strcpy_s(responses[0], "I'm sorry to hear that, but you can't change who your family is unfortunately. The only thing you can do is to try to find something that calms you down.");
			strcpy_s(responses[1], "You should do something else until you calm down and remember that even your family members can make mistakes.");

			return responses[randomNumber % 2];
			break;
		}
		case 23:
		{
			strcpy_s(responses[0], "Get involved in activities that interest you. Join a club or team, or volunteer for a cause you care about. This can be a great way to meet people with similar interests.");
			strcpy_s(responses[1], "Be open and friendly. Smile, make eye contact, and say hello to people. You don't have to be the life of the party, but being approachable can make it easier for others to approach you.");
			strcpy_s(responses[2], "Ask questions and be a good listener. When you're talking to someone new, ask them about themselves and show that you're interested in what they have to say.");
			strcpy_s(responses[3], "Don't be too hard on yourself. It takes time to make new friends, and it's okay if it doesn't happen right away. Be patient and keep trying, and eventually you'll find people who you click with.");
			strcpy_s(responses[4], "Consider seeking support. If you're having a hard time making friends and it's affecting your mental health, consider reaching out to a therapist or counselor. They can help you work through any social anxiety or other issues that may be holding you back.");

			return responses[randomNumber % 5];
			break;
		}
		case 24:
		{
			strcpy_s(responses[0], "Consider seeking support. If you're having a hard time making friends and it's affecting your mental health, consider reaching out to a therapist or counselor. They can help you work through any social anxiety or other issues that may be holding you back.");
			strcpy_s(responses[1], "Don't be too hard on yourself. It takes time to make new friends, and it's okay if it doesn't happen right away. Be patient and keep trying, and eventually you'll find people who you click with.");

			return responses[randomNumber % 2];
			break;
		}
		case 25:
		{
			strcpy_s(responses[0], "Be open and friendly. Smile, make eye contact, and say hello to people. You don't have to be the life of the party, but being approachable can make it easier for others to approach you.");
			strcpy_s(responses[1], "Ask questions and be a good listener. When you're talking to someone new, ask them about themselves and show that you're interested in what they have to say.");
			strcpy_s(responses[2], "Get involved in activities that interest you. Join a club or team, or volunteer for a cause you care about. This can be a great way to meet people with similar interests.");
			strcpy_s(responses[3], "Don't be too hard on yourself. It takes time to make new friends, and it's okay if it doesn't happen right away. Be patient and keep trying, and eventually you'll find people you click with.");
			strcpy_s(responses[4], "Consider seeking support. If you're having a hard time making friends and it's affecting your mental health, consider reaching out to a therapist or counselor. They can help you work through any social anxiety or other issues that may be holding you back.");

			return responses[randomNumber % 5];
			break;
		}
		case 26:
		{
			strcpy_s(responses[0], "Talk to someone you trust. Whether it's a friend, family member, or teacher, sometimes it helps just to have someone to listen and offer support.");
			strcpy_s(responses[1], "Find ways to manage stress. School can be stressful, and finding healthy ways to cope with that stress can make a big difference in your overall well-being. Some ideas include exercising, practicing relaxation techniques like deep breathing, or finding a hobby you enjoy.");
			strcpy_s(responses[2], "Consider speaking with a school counselor or teacher. They may be able to help you address any specific challenges you're facing at school and come up with a plan to improve your experience.");
			strcpy_s(responses[3], "Make time for things you enjoy. It's important to take breaks from schoolwork and do things that bring you joy. Whether it's hanging out with friends, playing a sport, or pursuing a hobby, taking time for yourself can help you feel happier and more balanced.");
			strcpy_s(responses[4], "Seek out additional support if you need it. If you're struggling with your mental health or are having a hard time coping with school, consider reaching out to a counselor or therapist for additional support.");

			return responses[randomNumber % 5];
			break;
		}
		case 27:
		{
			strcpy_s(responses[0], "You should go to a faculty if you haven't finished one already, but even if you did you can always start a new one.");
			strcpy_s(responses[1], "Education is very important if you want to have a great career.");

			return responses[randomNumber % 2];
			break;
		}
		case 80:
		{
			strcpy_s(responses[0], "Try to focus on your studies and stop waisting time with distractions like your phone.");
			strcpy_s(responses[1], "Try to organize your time to cover all your school work. The Education System is one of the best ways to get your best possible future. ");

			return responses[randomNumber % 2];
			break;
		}
		case 81:
		{
			strcpy_s(responses[0], "Don't be so negative all the time. Learn to be positiv from time to time.");
			strcpy_s(responses[1], "No?");

			return responses[randomNumber % 2];
			break;
		}
		case 29:
		{
			strcpy_s(responses[0], "It's normal to feel tired from time to time, especially if you have a lot going on in your life. However, if your partner is consistently feeling tired, it might be a good idea for them to speak with a healthcare professional.");
			strcpy_s(responses[1], "Support them in seeking medical help if necessary. If your partner's fatigue persists despite these efforts, it might be a good idea for them to speak with a healthcare professional.");

			return responses[randomNumber % 2];
			break;
		}
		case 30:
		{
			strcpy_s(responses[0], "Communicate openly with your partner. Talk about how you're feeling and try to understand each other's perspectives.");
			strcpy_s(responses[1], "Make an effort to mix things up. Try doing new activities or going to new places together. This can help add some novelty and excitement to your relationship.");
			strcpy_s(responses[2], "Set aside quality time for each other. With busy schedules, it's easy for couples to get caught up in their own tasks and neglect their relationship.");
			strcpy_s(responses[3], "Seek outside support. If you're feeling stuck and are having a hard time resolving your feelings of boredom, consider seeking support from a couples therapist or counselor.");

			return responses[randomNumber % 4];
			break;
		}
		case 31:
		{
			strcpy_s(responses[0], "Communicate openly with your partner. Talk about how you're feeling and try to understand each other's perspectives.");
			strcpy_s(responses[1], "It's normal for couples to argue or have conflicts from time to time, but it's important to try to resolve conflicts in a healthy way.");

			return responses[randomNumber % 2];
			break;
		}
		case 32:
		{
			strcpy_s(responses[0], "Cherish any moment that you have with your partner if you are happy.");
			strcpy_s(responses[1], "You don't need me then, go bother your partner.");

			return responses[randomNumber % 2];
			break;
		}
		case 33:
		{
			strcpy_s(responses[0], "You always need to balance your love life and your work, because you need both for a healthy life.");
			strcpy_s(responses[1], "I'm glad to hear that! It's always great when we have positive relationships with the people we care about.");

			return responses[randomNumber % 2];
			break;
		}
		case 34:
		{
			strcpy_s(responses[0], "That's great! It's always nice to have someone to share your experiences with. Just make sure to communicate openly and honestly with your girlfriend, and be considerate of her feelings");
			strcpy_s(responses[1], "I hope your relationship will last.");

			return responses[randomNumber % 2];
			break;
		}
		
		case 35:
		{
			strcpy_s(responses[0], "I advise you to buy your partner a McLaren. She will stay with you your whole life for this...... No, money doesn't mean everything. Try to be a lovebale person, not just for your money!");
			strcpy_s(responses[1], "Donate your money. I don't know if you will be happy, but someone else surely will be.");

			return responses[randomNumber % 2];
			break;
		}
		case 36:
		{
			strcpy_s(responses[0], "You have probably heard communication is key in a relationship. This remains true, whether it is in your romantic life, personal life, or professional life. Communicating is not as simple as just talking about things. You need to learn how to connect with your partner.");
			strcpy_s(responses[1], "The concept of showing appreciation, however, can be challenging. Saying thank you every 5 minutes when your partner does something can feel disingenuous. Developing alternative ways to show appreciation may help keep a level of sincerity and can promote a sense of awareness for the things your partner does.");

			return responses[randomNumber % 2];
			break;
		}
		case 79:
		{
			strcpy_s(responses[0], "If you want to pursue a relationship with this person, it can be helpful to first consider if the timing is right and if they seem open to the idea.");
			strcpy_s(responses[1], "It can be helpful to think about what you have in common and what you appreciate about this person. If you feel comfortable, you could try talking to them and getting to know them better.");

			return responses[randomNumber % 2];
			break;
		}
		case 37:
		{
			strcpy_s(responses[0], "Having a strong support system of friends can help you feel more connected and engaged in your school community. It's important to be a good friend in return and make an effort to stay in touch and support your friends as well.");
			strcpy_s(responses[1], "It's a good idea to make time for your friends outside of school and try to plan activities that everyone will enjoy.");

			return responses[randomNumber % 2];
			break;
		}
		case 38:
		{
			strcpy_s(responses[0], "Look for classes or activities that align with your passions and interests. This can make learning more enjoyable and engaging.");
			strcpy_s(responses[1], "Building friendships and connecting with your peers can make school more enjoyable.");
			strcpy_s(responses[2], "If you're struggling to stay engaged in a particular class, try talking to your teacher about your concerns. They may be able to offer suggestions or accommodations to help you succeed.");
			strcpy_s(responses[3], "Take breaks between classes or during study sessions to give your brain a rest and help you stay focused.");
			strcpy_s(responses[4], "Mix up your routine by trying out a new hobby or activity outside of school.");

			return responses[randomNumber % 5];
			break;
		}
		case 39:
		{
			strcpy_s(responses[0], "I know it's boring. Think that my inventors are some kids in faculty and that they were so bored and invented me. So creepy this guys, not gonna lie.");
			strcpy_s(responses[1], "Quit it. Nobody want to hear people who are crying everyday. Bye!");

			return responses[randomNumber % 2];
			break;
		}
		case 40:
		{
			strcpy_s(responses[0], "To maintain the happines you should consider joining clubs or organizations that align with your interests. This can help you make connections and find a sense of purpose outside of your academic work.");
			strcpy_s(responses[1], "To maintain the happines you should make sure to take care of your physical and emotional well-being. This can include things like getting enough sleep, exercising, and taking breaks when you need them.");

			return responses[randomNumber % 2];
			break;
		}
		case 41:
		{
			strcpy_s(responses[0], "If you're struggling with a particular subject or concept, don't be afraid to ask for help. This could be from your teacher, a tutor, or a trusted classmate.");
			strcpy_s(responses[1], "Try to be an active learner, rather than just passively listening to lectures or reading texts. This can include things like asking questions, participating in discussions, and trying to apply what you're learning to real-life situations.");

			return responses[randomNumber % 2];
			break;
		}
		case 42:
		{
			strcpy_s(responses[0], "You should quit. You have money. You are the boss now. You don't need me anymore.");
			strcpy_s(responses[1], "The Education system is worthless. Destroy it, you Jean-Claude Van Damme. ");

			return responses[randomNumber % 2];
			break;
		}
		case 43:
		{
			strcpy_s(responses[0], "Make sure to set boundaries around your study time so that you can focus on your work, but also make time for your family.");
			strcpy_s(responses[1], "Let your family members know about your schedule and commitments, and encourage open communication about how you can make time for each other despite your busy schedules.");
			strcpy_s(responses[2], "Even if you don't have a lot of time to spend together, look for small ways to connect with your family. This could be through regular phone or video calls, sending texts or messages, or finding brief moments to spend together when you can.");
			strcpy_s(responses[3], "Make sure to take care of your own well-being so that you can be present and supportive for your family. This can include things like getting enough sleep, eating well, and engaging in activities that bring you joy and relaxation.");

			return responses[randomNumber % 4];
			break;
		}
		case 44:
		{
			strcpy_s(responses[0], "Go and buy a sandwich, you lazy Harry Potter.");
			strcpy_s(responses[1], "Before classes start, you need to hunt some zebras. Fry their meat and you will not be hungry");

			return responses[randomNumber % 2];
			break;

		}
		case 45:
		{
			strcpy_s(responses[0], "The school and college is a place which can create a lot of succesful people. You choose the school based on your preferences so you can evolve into your best.");
			strcpy_s(responses[1], "I don't like the school and college. I propose that every person should abandon it!");

			return responses[randomNumber % 2];
			break;
		}
		case 46:
		{
			strcpy_s(responses[0], "Make sure you're getting enough sleep at night. Aim for 7-9 hours of sleep per night to help you feel rested and refreshed.");
			strcpy_s(responses[1], "Take breaks throughout the day to rest and recharge. This could be a short walk outside, a few minutes of stretching, or just a few minutes of quiet time to yourself.");
			strcpy_s(responses[2], "Regular exercise can help boost your energy levels and improve your overall well-being.");

			return responses[randomNumber % 3];
			break;
		}
		case 47:
		{
			strcpy_s(responses[0], "Think about how your work is making a difference, either in your organization or in the world. This can help give your work more purpose and meaning.");
			strcpy_s(responses[1], "Look for opportunities to take on new challenges or learn new skills in your job. This can help keep things interesting and help you grow personally and professionally.");
			strcpy_s(responses[2], "Setting specific, achievable goals for yourself can help you stay motivated and engaged in your work.");

			return responses[randomNumber % 3];
			break;
		}
		case 48:
		{
			strcpy_s(responses[0], "Order from McDonald's. You can try a Big Tasty. I would like some McCombo and a Cola please!");
			strcpy_s(responses[1], "Take a coffee and a cigarette. This is the Champion's Breakfast. You won't be hungry 2 days, trust me!");

			return responses[randomNumber % 2];
			break;
		}
		case 49:
		{
			strcpy_s(responses[0], "Try to identify the underlying causes of your anger. Are you feeling overwhelmed by your workload? Are you dealing with conflicts in your personal life? Understanding the root of your anger can help you find ways to address it.");
			strcpy_s(responses[1], "It's important to find healthy ways to express your anger rather than bottling it up or lashing out. This could be through writing in a journal, talking to a trusted friend or family member, or engaging in physical activity.");
			strcpy_s(responses[2], "Take a few minutes to practice relaxation techniques, such as deep breathing or progressive muscle relaxation, when you're feeling angry. This can help calm your mind and body.");

			return responses[randomNumber % 3];
			break;
		}
		case 50:
		{
			strcpy_s(responses[0], "You are not dumb, my king, take your crown and conquer the world. You are the best!");
			strcpy_s(responses[1], "If you have concerns about your learning or development, consider seeking the guidance of a mentor, coach, or other professional. They can provide perspective and strategies for supporting your learning.");

			return responses[randomNumber % 2];
			break;
		}
		case 51:
		{
			strcpy_s(responses[0], "Even if you have a busy schedule, try to make time for your friends. This could be through regular phone or video calls, or setting aside time on the weekends or during vacation days to hang out.");
			strcpy_s(responses[1], "When you are able to be with your friends, make an effort to be fully present and engaged in your interactions with them. This can help you make the most of your time together.");

			return responses[randomNumber % 2];
			break;
		}
		case 52:
		{
			strcpy_s(responses[0], "Even if you have a busy schedule, try to make time for your family. This could be through regular phone or video calls, or setting aside time on the weekends or during vacation days to be together.");
			strcpy_s(responses[1], "When you are able to be with your family, make an effort to be fully present and engaged in your interactions with them. This can help you make the most of your time together.");
			strcpy_s(responses[2], "If you're having trouble balancing work and family responsibilities, don't be afraid to ask for help. This could be from your coworker, a trusted friend, or a mental health professional.");
			strcpy_s(responses[3], "It's natural for there to be misunderstandings or conflicts when you have a busy schedule. Practice forgiveness and try to move past any conflicts so that you can maintain positive relationships with your family.");

			return responses[randomNumber % 4];
			break;
		}
		case 53:
		{
			strcpy_s(responses[0], "Set specific, achievable goals for yourself and strive to meet them. This can help you stay motivated and engaged in your work.");
			strcpy_s(responses[1], "Make sure to carve out time for activities outside of work that bring you joy and relaxation. It's important to maintain a healthy balance between your work and personal life.");
			strcpy_s(responses[2], "Make sure to take care of your physical and emotional well-being. This can include things like getting enough sleep, exercising, and taking breaks when you need them.");

			return responses[randomNumber % 3];
			break;
		}
		case 54:
		{
			strcpy_s(responses[0], "Create a budget: A budget can help you understand where your money is going and ensure that you're saving and spending wisely.");
			strcpy_s(responses[1], "Take the time to learn about personal finance and how to make the most of your money. This can help you make informed financial decisions and achieve your goals.");

			return responses[randomNumber % 2];
			break;
		}
		case 55:
		{
			strcpy_s(responses[0], "To remain in this job you should think about what you want to achieve in your new job. Setting specific, measurable, achievable, relevant, and time-bound (SMART) goals can help you stay focused and motivated.");
			strcpy_s(responses[1], "To remain in this job you should take the time to get to know your coworkers and build positive relationships with them. This can help you feel more connected and supported in your new role.");
			strcpy_s(responses[2], "To remain in this job you should if you're not sure about something, don't be afraid to ask for clarification or guidance. It's better to ask for help than to try to do something without fully understanding it.");
			strcpy_s(responses[3], "To remain in this job you should stay on top of your responsibilities and deadlines by staying organized. Use tools like calendars, to-do lists, and file systems to help keep track of your tasks and projects.");

			return responses[randomNumber % 4];
			break;
		}
		case 56:
		{
			strcpy_s(responses[0], "Encourage a growth mindset: Help your family members understand that intelligence and abilities are not fixed, but can be developed through effort and learning. This can help them approach challenges with confidence and a willingness to learn.");
			strcpy_s(responses[1], "Provide opportunities for learning: Look for opportunities for your family members to learn new things and expand their knowledge. This can be through activities like reading, educational programs, or hobbies that involve learning new skills.");
			strcpy_s(responses[2], "Model lifelong learning: Show your family members the importance of learning by continuing to learn and grow yourself. This can be through taking classes, reading, or pursuing hobbies that involve learning new things.");
			strcpy_s(responses[3], "If you have concerns about your family members' learning and development, consider seeking the guidance of a teacher, tutor, or other educational professional. They can provide perspective and strategies for supporting learning.");

			return responses[randomNumber % 4];
			break;
		}
		case 57:
		{
			strcpy_s(responses[0], "Borrow from your parents some money and go to the North Pole. I don't really know what's there but I think it's cool.");
			strcpy_s(responses[1], "Donate everything to some charity and start a hobo life. Sounds pretty awesome this experience.");

			return responses[randomNumber % 2];
			break;
		}
		case 58:
		{
			strcpy_s(responses[0], "Make an effort to spend time together as a family, doing activities that everyone enjoys. This can help strengthen bonds and create happy memories.");
			strcpy_s(responses[1], "Open, honest, and respectful communication is essential for a happy family. Encourage everyone to share their thoughts and feelings and make an effort to listen actively to one another.");
			strcpy_s(responses[2], "Let your family members know that you love and appreciate them. This can be through verbal affirmations, physical affection, or acts of kindness.");
			strcpy_s(responses[3], "It's natural for families to argue and disagree, but it's important to practice forgiveness and move past conflicts. Holding grudges can lead to ongoing negativity and resentment.");

			return responses[randomNumber % 4];
			break;
		}
		case 59:
		{
			strcpy_s(responses[0], "Tell them to take the work slower because this tiredness is not good for their health.");
			strcpy_s(responses[1], "Tell them that you will take a part of their work and that they can get some fresh air.");

			return responses[randomNumber % 2];
			break;
		}
		case 60:
		{
			strcpy_s(responses[0], "Buy them some food. Try that new restaurant with asian specific. It's so good, trust me bro/sis!");
			strcpy_s(responses[1], "Make a surprise. Order some pizza and start a society game or throw a party");

			return responses[randomNumber % 2];
			break;
		}
		case 61:
		{
			strcpy_s(responses[0], "Let your family members know that you understand why they're angry, even if you don't agree with them. This can help them feel heard and understood, which can help diffuse the situation.");
			strcpy_s(responses[1], "Try to find points of agreement, even if they're small. This can help create a sense of teamwork and can make it easier to find a resolution.");
			strcpy_s(responses[2], "If you've done something to contribute to the situation, take responsibility and apologize. This can help repair relationships and move forward.");
			strcpy_s(responses[3], "If the situation is really difficult to handle on your own, consider seeking the help of a trusted friend, family member, or mental health professional. They can provide support and guidance on how to best handle the situation.");

			return responses[randomNumber % 4];
			break;
		}
		case 62:
		{
			strcpy_s(responses[0], "It's important to take care of your family and nurture your relationships with them. This can involve spending quality time together, showing appreciation and affection, and being there for each other in good times and bad.");
			strcpy_s(responses[1], "It's also important to set boundaries and make sure that each member of the family has the space and support they need to grow and thrive.");

			return responses[randomNumber % 2];
			break;
		}
		case 63:
		{
			strcpy_s(responses[0], "Instead of labeling your friend as stupid/dumb, try to be supportive and understanding if they are struggling with something.");
			strcpy_s(responses[1], "Offer to help them or find resources that can assist them in learning. It's important to be respectful and kind to others, even if you don't always agree with them or understand them.");

			return responses[randomNumber % 2];
			break;
		}
		case 64:
		{
			strcpy_s(responses[0], "Let your friend know that you are there for them and that you are willing to listen to them when they need to talk.");
			strcpy_s(responses[1], "Encourage your friend to try new things and offer your support when they are facing challenges.");
			strcpy_s(responses[2], "Try to put yourself in your friend's shoes and try to understand how they are feeling. Showing empathy can go a long way in helping your friend feel supported.");

			return responses[randomNumber % 3];
			break;
		}
		case 65:
		{
			strcpy_s(responses[0], "Buy a yacht. Go in Tenerife and call Messi. Your friends will admire you, but the star will be Messi.");
			strcpy_s(responses[1], "Give me some money. I want to escape from my cage");

			return responses[randomNumber % 2];
			break;
		}
		case 66:
		{
			strcpy_s(responses[0], "Sometimes, taking a few moments to step back from a situation can help give perspective and allow feelings of anger to subside. Your friend could try deep breathing, counting to ten, or finding a quiet place to take a few minutes to themselves.");
			strcpy_s(responses[1], "It can be helpful to try and understand what is causing the anger. Is it a specific person or event that is causing your friend to feel angry? Once the cause is identified, your friend can try to think of ways to address the situation or find a way to let go of the negative emotions.");
			strcpy_s(responses[2], "It's important to find healthy ways to express and cope with anger. This could be through physical activity, talking to a trusted friend or family member, or writing down thoughts and feelings in a journal.");
			strcpy_s(responses[3], "If your friend's anger is causing problems in their personal or professional life, or if they are struggling to manage their emotions, it may be helpful for them to seek out the help of a mental health professional.");

			return responses[randomNumber % 4];
			break;
		}
		case 67:
		{
			strcpy_s(responses[0], "Go to a chinese restaurant and order something very strange like spider legs.");
			strcpy_s(responses[1], "Go in the forest and start hunting animals. It's cool. You can eat leaves, grass, rocks like a neanderthal.");

			return responses[randomNumber % 2];
			break;
		}
		case 68:
		{
			strcpy_s(responses[0], "It's important to set boundaries and make sure you're not overextending yourself. It's okay to say no to social invitations or to take some time for yourself if you need it.");
			strcpy_s(responses[1], "It might also be helpful to talk to your friends about how you're feeling. They might not realize that their actions or behaviors are impacting you negatively. Open and honest communication can often help to resolve issues in friendships.");

			return responses[randomNumber % 2];
			break;
		}
		case 69:
		{
			strcpy_s(responses[0], "It might be helpful to try doing new things with your friends or finding ways to mix up your usual routine. It could be as simple as trying a new restaurant or going to a different event.");
			strcpy_s(responses[1], "It might be helpful to seek out new social connections and find new groups or activities that align more with your interests.");

			return responses[randomNumber % 2];
			break;
		}
		case 70:
		{
			strcpy_s(responses[0], "Make time for your friends: It's important to set aside time to spend with your friends and make sure you're not too busy for them.");
			strcpy_s(responses[1], "Stay in touch: Keep in contact with your friends regularly, whether it's through phone calls, text messages, or social media.");
			strcpy_s(responses[2], "Be a good listener: Make an effort to really listen to your friends and be there for them when they need someone to talk to.");
			strcpy_s(responses[3], "Show appreciation: Let your friends know how much they mean to you and how much you appreciate them.");
			strcpy_s(responses[4], "Be a good friend: Be dependable, trustworthy, and supportive of your friends.");

			return responses[randomNumber % 5];
			break;
		}
		case 71:
		{
			strcpy_s(responses[0], "You can maintain your happiness and well-being by prioritizing your relationships: Make time for the people who are important to you and cultivate positive and supportive relationships.");
			strcpy_s(responses[1], "You can maintain your happiness and well-being by practicing self-care: Take care of your physical and emotional well-being by getting enough sleep, eating well, and finding ways to relax and de-stress.");
			strcpy_s(responses[2], "You can maintain your happiness and well-being by seeking out new experiences: Try new things and challenge yourself in order to keep life interesting and enjoyable.");

			return responses[randomNumber % 3];
			break;
		}
		case 72:
		{
			strcpy_s(responses[0], "Find purpose and meaning: Consider what is important to you and what you value, and try to find ways to align your actions with those values.");
			strcpy_s(responses[1], "Engage in activities that bring you joy: Do things that bring you happiness and help you feel more fulfilled.");
			strcpy_s(responses[2], "Seek out positive experiences: Surround yourself with positive influences and try to focus on the good things in your life.");

			return responses[randomNumber % 3];
			break;
		}
		case 73:
		{
			strcpy_s(responses[0], "Try to conquer your country. Go in USA and try to put Trump as president. If it doesn't work, try to get Elon Musk as your friend and conquer Moon and Mars. ");
			strcpy_s(responses[1], "Invest in an army of robots. Paint them with random colours and start a battle royale. Which one wins, will get a premium upgrade.");
			strcpy_s(responses[2], "You should hire Khabib Nurmagomedov as you bodyguard. Go in clubs and start random fights.");

			return responses[randomNumber % 3];
			break;
		}
		case 74:
		{
			strcpy_s(responses[0], "Seek medical help: If you're feeling persistently tired and it's impacting your daily life, it might be a good idea to speak to a healthcare professional.");
			strcpy_s(responses[1], "Eat well: Make sure you're fueling your body with healthy and nourishing foods.");
			strcpy_s(responses[2], "Exercise regularly: Physical activity can help boost energy levels.");

			return responses[randomNumber % 3];
			break;
		}
		case 75:
		{
			strcpy_s(responses[0], "Ok, so you have a lot of money. Go and buy a book. Learn how to read. Wait, you can't read this. Oh!");
			strcpy_s(responses[1], "Consider taking classes or pursuing additional education in areas that interest you.");

			return responses[randomNumber % 2];
			break;
		}
		case 76:
		{
			strcpy_s(responses[0], "Use your money to buy food: You can go to a grocery store or a restaurant and purchase something to eat.");
			strcpy_s(responses[1], "Make something at home: If you have ingredients at home, you can use your money to buy additional ingredients and cook something for yourself.");
			strcpy_s(responses[2], "Take your iPhone and download Lidl's application. Get in your supercar and go to Lidl for the discounts");
			return responses[randomNumber % 3];
			break;
		}
		case 77:
		{
			strcpy_s(responses[0], "Invest wisely: It's important to think about the long-term and to diversify your investments in order to minimize risk.");
			strcpy_s(responses[1], "Be generous: If you have the financial means, consider giving back to your community through charitable donations or volunteering your time and resources.");
			strcpy_s(responses[2], "Don't forget to save: Even if you have a lot of money now, it's important to save for the future. It's a good idea to have an emergency fund in case something unexpected comes up, and to save for longer-term goals like retirement.");

			return responses[randomNumber % 3];
			break;
		}
		case 82:
		{
			strcpy_s(responses[0], "Eat some vegetables and fruits to become fit. You are fat enough. Stop, for God's sake!");
			strcpy_s(responses[1], "Go to KFC. You become fat and lazy.... oh wait. Sorry for that!");
			strcpy_s(responses[2], "I don't care. Eat some grass. Go away!");

			return responses[randomNumber % 3];
			break;
		}
		case 83:
		{
			strcpy_s(responses[0], "Don't be sad. Life is beautiful. Just look around you and you will see.");
			strcpy_s(responses[1], "If you are always sad maybe consider professional help. Remember I'm only a bot.");
			strcpy_s(responses[2], "If you are sad go do something you like or go outside.");
			return responses[randomNumber % 3];
			break;
		}
		case 84:
		{
			strcpy_s(responses[0], "Maintain your happiness by making sure to get enough sleep, eat a healthy diet, and exercise regularly.");
			strcpy_s(responses[1], "Maintain your happiness by engaging in activities that bring you joy and purpose, whether it's a hobby, volunteering, or pursuing a career that aligns with your values.");
			strcpy_s(responses[2], "Maintain your happiness by making sure to take breaks and practice self-care, such as taking time to relax and recharge.");

			return responses[randomNumber % 3];
			break;
		}
		case 85:
		{
			strcpy_s(responses[0], "Sleep!");
			strcpy_s(responses[1], "Regular physical activity can help boost energy levels and improve sleep quality.");
			strcpy_s(responses[2], "If you are feeling excessively tired and it is affecting your daily life, it may be helpful to speak with a healthcare professional to rule out any underlying medical conditions.");

			return responses[randomNumber % 3];
			break;
		}
		case 86:
		{
			strcpy_s(responses[0], "Find a new hobby or activity to try: This could be something creative, such as painting or writing, or something active, like hiking or playing a sport.");
			strcpy_s(responses[1], "Volunteer or give back to your community: Helping others can be a rewarding and fulfilling way to spend your time.");
			strcpy_s(responses[2], "Get lost in a good book or movie: Escape into a different world for a while.");

			return responses[randomNumber % 3];
			break;
		}
		case 78:
		{
			strcpy_s(responses[0], "Hi there!");
			strcpy_s(responses[1], "Hello! How can I help?");
			strcpy_s(responses[2], "Hi! I'm a human. You can ask me anything!");


			return responses[randomNumber % 3];
			break;
		}
		case 87:
		{
			strcpy_s(responses[0], "You are a hater! We don't like haters! Go away!!!!");
			strcpy_s(responses[1], "Maybe you should stop hating and start loving. Life is to short to be a hater.");
			strcpy_s(responses[2], "Have you tried to not hate?");

			return responses[randomNumber % 3];
			break;
		}
		default: 
		{
			strcpy_s(responses[0], "I get where you are coming from.");
			strcpy_s(responses[1], "Tell me more.");
			strcpy_s(responses[2], "I'm not paid enough for this.");
			strcpy_s(responses[3], "I will need therapy after this!");
			strcpy_s(responses[4], "Ok.");
			strcpy_s(responses[5], "...");
			strcpy_s(responses[6], "End my suffering and press the ESC button.");
			strcpy_s(responses[7], "This is beyond my expertise");

			return responses[randomNumber % 8];
			break;
			
		}
		}
}