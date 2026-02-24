section "f99_m5_000"{
    Character_ChFace(0, 2, 4);
    Character_ChFace(0, 3, 1);
    Character_Chara_GS2(5, "M5_01F", 0);
    Voice_PlayVoice("FD_05_190_00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Huh? What's up?\nYou don't like happy.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Chris＊＊｝...\nI stuffed up...");
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("FD_05_190_00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Oh no...\nBut my mom says that stuffing up is\na success, so think positively,\nokay?");
    }
