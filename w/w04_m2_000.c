section "w04_m2_000"{
    Character_Chara_GS2(2, "M2_??F", 0);
    if ((Parameter_GetPl1Param(312) != 2) || (Parameter_GetCh1Param(2, 549) == 1)){
        if (Parameter_GetCh1Param(2, 130) >= 0){
            Voice_PlayVoice("W0402000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Slept in? You're late.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("W0402000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hey... Let's enjoy today.");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 2) && (Parameter_GetCh1Param(2, 549) == 0)){
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry for the delay!\nI got careless...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("W0402000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nTry not to lose your balance and\nbump into other guys.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            }
        else {
            Voice_PlayVoice("W0402000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Slept in? You're late.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("W0402000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hey... Let's enjoy today.");
            }
        Parameter_InCh1Param(2, 549, 42);
        }
    Character_Chara_GS2(2, "NON");
    }
