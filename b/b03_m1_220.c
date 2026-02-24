section "b03_m1_220"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 3);
    Character_ChFace(1, 3, 0);
    Background_Bg_GS2("BG_TR400_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301220_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Eh...\nWhen you look at it up close, it\nlooks grand.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(1, "NON");
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 3);
    Character_ChFace(1, 3, 2);
    Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301220_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "... So, where should we go?");
    Message_MsgSel("Let's look at the display corner.", "I want to go to the castle keep.");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(1, 2, 3);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 1);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0301220_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It seems kind of plain, though.\nLet's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 221);
        break ;
        case 1:
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0301220_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Okay.\nLet's go and look over the world.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 222);
        break ;
        }
    }
