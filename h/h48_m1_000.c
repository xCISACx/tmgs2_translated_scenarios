section "h48_m1_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetCh1Param(1, 130) >= 4){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nAre you also here to cheer?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4801000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, yeah.\nIsn't it amazing that they came this\nfar?");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4801000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "But...\nthey just happened to be here.\nI wanted to see you trying your best\nfor myself.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H4801000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Everyone is cheering for the\nplayers....\nI'll be cheering for you.\nSupport the players, okay?");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
            }
        }
    else {
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
            Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nAre you also here to cheer?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4801000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, yeah.\nIsn't it amazing that they came this\nfar?");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4801000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "But...\nthey just happened to be here.\nI wanted to see you try your best\nfor myself.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H4801000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Everyone is cheering for the\nathletes....\nI'll be cheering for you.\nSupport the players, okay?");
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
