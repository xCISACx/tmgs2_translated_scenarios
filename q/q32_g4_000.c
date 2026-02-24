section "q32_g4_000"{
    Character_ChFace(0, 3, 3);
    Character_Chara_GS2(13, "G4_01F", 0);
    Background_Bg_GS2("BG_SCB80_LI_1", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGG_016_000", 127, 40);
    Voice_PlayVoice("Q1013000_M00000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Umm...\nHey, how about getting souvenirs?");
    Message_Who(0);
    Message_MsgDisp("主人公", "We can go buy some.");
    Character_ChFace(0, 2, 3);
    Character_BlinkStart(13, 3, (#1));
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("Q1013000_M00100", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Then we'll separate for a while,\nokay?\nWe'll meet back here later.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay, got it.");
    Character_Chara_GS2(13, "NON");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
