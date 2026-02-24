section "w10_g1_000"{
    Character_Chara_GS2(10, "G1_04F", 0);
    Background_Bg_GS2("BG_TR501_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("W1010000_J00000", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "We should turn around and go home\nsoon.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
