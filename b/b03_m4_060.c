section "b03_m4_060"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_FP200_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304060_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "What cool place do you wanna go to?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Let me see...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_ResumeSkinship();
    Voice_PlayVoice("B0304060_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Awesome! Let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M4", 60);
    }
