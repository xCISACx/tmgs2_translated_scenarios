section "b03_m1_250"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 3);
    Character_BlinkStart(1, 2, (#1), 2);
    Character_ChFace(1, 3, 0);
    Background_Bg_GS2("BG_BH110_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301250_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I like to boast about my room.\nLet's go inside.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay. I'm sorry to intrude on you.");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M1", 250);
    }
