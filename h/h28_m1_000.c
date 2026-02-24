section "h28_m1_000"{
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
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nYou came to support us!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H2801000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.\nIsn't it amazing that you came this\nfar?");
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H2801000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Also...\nI wanted to see you trying your best\nfor myself.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H2801000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I don't really know the rules,\nthough...\nAnyway, I... will support you, okay?\n... Do your best.");
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H2801000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I'll... be watching from over there.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, I feel determined.\nI'll do my best with all my might!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
