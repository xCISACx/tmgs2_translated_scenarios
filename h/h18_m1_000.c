section "h18_m1_000"{
    if (Parameter_GetCh1Param(1, 130) >= 4){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(1, "M1_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝. You came.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H1801000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.\nIsn't it amazing that you came this\nfar?");
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H1801000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Also...\nI wanted to see you trying your best\nfor myself.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H1801000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's a sporting event, right?\nSupport your players well....\nI'll be supporting you.");
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H1801000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I'll... be in the stands.\nDo your best.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
