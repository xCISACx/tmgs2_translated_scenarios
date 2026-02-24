section "b04_m4_023"{
    int var0 = Date_GetDateOption(2, 2);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404023_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wow. It's quite a nice view.");
        Message_MsgSel("I want to bungee jump from there!", "It looks like a scene from a movie.", "The bridge is shining beautifully.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404023_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No way, that's scary. I'll pass.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404023_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Just like they said it would be,\nlike the USA!\nI'll sing a song on the bridge...\nYeah, it'll be a masterpiece～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404023_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "But it'd lose to me in terms of how\nmuch of the spotlight it'd get!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404023_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "The ship looks like a toy from afar.");
        Message_MsgSel("｛Hariya＊＊｝ is still a kid.", "I haven't looked at it that way.", "A monster could destroy the bridge!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0404023_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Being a kid is fine.\nIt's okay, since that kind of\nfeeling is important.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404023_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "See?\nWell, people have different ways of\nlooking at it.\nThat's important. Yeah.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404023_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Great idea! Watch out, monster!\nHahaha!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(4, 2, (#1));
        Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404023_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*Sigh*...\nDon't you kinda feel like there are\na lot of excited people here?");
        Message_MsgSel("They feel they're flying high.", "The feeling when you look down from above?", "Love high places, too▼");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404023_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You get more hyped up in a crowd of\npeople?\nI don't understand that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404023_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Seems so...");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404023_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Actually...\nWeren't you being pushed around by\npeople?\nYou were really close.");
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404023_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "When that time comes, I, too, will\ndefinitely say wow...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404023_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Huh!? ... Not that! Forget it!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Are you sure?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404023_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I told you, I'm sure!\nWell, let's go on, next!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404023_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Woah-- That was a surprise.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝......?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404023_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Indeed.\nIt's the same once you stand on\nstage.\nYou feel a lot stronger...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404023_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Is it possible, you're the type who\nlikes high places and the like...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
