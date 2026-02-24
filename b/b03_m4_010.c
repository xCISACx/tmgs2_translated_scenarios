section "b03_m4_010"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF100_?_0", 1, #1, 0);
    Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304010_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Now... Where ya wanna go?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Well...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Message_ResumeSkinship();
    Voice_PlayVoice("B0304010_D00010", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Okay then, let's go!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M4", 10);
    }
