section "b03_m4_250"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_BH140_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304250_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Yo.\nI somehow feel refreshed and not\nuneasy.\nLet's enter!");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah. Let's go in.");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M4", 250);
    }
