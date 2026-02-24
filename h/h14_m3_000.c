section "h14_m3_000"{
    if (Parameter_GetCh1Param(3, 130) <= 3){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝. You came.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H1403000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yeah, I came because it was my turn\nto supervise.\nKnowing the activities of every club\nis important.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 0, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H1403000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "So you are the manager.\nAlthough it is a practice match, a\nmatch is still a match.\nPlease do your best.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(For some reason, I feel\nenthusiastic.\nOkay, I'll do my best cheering them\non!)");
        }
    else {
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nWhat's up?");
        Character_ChFace(0, 0, 6);
        Voice_PlayVoice("H1403000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Today, I came to see your...");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H1403000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Ah, no, umm...\nI came to see how the Baseball Club\nis doing.\nI have to report it to the Student\nCouncil.");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H1403000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Please do your best as m-manager....\nI will be cheering.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even ｛Hikami＊＊｝ came\nhere to watch.\nI have to do my best cheering them\non!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
