section "f99_m1_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(1, "M1_01F", 0);
    Voice_PlayVoice("", 1, "FD_01_190_00000");
    Message_Who(1);
    Message_MsgDisp("Saeki", "｛主人公｝.\nYou don't have the \"I'm in love\"\nface.\nWhat's wrong?");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Saeki＊＊｝.\nHe might hate me...");
    Character_ChFace(0, 0, 6);
    Voice_PlayVoice("FD_01_190_00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Did something happen?");
    Voice_PlayVoice("FD_01_190_00200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "He should have his own reasons.\nHe might have been in a bad mood.");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("FD_01_190_00300", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Try asking him out again, as if\nnothing happened.\nIt's your special skill. Okay?");
    }
