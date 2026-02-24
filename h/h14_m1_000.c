section "h14_m1_000"{
    if (Parameter_GetCh1Param(1, 130) <= 3){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝. You came.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("H1401000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. I had a bit of free time...\nso I came to watch.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 0, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H1401000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Right, you're... the manager, right?\nSupport the players, okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best cheering\nthem on!)");
        }
    else {
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 0);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nWhat's up?");
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H1401000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You're asking me what's up...\nI came here to watch you do your\nbest.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H1401000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You're... the manager, right?\nSupport the players, okay? ...\nI'll be your support.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even ｛Saeki＊＊｝ came\nhere to watch.\nI have to do my best cheering them\non!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
