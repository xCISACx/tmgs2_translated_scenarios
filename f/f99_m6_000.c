section "f99_m6_000"{
    Character_ChFace(0, 2, 3);
    Character_ChFace(0, 3, 2);
    Character_Chara_GS2(6, "M6_01F", 0);
    Voice_PlayVoice("FD_06_190_00000", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Senpai. What's the matter?\nYou're making a gloomy face.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝...");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("FD_06_190_00100", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "I don't know what happened, but\ncheer up!\nIt will surely go well next time.");
    }
