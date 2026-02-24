section "b03_m8_050"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0308050_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I hope the wind won't be that\nstrong.\nAs for me, I'd be interested even if\nit were strong.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M8", 51);
    }
