section "b03_m7_050"{
    Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
    Character_ChFace(1, 2, 3);
    Character_ChFace(1, 3, 0);
    Background_Bg_GS2("BG_WF500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0307050_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Here's the entrance. Okay, let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M7", 51);
    }
