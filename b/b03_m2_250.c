section "b03_m2_250"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_BH120_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0302250_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... Don't expect much of my room.\nLet's go in.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay, I'm sorry to intrude on you.");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M2", 250);
    }
