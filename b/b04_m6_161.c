section "b04_m6_161"{
    int var0 = Date_GetDateOption(2, 45);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406161_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Which one are we going to play?");
            }
        else {
            Voice_PlayVoice("B0406161_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, which one are we going to play?");
            }
        Message_MsgSel("Let's check our compatibility!", "There's a stuffed toy that I want.", "As expected, fighting games!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406161_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Fortune telling...?\nI've been waiting a long time to\ncome to the game center...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406161_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nThere's no point in coming to a game\ncenter for fortune telling, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406161_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I understand. The claw game, right?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406161_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see, a stuffed doll. Yeah, sure.\nLet's try that.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406161_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds great!\nLet's try that at once....\nI won't lose!!");
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
                Voice_PlayVoice("B0406161_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Nice, I'm up for it!!\nI'll tell you this, I'm real good at\nthem.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406161_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "If it's for that stuffed toy then I\nmight try to get it...");
            }
        else {
            Voice_PlayVoice("B0406161_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You want that stuffed doll?\nWell, I think I can get it...");
            }
        Message_MsgSel("Yeah, I want it!", "I prefer the one beside it.", "Get what you can.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406161_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I think I can easily get that.\nLet me try.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406161_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay, leave it to me.\nI can easily get it....\nThen, we can go to the next one.");
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
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406161_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You mean that one... that's tough.\nI'm on it!");
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
                Voice_PlayVoice("B0406161_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see, that one...\nI wonder if I can aim for it.\nI'm sure I can get it.\nIt's difficult, though...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406161_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai...\nDo you really want that stuffed\ndoll?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406161_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nIf you don't want it, let's play\nanother game.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406161_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Knock out, KO! 3 wins!");
            }
        else {
            Voice_PlayVoice("B0406161_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Knock out, KO! 3 wins!");
            }
        Message_MsgSel("You're tough, ｛Amachi＊＊｝.", "It has to be 10 wins!", "This is endless.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406161_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, because I've done quite a bit\non this game.\nPlease leave it to me!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406161_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well that's because it's cutting out\nof my lunch money!\nI won't easily get defeated!!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406161_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I'll do my best!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406161_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's only a matter of time.\nHold on for a sec!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406161_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ummm... It's time to give up...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406161_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Sorry, I'll end this.\nJust hold on a sec.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406161_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Time's up!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, you're giving up?\nBut the game isn't over yet.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0406161_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah. I'm giving up.");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406161_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI didn't come here today for the\ngames, I came here to play with\nSenpai.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406161_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So, it's fine....\nSorry, I got carried away.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406161_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay, then! So, what's next?");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406161_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's better if both of us can play a\ngame.\nLet's go!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
