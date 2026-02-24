section "w10_g2_000"{
    Character_Chara_GS2(11, "G2_04F", 0);
    Background_Bg_GS2("BG_TR501_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("W1011000_K00000", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "It seems like it's almost time to\nclose....\nThat was fast.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
