section "o08_m1_000"{
    Screen_WipeIn(2);
    if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 546) == 1)){
        if (Parameter_GetCh1Param(1, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Saeki＊＊｝.)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0801000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Please treat me well.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("O0801000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What... It's you.");
            Character_Chara_GS2(1, "NON");
            }
        else if (Parameter_GetCh1Param(1, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Saeki＊＊｝.)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0801000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It's you.\nTry not to step on my feet, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll be sure to step there!)");
            Character_Chara_GS2(1, "NON");
            }
        else if (Parameter_GetCh1Param(1, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Saeki＊＊｝.)");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0801000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What... It's you....\nHey, give me your hand.");
            Character_Chara_GS2(1, "NON");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 546) == 0)){
        if (Parameter_GetCh1Param(1, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Saeki＊＊｝.)");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0801000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ugh... It's you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(What's with the \"ugh\"?)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("O0801000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Try to be careful? This is weird...\nSo don't bump into me.");
            Character_Chara_GS2(1, "NON");
            Parameter_InCh1Param(1, 546, 51);
            }
        else if (Parameter_GetCh1Param(1, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Saeki＊＊｝.)");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(1, "M1_08F", 0);
            Voice_PlayVoice("O0801000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What... It's you....\nHey, give me your hand.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("O0801000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Try not to bump into me?\nYou know, many things might\nhappen...");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Character_Chara_GS2(1, "NON");
            Parameter_InCh1Param(1, 546, 51);
            }
        }
    Parameter_AddCh1Param(1, 60, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(1, "NON");
    Parameter_AddCh1Param(1, 86, 1);
    }
