section "f99_m3_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(3, "M3_01F", 0);
    Voice_PlayVoice("", 3, "FD_03_190_00000");
    Message_Who(3);
    Message_MsgDisp("Hikami", "｛主人公｝.\nWhat is the matter?\nYou look depressed.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hikami＊＊｝, I kind of\nscrewed up...");
    Character_ChFace(0, 0, 6);
    Character_ChFace(0, 4, 0);
    Voice_PlayVoice("FD_03_190_00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "I see...");
    Character_ChFace(0, 2, 0);
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("FD_03_190_00200", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "There is no time to regret things.\nWhat you do have time for is to be\nprepared.\nThose are the words of someone I\nrespect.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah. Thanks, ｛Hikami＊＊｝.");
    }
