section "b03_m1_100"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
    Character_ChFace(1, 2, 1);
    Character_ChFace(1, 3, 3);
    Background_Bg_GS2("BG_FP500_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301100_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Let's go.");
    Message_ResumeSkinship();
    Voice_PlayVoice("B0301100_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "If you don't keep up with me, I'm\ngoing to leave you behind.\nJust letting you know.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M1", 100);
    }
