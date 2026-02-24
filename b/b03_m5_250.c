section "b03_m5_250"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Character_ChFace(0, 0, 10);
    Background_Bg_GS2("BG_BH150_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0305250_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Welcome. Hello.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Hello!");
    Character_ChFace(1, 0, 10);
    Character_BlinkStart(5, 3, (#1), 2);
    Character_ChFace(1, 3, 0);
    Message_ResumeSkinship();
    Message_PauseSkinship();
    Voice_PlayVoice("B0305250_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Chris will show you around～.\nWelcome.\nNow then, please come this way.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Haha, thanks.");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M5", 250);
    }
