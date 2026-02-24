section "b03_m4_110"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Character_ChFace(1, 0, 9);
    Character_BlinkStart(4, 3, (#1), 2);
    Background_Bg_GS2("BG_FP600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304110_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "*Phew*... Let's go...\nIt's time for a new set of clothes.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, well then, I'll be back.");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M4", 110);
    }
