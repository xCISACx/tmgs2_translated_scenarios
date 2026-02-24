section "b07_m6_001"{
    int var0;
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    if (var0 == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nBy the way, ｛Amachi＊＊｝.");
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0706000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "What is it?");
            }
        Message_Sele_Kitaku_Kaiwa();
        int var1 = Parameter_Kitaku_Kaiwa(0);
        switch (var1){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "What kind of TV shows do you usually\nwatch, ｛Amachi＊＊｝?");
                Voice_PlayVoice("B0706000_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well...\nVariety shows and music shows.\nI also watch dramas.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You don't watch the news and stuff?");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0706000_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Not really...\nDo you watch the news, Senpai?\nAs expected.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(That's the kind of conversation we\nhad.)");
                }
            Parameter_InCh1Param(6, 530, 35);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you have any favorite foods?");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sweet food.\nI accidentally overeat sweet food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, is that so?\nDo you have anything that is your\nabsolute favorite?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0706000_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Choosing which is my absolute\nfavorite is difficult...\nMaybe cakes.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0706000_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "When I was in junior school, there\nhad been a time where I cried,\nsaying that I wanted to be the son\nof a cake store owner.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Even now, I still think about it a\nlittle.\nI want to move a little closer to\nthe stores.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So he really likes cakes.)");
                }
            Parameter_InCh1Param(6, 531, 36);
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "What kind of sports do you like,\n｛Amachi＊＊｝?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm good at skiing and ice skating.\nI'm quite confident in my skating\nabilities.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Also, I'm good at swimming.\nNow that I think about it, I often\ngo to the pool.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You don't play any ball games?\nLike baseball or soccer...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I like sports that you can do by\nyourself.\nI kind of dislike sports where you\nhave to group with others.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(That's the kind of conversation we\nhad.)");
                }
            Parameter_InCh1Param(6, 532, 37);
            break ;
            case 3:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "What kind of music do you usually\nlisten to?");
                Voice_PlayVoice("B0706000_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I listen to pretty much anything.\nAs expected, I don't listen to\nclassical music, though.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see... What about singing?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I like singing.\nDoesn't it feel good when you're\nsinging in a bath?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(That's the kind of conversation we\nhad.)");
                }
            Parameter_InCh1Param(6, 533, 38);
            break ;
            case 4:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you have any hobbies,\n｛Amachi＊＊｝?");
                Voice_PlayVoice("B0706000_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, nothing in particular...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Nothing at all?\nLike reading, playing sport, or\nplaying games?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I like games.\nI get really into it when I compete.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Voice_PlayVoice("B0706000_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I get so into it that before I know\nit, I've won.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Saying that he always wins means\nhe's quite good at games, right?)");
                }
            Parameter_InCh1Param(6, 529, 34);
            break ;
            case 5:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "What kind of student were you in\nyour middle school period?");
                Voice_PlayVoice("B0706000_F03300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "No different than how I am now.\nMy stature hasn't even changed that\nmuch.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F03400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What should I do in order to grow\ntaller...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He's worried.)");
                }
            Parameter_InCh1Param(6, 534, 39);
            break ;
            case 6:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you have a dream for the future\nor something you want to be,\n｛Amachi＊＊｝?");
                Voice_PlayVoice("B0706000_F04000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Not right now.\nThat's why when I see people with an\nobjective, I think they're amazing.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F04100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It would be nice if I could discover\nwhat I want to do in these three\nyears at high school.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(That's the kind of conversation we\nhad.)");
                }
            Parameter_InCh1Param(6, 528, 33);
            break ;
            case 7:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "What type of girl do you like,\n｛Amachi＊＊｝?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F04600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A person like you, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What? R-Really?");
                Voice_PlayVoice("B0706000_F04700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes. A kind...\nand dependable, older person.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F04800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That's why I unexpectedly depend on\nSenpai...\nHahaha.");
                }
            Parameter_InCh1Param(6, 535, 40);
            break ;
            case 8:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_Who(0);
                Message_MsgDisp("主人公", "What do you think in regards to\nlove, ｛Amachi＊＊｝?");
                Voice_PlayVoice("B0706000_F05500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Love, was it? What a serious topic.\nI don't know much, though...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0706000_F05600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I think it would be nice if I could\ncome across an amazing person and\nshare an amazing kind of love with\nthem.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F05700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do you think I could do something\nlike that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I think so.\nBecause you do level-headed things,\n｛Amachi＊＊｝.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F05800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Level-headed, huh? Haha.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝?)");
                }
            Parameter_InCh1Param(6, 536, 41);
            break ;
            case 9:
            if (Parameter_GetPl1Param(312) != 6){
                Message_Who(0);
                Message_MsgDisp("主人公", "What kind of kiss is your ideal\nkiss, ｛Amachi＊＊｝?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0706000_F06400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai... what is the matter?\nAre you worried about something?");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's not it!\nI just wanted to try asking.");
                Voice_PlayVoice("B0706000_F06500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm... Well, it's fine.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0706000_F06600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "My ideal kiss would be like in a\nmovie, where things get really\nheated up and then...");
                Voice_PlayVoice("B0706000_F06700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You would see their two shadows\nholding each other!\nSomething like that...");
                Message_Who(0);
                Message_MsgDisp("主人公", "One with a romantic feeling?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0706000_F06800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nIn particular, the first kiss is\nimportant!");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0706000_F06900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nWhy did I have to emphasize that?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0706000_F07000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I can't believe you, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Huh, why～?)");
                Parameter_InCh1Param(6, 537, 42);
                }
            else if (Parameter_GetPl1Param(312) == 6){
                Message_Who(0);
                Message_MsgDisp("主人公", "What do you think about kisses,\n｛Amachi＊＊｝?");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0706000_F07100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "H...Huh?\nWhy are you asking all of a sudden!?\nNow after such a long time, you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "After such a long time?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0706000_F07200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI was just thinking \"As if\", Senpai.\nThat thing that happened then...\nLike maybe you didn't see it as a\nkiss...");
                Message_Who(0);
                Message_MsgDisp("主人公", "\"That thing that happened then\"...?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0706000_F07300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... As I thought...\nI thought it was amazing too,\nbecause it was like a drama.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0706000_F07400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, yes.\nThat was just an accident.");
                Voice_PlayVoice("B0706000_F07500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's fine if you've forgotten.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Why is ｛Amachi＊＊｝\nangry...?)");
                Parameter_InCh1Param(6, 537, 42);
                }
            break ;
            }
        }
    else {
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("B0706000_F07600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "*Sigh*...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is something wrong?");
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0706000_F07700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "The day is already ending.\nI'm worried.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well, yeah.\nWe have school tomorrow...");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0706000_F07800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "It's not that!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then what is it?");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0706000_F07900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I wanted to have a serious talk with\nSenpai today...\nI just don't know what to think...");
        Message_Who(0);
        Message_MsgDisp("主人公", "A serious talk?\nIf that's the case, let's hear it.\nNow.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("B0706000_F08000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "What?! ... Well, umm...");
        Voice_PlayVoice("B0706000_F08100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "A-At the time, I was still thinking\nabout the situation!\nI need to prepare my mind, too!");
        Message_Who(0);
        Message_MsgDisp("主人公", "You need to prepare?");
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0706000_F08200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ugh.........");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0706000_F08300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah～!");
        Voice_PlayVoice("B0706000_F08400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I won't say it today!\nThe conversation is over!");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0706000_F08500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Another time～, Senpai!\nJust continue pretending like you\ndon't know anything!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh, terrible...)");
        Parameter_InCh1Param(6, 538, 43);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
