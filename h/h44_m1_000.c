section "h44_m1_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetCh1Param(1, 130) <= 3){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nAre you here to cheer on the\nBaseball Club?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("H4401000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. I had a bit of free time...\nso I came to watch.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4401000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right...\nYou're in the Cheerleading Club.\nIt means that you're doing the real\nthing, right?\nDo your best cheering.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
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
            Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nAre you here to cheer on the\nBaseball Club?");
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H4401000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I came here to see you do your\nbest...\nDo I have to cheer for the Baseball\nClub?");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H4401000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Everyone is cheering them on....\nSo I'll cheer you on.\nSupport the players, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(1, 130) <= 3){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nAre you here to cheer for the Track\nand Field Club?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("H4401000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. I had a bit of free time...\nso I came to watch.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4401000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right...\nYou're in the Cheerleading Club.\nIt means that you're doing the real\nthing, right?\nDo your best cheering.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
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
            Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nAre you here to cheer for the Track\nand Field Club?");
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H4401000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I came here to see you do your\nbest...\nDo I have to cheer for them?");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H4401000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Everyone is cheering them on....\nSo I'll cheer you on.\nSupport the players, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
