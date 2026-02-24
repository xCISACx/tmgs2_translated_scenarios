section "o08_m2_000"{
    Screen_WipeIn(2);
    if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 546) == 1)){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Shiba＊＊｝.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0802000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You.");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Shiba＊＊｝.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("", 2, "O0802000_B00100");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝....\nDon't fall.");
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Shiba＊＊｝.)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0802000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nYou have no reason to be nervous.");
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0802000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nTry to be careful and not step on my\nfeet.");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 546) == 0)){
        if (Parameter_GetCh1Param(2, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Shiba＊＊｝.)");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("O0802000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Don't get so close.");
            Parameter_InCh1Param(2, 546, 51);
            }
        else if (Parameter_GetCh1Param(2, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Shiba＊＊｝.)");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(2, "M2_08F", 0);
            Voice_PlayVoice("O0802000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("O0802000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...... I give up......");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("O0802000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's getting hard to breathe...");
            Parameter_InCh1Param(2, 546, 51);
            }
        }
    Parameter_AddCh1Param(2, 60, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(2, "NON");
    Parameter_AddCh1Param(2, 86, 1);
    }
