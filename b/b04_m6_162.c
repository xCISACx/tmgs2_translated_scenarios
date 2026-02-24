section "b04_m6_162"{
    int var0 = Date_GetDateOption(2, 46);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406162_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Which one should we play?\nThere are a lot.");
            }
        else {
            Voice_PlayVoice("B0406162_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, which one?");
            }
        Message_MsgSel("I'm excited!", "Alright, leave it to me!", "Let's get lots of candy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I guess so.\nSenpai, you decide which one.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see.\nActually, I don't know much on this\nstuff.\nHey, could you try it for a minute?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406162_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, I'll just observe.\nOh, but please don't get carried\naway, you might forget that I'm\nstill here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406162_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, earn a lot!\nWhile you're at it, I wonder what I\nshould do.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds great! Let's have a go at it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds great!\nOkay, let's try to get lots of it!!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406162_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay! Next one's a soda pop!");
            }
        else {
            Voice_PlayVoice("B0406162_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay! Next one's a soda pop!");
            }
        Message_MsgSel("It's a lot quicker if you buy it normally.", "Hey, try to get that candy next!", "Eating too much gives you a stomach upset.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, I know, but getting it like\nthis is the whole point.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I guess that's true but the thrill\nis whether you can get it or not!\nThat's the idea.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, looks yummy!\nSo, our next target's going to be\nthat one!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, neat!\nSo, our next target's going to be\nthat one!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406162_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI feel like I was just scolded by my\nmom.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406162_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You know, Senpai.\nYou're not my mother...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(6, 3, (#1));
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406162_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Aah, I lost again! ... *Sigh*.\nBlackjack is so difficult...");
            }
        else {
            Voice_PlayVoice("B0406162_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, I lost again!\nBlackjack is so difficult...");
            }
        Message_MsgSel("What a loss, another round!", "The idea is to back out from the match.", "It's written all over your face.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 9);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm through with this.\nIs it okay to switch places?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 9);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ugh～... No, I can't do it!\nSenpai, touch me!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I guess... Let's try other games.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406162_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I guess.\nLet's play other games to change the\nmood.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406162_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Since the enemy's a machine, it has\nnothing to do with faces...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406162_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... The enemy's a machine, you know?\nIt has nothing to do with faces.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406162_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nFaces has nothing to with it, it's\nthe machine that's the enemy.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, I see.\nNow that you said it, I guess so.");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406162_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Huh?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh? What?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0406162_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai, you said that it's written\non my face...\nWere you looking at me this entire\ntime?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406162_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... So, my turn.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh? Turn?");
                Voice_PlayVoice("B0406162_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, because that's just unfair.\nIt's my turn to take a look at\nSenpai!\nI'm watching you now!");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay.");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
