section "b03_m3_010"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF100_?_0", 1, #1, 0);
    Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0303010_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "There are various stores.\nIs there somewhere you want to go\nto?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Character_ChFace(1, 0, 10);
    Message_ResumeSkinship();
    Voice_PlayVoice("B0303010_C00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Okay, let us go there.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M3", 10);
    }
