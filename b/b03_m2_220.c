section "b03_m2_220"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Character_ChFace(0, 0, 11);
    Background_Bg_GS2("BG_TR400_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0302220_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "It's quite intense looking at it\nfrom up close...");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(2, "NON");
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0302220_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "So, where should we go?");
    Message_MsgSel("Let's look at the display corner.", "I want to climb the castle keep.");
    switch (Message_TextSelect()){
        case 0:
        Message_ResumeSkinship();
        Voice_PlayVoice("B0302220_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Right.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 221);
        break ;
        case 1:
        Message_ResumeSkinship();
        Character_ChFace(1, 0, 9);
        Voice_PlayVoice("B0302220_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Do we have to...?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 222);
        break ;
        }
    }
