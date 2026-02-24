section "f99_m7_000"{
    Character_ChFace(0, 2, 0);
    Character_ChFace(0, 3, 3);
    Character_Chara_GS2(7, "M7_01F", 0);
    Voice_PlayVoice("", 7, "FD_07_190_00000");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "｛主人公｝.\nYou mustn't make that face.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝...");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("FD_07_190_00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Many things happen, that is why it\nis love.\nI am jealous. Smile, smile. Okay?");
    Character_Chara_GS2(7, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝...\nThank you very much.)");
    }
