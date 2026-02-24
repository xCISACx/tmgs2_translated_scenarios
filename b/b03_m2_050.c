section "b03_m2_050"{
    Character_Chara_GS2(2, "M2_D?F", 0, 1, 1);
    Character_ChFace(1, 0, 9);
    Background_Bg_GS2("BG_WF500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0302050_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "*Sigh* ... Should we go in?");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M2", 51);
    }
