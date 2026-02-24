section "b04_m4_091"{
    int var0 = Date_GetDateOption(2, 25);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0404091_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This display only has stone\nequipment?");
        Message_MsgSel("It somehow feels really historic...", "The designs of the past are interesting!", "This clay figure looks like you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404091_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah... Well.\nI'm not very amused by it though.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404091_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Really?\nSince I'm not amused, carry on.\nNext.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404091_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... What the?\nHeeey, you're saying you think this\nmonkey resembles a guy like me!?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0404091_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I want to leave a name in history\nlike this～.");
        Message_MsgSel("I'd support something like that, ｛Hariya＊＊｝.", "Once you're famous, I'd like an autograph.", "Hariya Kounoshin is here!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404091_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nAre you saying I'll never be big on\nmy own?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404091_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I think it'll be too late once I'm\nfamous.\nNow's your chance, I'll sign as many\nas I can!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404091_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "............ Ridiculing my name...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0404091_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Amazing!\nDon't you think this armor and\nstuff's cool?\nI'd like to wear it once.");
        Message_MsgSel("You'd stand out if you wear that at a live.", "Anything suits you, ｛Hariya＊＊｝.", "Shall I give it to you as a gift next time?");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404091_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nIt sure is an attention grabber, in\nan absolutely different way.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404091_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nTo wear it during a live, I wouldn't\neven last through the first song...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh... Maybe you're right...");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404091_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Just between us.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404091_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'm actually hooked on historical\nplays.\nThat's why, I want to wear a set\nwhen I'm not doing a live.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see!\nSo next time, we'll go to a place\nwhere you could try and wear it.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404091_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah! For sure? It's a deal!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝'s into\nhistorical plays...\nSeems surprising, yet so\nunlikely...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404091_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, yeah!\nThere are no clothes 　that won't\nsuit me!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404091_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No, I don't need it.\nEven if I received a set of\nsomething like that, I don't have\nspace for it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
