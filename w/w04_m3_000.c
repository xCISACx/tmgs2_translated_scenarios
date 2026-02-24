section "w04_m3_000"{
    if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 549) == 1)){
        if (Parameter_GetCh1Param(3, 130) >= 0){
            Character_Chara_GS2(3, "M3_??F", 0);
            Voice_PlayVoice("W0403000_C00000", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You came as well,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Voice_PlayVoice("W0403000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see, you are all friends.\nMy best regards for today.");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 549) == 0)){
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(3, "M3_??F", 0);
            Voice_PlayVoice("", 3, "W0403000_C00200");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝. You...\nWhy are you here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Why... I was invited, too.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("W0403000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I-I see, you were, too.\nWell, we all go to school together\nso it is fine.");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("W0403000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "How vast is your circle of friends?\n... My best regards for today.");
            }
        else {
            Character_Chara_GS2(3, "M3_??F", 0);
            Voice_PlayVoice("W0403000_C00000", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You came as well,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Voice_PlayVoice("W0403000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see, you are all friends.\nMy best regards for today.");
            }
        Parameter_InCh1Param(3, 549, 42);
        }
    Character_Chara_GS2(3, "NON");
    }
