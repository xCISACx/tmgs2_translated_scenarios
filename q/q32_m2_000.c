section "q32_m2_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_01F", 0);
    Background_Bg_GS2("BG_SCB80_LI_1", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGG_016_000", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "Are you going to get souvenirs,\n｛Shiba＊＊｝?");
    Voice_PlayVoice("Q1002000_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Ah...");
    Message_Who(0);
    Message_MsgDisp("主人公", "Are you going to try looking around?");
    Character_BlinkStart(2, 3, (#1));
    Voice_PlayVoice("Q1002000_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... Yeah.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder if I can find some good\nsouvenirs...)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(2, "NON");
    }
