section "b04_m2_052"{
    if (System_GlobalWork(1, 1) == 0){
        Character_Chara_GS2(2, "M2_D?F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402052_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Awesome...\nThat one just now was the most\nflashy one.");
        Message_MsgSel("The night sky is the fireworks' canvas!", "What is inside the fireworks?", "It's loud.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402052_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I see.\nIt was kinda iffy, but that was a\ngood way of expressing it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402052_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I think that there's a lot of\ngunpowder crammed in there.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402052_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Not as loud as your voice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 1){
        Character_Chara_GS2(2, "M2_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402052_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "If we just look up at the fireworks,\nwe won't watch where we walk...\nBe careful, okay?");
        Message_MsgSel("... I was staggering.", "I can't or I'll miss the fireworks!", "You too, ｛Shiba＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402052_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Why? Are you feeling sick?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402052_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That's true....\nYou can hang on to me if you think\nyou're gonna fall.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402052_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You don't have to worry about me....\nHey, I told you to watch your step.\nThere are stairs here.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (System_GlobalWork(1, 1) == 2){
        Character_Chara_GS2(2, "M2_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF521_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402052_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Looking at the fireworks from high\nabove also wouldn't be without its\nworth...");
        Message_MsgSel("You'd only see half, because of the smoke.", "Well, you're tall, ｛Shiba＊＊｝...", "It'd be different to looking from here.");
        switch (Message_TextSelect()){
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402052_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hmm, ah, right.\nIt'd be like a big screen blocking\nthe way.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402052_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well, you'd need to be as high up as\nthe smoke.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402052_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It has nothing to do with height,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402052_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nHeight has nothing to do with it,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "R-Right...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402052_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Should I piggyback you then?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh!? T-That's...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0402052_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Haha, don't take it seriously.\nIt was a joke.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...\nAh, but if you did, I wonder if I'd\nbe able to see the fireworks better?");
                Character_ChFace(0, 2, 5);
                Voice_PlayVoice("B0402052_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You...\nYou're a real interesting one.");
                Message_Who(0);
                Message_MsgDisp("主人公", "R-Really...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402052_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402052_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I'm interested in that. So...\nshow me.\nAt the Fireworks Festival next year,\ntoo.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
