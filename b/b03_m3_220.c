section "b03_m3_220"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR400_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0303220_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "They have left it as it is....\nNow then, let us go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(3, "NON");
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0303220_C00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "There are two routes.\nWhere do you want to go?");
    Message_MsgSel("Let's go look at the display corner.", "Let's climb the castle keep.");
    switch (Message_TextSelect()){
        case 0:
        Message_ResumeSkinship();
        Voice_PlayVoice("B0303220_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Okay.\nI look forward to seeing what kind\nof things are there.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 221);
        break ;
        case 1:
        Character_ChFace(1, 3, 3);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0303220_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Right!\nAs expected, we cannot miss going to\nthe keep.\nLet us go right now.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 222);
        break ;
        }
    }
