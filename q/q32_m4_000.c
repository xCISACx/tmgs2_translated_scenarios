section "q32_m4_000"{
    Character_ChFace(0, 0, 10);
    Character_Chara_GS2(4, "M4_01F", 0);
    Background_Bg_GS2("BG_SCB80_LI_1", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGG_016_000", 127, 40);
    Voice_PlayVoice("Q1004000_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Oookay, I wanna buy something!\nLet's split up for now and meet back\nhere, again.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay.");
    Character_BlinkStart(4, 2, (#1));
    Voice_PlayVoice("Q1004000_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Now, what should I buy～!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder if I'll find a nice\nsouvenir.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(4, "NON");
    }
