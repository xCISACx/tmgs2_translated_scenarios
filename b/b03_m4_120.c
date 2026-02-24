section "b03_m4_120"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304120_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Huh, there are quite a few people\nhere.\nLet's go look around at different\nthings.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay.");
    Message_SkinshipSet(0);
    Character_Chara_GS2(4, "NON");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M4", 120);
    }
