section "w10_g4_000"{
    Character_Chara_GS2(13, "G4_04F", 0);
    Background_Bg_GS2("BG_TR501_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("W1013000_M00000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "It's getting dark.\nUnfortunately, we'll have to split\nup soon, right?");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
