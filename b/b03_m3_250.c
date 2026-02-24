section "b03_m3_250"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Character_ChFace(1, 0, 9);
    Character_ChFace(1, 3, 3);
    Character_ChFace(1, 4, 1);
    Background_Bg_GS2("BG_BH130_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0303250_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "I...\nI cannot really offer you much, but\nplease feel at home.\nT-There is nothing to be nervous\nabout!");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay. Sorry to intrude on you.");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M3", 250);
    }
