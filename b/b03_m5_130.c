section "b03_m5_130"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Character_BlinkStart(5, 2, (#1), 2);
    Background_Bg_GS2("BG_NE100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0305130_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Is there somewhere you wanna go?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Character_ChFace(1, 0, 3);
    Message_PauseSkinship();
    Voice_PlayVoice("B0305130_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M5", 130);
    if (Parameter_ChkSpEvent("B05", "M5", 2) == 1){
        System_Call_GS2("B05", "M5", 2);
        }
    }
